const NB_ROWS = 6;
const NB_COLS = 7;

var my_url = document.getElementById('url');
var my_url_button = document.getElementById('urlButton');
var my_info = document.getElementById('info');
var my_ws;

var my_board = [];
var my_boardDiv = document.getElementById('boardDiv');

var my_sendFuncFake = _ => {};
var my_sendFuncPtr = my_sendFuncFake;

function formaterJoueur(joueur) {
  switch (joueur) {
    case "R" : return "Rouge";
    case "J" : return "Jaune";
    case "X" : return "Personne";
    default : return "Inconnu";
  }
}

function cleanBoard() {
  for (let i=NB_ROWS-1; i>=0; i--) {
    for (let j=0; j<NB_COLS; j++) {
      my_board[i][j].className = 'a playerB';
    }
  }
}

function majBoard(data) {
  let k = 0;
  for (let i=NB_ROWS-1; i>=0; i--) {
    for (let j=0; j<NB_COLS; j++) {
      const player = data[k];
      const playerclass = player == "R" || player == "J" ? player : "B"
      my_board[i][j].className = 'a player' + playerclass;
      k += 1;
    }
  }
}

my_url_button.onclick = function (_) {

  // ferme l'éventuelle connexion précédente
  if (my_ws) { 
    my_ws.close();
    cleanBoard();
  }

  // crée une nouvelle connexion
  const url = my_url.value;
  my_ws = new WebSocket(url);

  my_ws.onerror = _ => my_info.innerHTML = "Erreur de connexion";

  my_ws.onopen = function (_) { 
    my_info.innerHTML = "Connexion en cours, patientez...";
  }

  my_ws.onmessage = function (event) {
    const msg = event.data;
    const courant = msg[42];
    const vainqueur = msg[43];
    const client = msg[44];
    majBoard(msg);

    if (vainqueur != ".") {
      my_sendFuncPtr = my_sendFuncFake;
      my_info.innerHTML = "Vainqueur : " + formaterJoueur(vainqueur)
        + ". Appuyez sur connexion pour une nouvelle partie...";
    }
    else if (courant == client) {
      my_sendFuncPtr = n => my_ws.send(n);
      my_info.innerHTML = "À vous de jouer : " + formaterJoueur(client);
    }
    else {
      my_sendFuncPtr = my_sendFuncFake;
      my_info.innerHTML = "Votre adversaire joue, patientez...";
    }
  };
}

function mkClickFunc(j) {
  return function(_) {
    const n = j.toString();
    my_sendFuncPtr(n);
  }
}

let my_table = document.createElement("TABLE")
for (let i=0; i<NB_ROWS; i++) {
  let tr = document.createElement("TR");
  my_board[i] = [];
  my_table.appendChild(tr);
  for (let j=0; j<NB_COLS; j++) {
    let td = document.createElement("TD");
    td.onclick = mkClickFunc(j);
    tr.appendChild(td);
    my_board[i][j] = td;
  }
}
my_boardDiv.appendChild(my_table);

