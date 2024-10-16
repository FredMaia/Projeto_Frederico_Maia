#include <iostream>

using namespace std;


class D
{
private:
    int D1;
    float D2;

public:
    // Getters
    int getB1() const
    {
        return D1;
    }

    float getB2() const
    {
        return D2;
    }

    // Setters
    void setB1(int d1)
    {
        D1 = d1;
    }

    void setB2(float d2)
    {
        D2 = d2;
    }

    // Métodos
    void MB1()
    {
        cout << "Método MB1" << endl;
    }

    void MB2()
    {
        cout << "Método MB2" << endl;
    }

    void MB2()
    {
        cout << "Método MB3" << endl;
    }
};
