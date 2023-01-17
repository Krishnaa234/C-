#include<iostream>
using namespace std;
class grand
{
    public:
        grand()
        {
            cout<<"This is grand constructor"<<endl;
        }
        ~grand()
        {
            cout<<"Grand destructor"<<endl;
        }
};
class mother : public grand
{
    public:
        mother()
        {
            cout<<"This is mother constructor"<<endl;
        }
        ~mother()
        {
            cout<<"Mother destructor"<<endl;
        }
};
class father : public grand
{
    public:
        father()
        {
            cout<<"This is father constructor"<<endl;
        }
        ~father()
        {
            cout<<"Father destructor"<<endl;
        }
};
class child : public father, public mother
{
    public:
        child()
        {
            cout<<"This is child constructor"<<endl;
        }
        ~child()
        {
            cout<<"Child destructor"<<endl;
        }
};
int main()
{
    child C;
    return 0;
}