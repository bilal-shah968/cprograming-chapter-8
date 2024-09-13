#include <iostream>
using namespace std;
struct phone
{
  int ncode;
  int acode;
  long number;
};
int main()
{
    phone p1, p2 = {92,41,9220083};
    cout<<"Enter national code:";
    cin>>p1.ncode;
    cout<<"Enter area code:";
    cin>>p1.acode;
    cout<<"Enter phone number: ";
    cin>>p1.number;
    cout<<"Phone number 1: +";
    cout<<p1.ncode<<"-"<<p1.acode<<"-"<<p2.number<<endl;
    cout<<"Phone number 2: +";
    cout<<p2.ncode<<"-"<<p2.acode<<"-"<<p2.number<<endl;
    return 0;
}