#include <iostream>
using namespace std;
struct student
{
    int rno;
    int marks;
    float avg;
    char grade;

     
};
int main()
{
    student s;
    cout<<"Enter roll no:";
    cin>>s.rno;
    cout<<"enter marks:";
    cin>>s.rno;
    cout<<"Enter average:";
    cin>>s.avg;
    cout<<"Enter grade:";
    cin>>s.grade;
    cout<<"You entered the following details: \n";
    cout<<"Roll No: "<<s.rno<<endl;
    cout<<"Marks: "<<s.marks<<endl;
    cout<<"Average:" <<s.avg<<endl;
    cout<<"Grade: "<<s.grade<<endl;
    return 0;

}