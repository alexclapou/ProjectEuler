//Smallest multiple
#include <iostream>
using namespace std;

long long int n;
int c;
int i;
int main()
{
    i = 2;
    n = 20;
    while(c <= 20 && i <= 20)
    {
        if(n*n % i == 0)
        {
            c++;
            i++;
        }
        else 
        {
            n++;
            c = 0;
            i = 2;
        }
        cout<<n<<endl;
    }
    return 0;
}
