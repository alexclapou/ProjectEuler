//Largest product in a grid
#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("11.in");

int m[20][20];
int n;
int i;
int j;

int prod_i()
{
    long long int p;
    long long int maxim = 0;
    p = 1;
    for(int i = 0; i < 17; i++)
    {
        p = 1;
        for(int j = 0; j < 20; j++)
        {
            p = 1;
            p = m[i][j] * m[i + 1][j] * m[i + 2][j] * m[i + 3][j];
            if(p > maxim)
                maxim = p;
        }
    }
    return maxim;
}
int prod_j()
{
    long long int p;
    p = 1;
    long long int maxim = 0;
    for(int i = 0; i < 20; i++)
    {
        p = 1;
        for(int j = 0; j < 17; j++)
        {
            p = 1;
            p = m[i][j] * m[i][j + 1] * m[i][j + 2] * m[i][j + 3];
            if(p > maxim)
                maxim = p;
        }
    }
    return maxim;
}

void citire()
{
    for(int i = 0; i < 20; i ++)
        for(int j = 0; j < 20; j++)
            fin>>m[i][j];
}

void afisare()
{
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 20; j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    } 
}

int prod_ij()
{
    long long int maxim;
    long long int p;
    maxim = 0;
    p = 1;
    for(int i = 0; i < 17; i++)
    {
        p = 1;
        for(int j = 0; j < 17; j++)
        {
            p = 1;
            p = m[i][j] * m[i + 1][j + 1] * m[i + 2][j + 2] * m[i + 3][j + 3];
            if(p > maxim)
                maxim = p;
        }
    }
    return maxim;
}
int prod_ji()
{
    long long int maxim;
    long long int p;
    p = 1;
    maxim = 0;
    for(int i = 0; i < 17; i++)
    {
        p = 1;
        for(int j = 3; j < 20; j++)
        {
            p = 1;
            p =  m[i][j] * m[i + 1][j - 1] * m[i + 2][j - 2] * m[i + 3][j - 3]; 
            if(p > maxim)
                maxim = p;
        }
    }
    return maxim;
}

int maxim(int a, int b)
{
    if(a > b)
        return a;
    return b;
}
int main()
{
    citire();
    //afisare();
    cout<<maxim(maxim(prod_i(), prod_j()), maxim(prod_ij(), prod_ji()));
    return 0;
}
