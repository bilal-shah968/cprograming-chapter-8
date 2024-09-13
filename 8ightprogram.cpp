#include <iostream>
using namespace std;
struct Result
{
  int marks;
  char grade;

};
struct Record
{
    int rno;
    Result r;

};
int main()
{
  Record rec;
  cout<<"Enter roll no: ";
  cin>>rec.rno;
  cout<<"Enter marks: ";
  cin>>rec.r.marks;
  cout<<"Enter grade: ";
  cin>>rec.r.grade;
  cout<<"Roll no: "<<rec.r.marks<<endl;
  cout<<"Grade: "<<rec.r.grade<<endl;
  return 0;
}
