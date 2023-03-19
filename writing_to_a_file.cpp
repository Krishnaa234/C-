#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outfile;
    outfile.open("afile.dat",ios::app);
    outfile<<"This is first line of the file"<<endl;
    outfile.close();
    return 0;
}