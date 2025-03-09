#include <iostream>
using namespace std ;
int max(int, int);
int main(){
    int a=5,b=10;
    int m=max(a,b);
    cout<<m<<endl;
    return 0;
}
int max(int p,int q){
if(p>q)
return p;
else 
return q;
}