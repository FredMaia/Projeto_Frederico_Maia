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
    void MD1()
    {
        cout << "Método MD1" << endl;
    }

    void MD2()
    {
        cout << "Método MD2" << endl;
    }

    void MD3()
    {
        cout << "Método MD3" << endl;
    }
};
