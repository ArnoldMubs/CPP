#include <Eigen/QR>
#include <Eigen/Dense>

#include <cassert>
#include <fstream>
#include <iostream>
#include <vector>

using namespace Eigen;

MatrixXd loadCsv(const std::string & path, const char sep) {

    // read input data linearly
    std::ifstream indata(path);
    std::string line;
    std::vector<double> values;
    unsigned rows = 0;
    while (std::getline(indata, line)) {
        std::stringstream lineStream(line);
        std::string cell;
        while (std::getline(lineStream, cell, sep)) {
            values.push_back(std::stod(cell));
        }
        ++rows;
    }

    // build data matrix
    MatrixXd data = Map<MatrixXd>(values.data(), values.size()/rows, rows);
    data.transposeInPlace();
    return data;
}

VectorXd computePolyFit(const VectorXd & x, const VectorXd & y, int deg1) {

    // check inputs
	assert(x.rows() == y.rows());
	assert(x.rows() >= deg1);

    // create A
    // TODO

    // solve Af=y for f
    VectorXd f;
    // TODO

    return f;
}

VectorXd evalPolyFit(const VectorXd & x, const VectorXd & f) {

    VectorXd y;
    // TODO

    return y;
}

int main(int argc, char ** argv) {

    // get command line arguments
    if (argc != 4) {
        std::cout << "usage: " << argv[0] << " <filename> <deg> <divs>\n";
        exit(-1);
    }
    const std::string FILENAME = argv[1];
    const int DEG1 = 1 + atoi(argv[2]);
    const int DIVS = atoi(argv[3]);

    // load data
    MatrixXd data = loadCsv(FILENAME, ' ');
    VectorXd dataX = data.col(0);
    std::clog << "\ndataX:\n" << dataX << std::endl;
    // TODO

    // compute polynomial fitting
    // TODO

    // output some fitted data in std::cout
    double minX = dataX.minCoeff();
    double maxX = dataX.maxCoeff();
    VectorXd fitX = VectorXd::LinSpaced(DIVS, minX, maxX);
    // TODO

    return 0;
}

