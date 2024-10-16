#include <iostream>

using namespace std;

class B
{
private:
    int B1;
    float B2;

public:
    // Getters
    int getB1() const
    {
        return B1;
    }

    float getB2() const
    {
        return B2;
    }

    // Setters
    void setB1(int b1)
    {
        B1 = b1;
    }

    void setB2(float b2)
    {
        B2 = b2;
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
};
