//10001st prime
#include <iostream>
using namespace std;

int c;
int ultim_prim;
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

void prim10001()
{
    for(int i = 1;c < 10001 ; i++)
    {
        if(prim(i))
        {
            c++;
            ultim_prim = i;
        }
    }
    cout<<ultim_prim;
}
int main()
{
    prim10001();
    return 0;
}
