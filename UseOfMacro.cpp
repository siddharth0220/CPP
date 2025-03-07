//It is treated by pre-processor .
//It is prone to errors so it is avoided hence inline functions are used.
#include <iostream>
using namespace std;
#define pi 3.14
#define square(r) r*r
int main(){
    int r;
    cout<<"Enter the radius to Find the area of the Circle : ";
    cin>>r;
    double area=pi*square(r);
    cout<<"The area of the circle is :"<< area;
}