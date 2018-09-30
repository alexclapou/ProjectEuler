//Summation of primes
#include <iostream>
using namespace std;

long int i;
long int s;

int prim(int n)
{
    if(n < 2)
        return 0;
    if(n > 2 && n % 2 == 0)
        return 0;
    for(int d = 3; d * d <= n; d += 2)
        if(n % d == 0)
            return 0;
    return 1;
}

int main()
{
    i = 2000001;
    s = 0;
    while(i)
    {
        if(prim(i))
            s += i;
        i--;
    }
    cout<<s;
    return 0;
}
