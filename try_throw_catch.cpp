#include <iostream>

using namespace std;
int main()
{
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    try{
        if(b==0)
            throw b;
        else
            cout<<"Result is: "<<a/b<<endl;
    }
    catch(...)
    {
        cout<<"b is invalid";
    }
    return 0;
}