//ulimit -s unlimited in consola 
#include <iostream>

using namespace std;

long long int nr;
long long int maxx;
long long int x;
long long int nrmax;

/*void generareSIR(long long int numar)
{
    if(numar > 1)
    {
        lungime++;
        cout<<numar<<" ";
        if(numar % 2 == 0)
            generareSIR(numar / 2);
        else
            generareSIR(numar * 3 + 1);
    }
    else {
        cout<<1;
        lungime++;
    }
}
*/

long long int lungimeSIR(long long int numar)
{
    if(numar == 1)
        return 1;
    else
        if(numar % 2 == 0)
            return 1 + lungimeSIR(numar / 2);
        else
            return 1 + lungimeSIR(numar * 3 + 1);
}

void aflareMAX(long long int numar)
{
    if(numar > 0)
    {
        x = lungimeSIR(numar);
        if(maxx < x)
            {
                maxx = x;
                nrmax = numar;
            }
        aflareMAX(numar - 1);
    }
}

int main()
{
    //cin>>nr;
    aflareMAX(1000000);
    cout<<maxx<<" "<<nrmax;
    return 1;
}
