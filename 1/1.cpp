//Multiples of 3 and 5
#include <iostream>
using namespace std;

int n;
int s;
int main()
{
    for(int i = 1; i < 1000; i++)
        if(i % 3 == 0 || i % 5 == 0)
            s += i;
    cout<<s;
    return 0;
}
