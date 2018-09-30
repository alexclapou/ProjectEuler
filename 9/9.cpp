//Special Pythagorean triplet
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   for(int i = 3; i < 334; i++)
        for(int j = i + 1; j < 1000; j++)
            for(int k = j + 1;k < 1000; k++)
                if(pow(i, 2) + pow(j, 2) == pow(k, 2))
                    if(i + j + k == 1000)
                    cout<<i * j * k;
    return 0;
}
