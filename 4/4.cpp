//Largest palindrome product
#include <iostream>
using namespace std;

int n;
int verifPalindrom(int n)
{
    int palindrom = 0;
    int init_n;
    init_n = n;
    while(n)
    {
        palindrom = palindrom * 10 + n % 10;
        n = n / 10;
    }
    if(palindrom != init_n)
        return 0;
    return 1;
}

void cautaPalindrom()
{
    int numar;
    int palindrom_max = 0;
    for(int i = 999; i >= 100; i--)
    {
        for(int j = 999; j >= 100; j--)
            {
                numar = i * j;
                if(verifPalindrom(numar) && palindrom_max < numar)
                palindrom_max = numar;
            }
    }
    cout<<palindrom_max;

}
int main()
{
    cautaPalindrom();
    return 0;
}
