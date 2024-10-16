#include <iostream>
using namespace std;

class C {
private:
    string C1;
    int C2;

public:
    C(string c1, int c2) : C1(c1), C2(c2) {}

    void MC1() {
        cout << "Método MC1" << endl;
    }

    void MC2() {
        cout << "Método MC2" << endl;
    }

    string getC1() {
        return C1;
    }

    void setC1(string c1) {
        C1 = c1;
    }

    int getC2() {
        return C2;
    }

    void setC2(int c2) {
        C2 = c2;
    }
};
