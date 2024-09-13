#include <iostream>
using namespace std;
struct Test
{
    int mo;
    int m[5];

};
int main()
{
    Test r;
    int i, t = 0;
    float avg = 0.0;
    cout<<"Enter roll no: ";
    cin>>r.mo;
    for(i=0; i<5; i++)
    {
        cout<<"Enter Marks: ";
        cin>>r.m[i];
        t = t + r.m[i];
    }
    avg = t/5.0;
    cout<<"Roll no: "<<r.mo<<endl;
    cout<<"Total marks: "<<t<<endl;
    cout<<"Average: "<<avg<<endl;
    return 0;

}