#include <iostream>

using namespace std;
class doctor
{
    int num;
    public:
        doctor()
        {
            num=0;
        }
    friend int addone(doctor &);
};

int addone(doctor & d)
{
    d.num+=1;
    return d.num;
}

int main()
{
    doctor n;
    int g=0;
    cout<<"The number of patients are: ";
    for(int i=1; i<=10; i++)
    {
        cout<<addone(n)<<"\t";
    }
    return 0;
}