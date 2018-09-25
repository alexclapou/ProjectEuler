//Largest prime factor
#include <iostream>
using namespace std;

int s=0;
long long int maxim;
long long int ultima_cifra;
long long int Y = 2;
int sumaCifre(long long int n)
{
   while(n>0)
   {
       s = s + n % 10;
       n = n / 10;
   }
  return s; 
}
int prim(long long int n)
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
long long int factorPrim(long long int n)
{
    if(sumaCifre(n) == Y)
        return factorPrim(n / Y);
    else if(prim(n))
        return n;
    else
    {
        if(n % Y == 0)
           return factorPrim(n / Y);
        else
        { 
            Y++;
            return factorPrim(n);
        }
    }
}
int main()
{
    long long int n;
    cin>>n;
    cout<<factorPrim(n);
    return 0;
}
