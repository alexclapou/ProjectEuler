#include <iostream>
#include <gmpxx.h>
using namespace std;

void generareNUMAR(mpz_t nr)
{
    //generare 2^1000
    mpz_t doi;
    mpz_set_str(doi, "2", 10);
    for(int i = 0; i < 999; i++)
        mpz_mul(nr,nr,doi);
    //suma cifre
    mpz_t zero,suma,uc,zece;
    mpz_init(uc);
    mpz_init(zece);
    mpz_init(suma);
    mpz_set_str(zece, "10", 10);
    mpz_set_str(zero, "0", 10);
    while(mpz_cmp(nr, zero) != 0)
    {
        mpz_mod(uc, nr, zece);
        mpz_add(suma, suma, uc);
        mpz_div(nr, nr, zece);
    }
    cout<<suma;
}

int main()
{
    mpz_t doi,x;
    mpz_init(doi);
    mpz_set_str(doi, "2", 10); 
    generareNUMAR(doi);
    return 0;
}
