#include <iostream>
using namespace std;
int max(int a, int b)
{
    return a>b?a:b;
}
double max(double a,double b)
{
    return a>b?a:b;
}
int max(int a, int b, int c)
{
    return max(a,b)>c?max(a,b):c;
}
double max(double a,double b,double c)
{
    return max(a,b)>c?max(a,b):c;
}
int main()
{
    cout <<max(1,2,3)<<endl;
    cout <<max(1.9,1.990)<<endl;
    cout <<max(-190,-195)<<endl;
    cout <<max(-1.9,-1.990,-1.8899)<<endl;
}