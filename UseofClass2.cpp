#include<iostream>
using namespace std;
class person
{
    char name[20];
    char branch[20];
    double cgpa;
    public:
    void initialize(void);
    void display(void);
};
void person::initialize(void)
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter Branch : ";
    cin>>branch;
    cout<<"Enter Cgpa : ";
    cin>>cgpa;
}
void person::display(void)
{
    cout<<"Name: "<<name<<endl;
    cout<<"Branch: "<<branch<<endl;
    cout<<"Cgpa: "<<cgpa;

}
int main()
{
    person p;
    p.initialize();
    p.display();
        return 0;
}