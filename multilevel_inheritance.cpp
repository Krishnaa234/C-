//Multilevel inheritance, run time polymorphism using virtual function and pointer 
#include <iostream>
using namespace std;
class person
{
    public:
        virtual void fun()
            {
                cout<<"I'm in person class"<<endl;  
            }
};
class employee : public person
{
    public:
        void fun()
            {
                cout<<"I'm in employee class."<<endl;
            }
};
class teacher : public employee
{
    public:
        void fun()
            {
                cout<<"I'm in teacher class."<<endl;
            }
};
int main()
{
    person *ptr;
    employee E;
    teacher T;
    ptr=&E;
    ptr->fun();
    ptr=&T;
    ptr->fun();
}