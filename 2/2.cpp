//Even Fibonacci numbers
#include <iostream>
using namespace std;

int n;
int i = 1;
int s;
int limita = 4000000;
void fib()
{
    int prim = 1;
    int secund = 2;
    while(i)
    {
        if(prim > limita || secund > limita)
            break;
        if(prim % 2 != 0)
            ;
        else
            s+= prim;         
        prim += secund;
        if(secund % 2 != 0)
            ;
        else
            s += secund;    
        secund += prim;
        i++;
    }
    cout<<s;
}
int main()
{
    fib();
    return 0;
}
