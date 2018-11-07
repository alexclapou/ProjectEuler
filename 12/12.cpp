#include <iostream>
#include <cmath>
using namespace std;

int i;
long long int numarTriunghiular;
int nrDivizori;
const int gasit = 500;

int nr_divizori(int x)
{
    if(x == 1)
        return 1;
    else
    {
        nrDivizori = 1 ;
        for(int i = 2; i < sqrt(x); i++)
            if(x % i == 0)
                nrDivizori++;
        if(x == int(sqrt(x)) * (sqrt(x)))
            return (nrDivizori * 2) + 1 ;
        else
            return nrDivizori * 2;
    }
}

void nr_triunghiular()
{
    i = 1;
    while(nr_divizori(numarTriunghiular) <= gasit)
    {
        numarTriunghiular = ((i * i) + i ) / 2;
        i++;
    }
    cout<<numarTriunghiular;
}

int main()
{
    nr_triunghiular();
    return 0;
}
