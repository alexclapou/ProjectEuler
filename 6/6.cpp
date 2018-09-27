//Sum square difference
#include <iostream>
#include <cmath>
using namespace std;

int n;

int suma1(int n)
{
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        s += pow(i, 2);
    }
    return s;
}

int suma2(int n)
{
    int suma;
    long long patr_suma;
    suma = (n * (n + 1)) / 2;
    patr_suma = pow(suma, 2);
    return patr_suma;
}

int diferenta(int n)
{
    return suma2(n) - suma1(n);
}
int main()
{
    cin>>n;
    cout<<diferenta(n);
    return 0;
}
