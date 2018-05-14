
#ifndef LISTE_HPP_
#define LISTE_HPP_

#include <cassert>
#include <ostream>

// liste d'entiers avec itérateur
class Liste {
    private:
        struct Noeud {
        };

    public:
        class iterator {
            public:
                const iterator & operator++() {
                    return *this;
                }

                int& operator*() const {
                    static int nimpe;
                    return nimpe;
                }

                bool operator!=(const iterator &) const {
                    return false;
                }

                friend Liste; 
        };

    public:
        void push_front(int) { 
        }

        int& front() const {
            static int nimpe;
            return nimpe;
        }

        void clear() {
        }

        bool empty() const {
            return true;
        }

        iterator begin() const {
            return iterator();
        }

        iterator end() const {
            return iterator();
        }

};

std::ostream& operator<<(std::ostream& os, const Liste&) {
    return os;
}

#endif

