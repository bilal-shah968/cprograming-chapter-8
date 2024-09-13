#include <iostream>
using namespace std;
struct Marks
{
  int m;
  char g;

};
int main()
{
    Marks a,b;
    cout<<"Enter Marks: ";
    cin>>a.m;
    cout<<"Enter grade: ";
    cin>>a.g;
    b = a;
    cout<<"The first record is as follows.\n";
    cout<<"Marks: "<<a.m<<endl;
    cout<<"Grade: "<<a.g<<endl;
    cout<<"The second record is as follows:\n";
    cout<<"Marks: "<<b.m<<endl;
    cout<<"Grade: "<<b.g<<endl;
    return 0;
    
}  