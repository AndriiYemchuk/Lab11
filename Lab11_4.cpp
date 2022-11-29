//Обчислити значення змінної Z, вираз якої вказано у таблиці 1.

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 8;
    int k;
    float a, b, f, z;
    double x;

    f = 6.9*log(abs(6+x))+cos(4.6*x);

    for(k=i; i>i+5;i++)
    {
       a = 6.9*log(abs(6+k))+cos(4.6*k);
    }
    for(k=i;i>i+8;i++)
    {
       b = 6.9*log(abs(6+k))+cos(4.6*k);
    }


    z = (pow(a,2))+(3*b);


    cout << "i = " << i << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "z = " << z << endl;

}