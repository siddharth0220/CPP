#include<iostream>
using namespace std;
class person
{
    char name[20];
    int age;
    public:
    void getdata(void);
    void display(void);
};
void person::getdata(void)
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age : ";
    cin>>age;
}
void person::display(void)
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age;
}
int main()
{
    person p;
    p.getdata();
    p.display();
    return 0;
}