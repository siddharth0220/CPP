#include <iostream>
using namespace std;
int k=50;
int main(){
    int k=5;
    {
        int k=3;
        cout<<"Inner block k="<<k<<endl;
        cout<<"Global k="<<::k<<endl;
    }
    cout <<"Outer block k= "<<k<<endl;
    return 0;
}