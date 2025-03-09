#include <iostream>
using namespace std;
void swap(int &, int &);
int main() {
    int a = 5, b = 10;
    swap(a, b);
    cout <<a<<" "<<b<< endl;
    return 0;
}
void swap(int &p, int &q) {
    int k = p;
    p = q;
    q = k;
}
