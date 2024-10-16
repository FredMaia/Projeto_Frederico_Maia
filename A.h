#include <iostream>

using namespace std;

class A
{
private:
    int A1;
    float A2;

public:
    // Getters
    int getA1() const
    {
        return A1;
    }

    float getA2() const
    {
        return A2;
    }

    // Setters
    void setA1(int a1)
    {
        A1 = a1;
    }

    void setA2(float a2)
    {
        A2 = a2;
    }

    // Métodos
    void MA1()
    {
        cout << "Método MA1" << endl;
    }

    void MA2()
    {
        cout << "Método MA2" << endl;
    }
};