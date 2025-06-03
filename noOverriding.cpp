#include <iostream>
using namespace std;

class baseClass {
    public:
        virtual void perkenalan() final {
            cout << "Hallo saya Function dari base class";
        }
};

class derivedClass : public baseClass {
    public:
        void perkenalanLain() {
            cout << "Hallo saya Function dari derived class";
        }
};

int main() {
    derivedClass a;
    a.perkenalanLain();

    return 0;
}