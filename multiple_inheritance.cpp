//program for multiple/hierarical inheritanee
#include<iostream>
using namespace std;
class school
{
    public:
        school()
        {
            cout<<"Welcome to school."<<endl;
        }
        ~school()
        {
            cout<<"Bye bye school."<<endl;
        }
};
class teacher
{
    public:
        teacher()
        {
            cout<<"Constructor of teacher class."<<endl;
        }
        ~teacher()
        {
            cout<<"Thankyou teacher."<<endl;
        }
};
class student : public teacher, public school
{
    public:
        student()
        {
            cout<<"Constructor of student class."<<endl;
        }
        ~student()
        {
            cout<<"Destroy student."<<endl;
        }
};
int main()
{
    student S;
}