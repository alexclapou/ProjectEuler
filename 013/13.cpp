#include <iostream>
#include <gmpxx.h>
#include <fstream>
#include <typeinfo>

using namespace std;
ifstream fin("13.in");

mpz_t v[500], suma, one, T, last, fsuma, MAXX;
int n;

void citire()
{
    mpz_t x;
    n = 1;
    mpz_init(x);
    while(fin>>x)
    {
        mpz_init(v[n]);
        mpz_add(v[n], v[n], x);
        n++;
    }
}

void suma_nr()
{
    for(int i = 1; i < n; i++)
    {
        mpz_add(suma,suma,v[i]);
    }
}

int main()
{
    citire();
    mpz_init(T);
    mpz_init(MAXX);
    mpz_init(suma);
    mpz_init(one);
    mpz_init(fsuma);
    mpz_set_str(one, "0", 10);
    mpz_set_str(T,"10", 10);
    mpz_set_si(MAXX,9999999999);
    suma_nr();
    while(mpz_cmp(suma, MAXX) > 0)
    {
        mpz_div(suma, suma, T);
    }
    cout<<suma;
    return 0;
}
