#include <iostream>
using namespace std;
struct Book
{
  int id;
  int pages;
  int price;

};
int main()
{
    Book b[5];
    int i, max,m;
    for(i=0; i,5; i++)
{
    cout<<"Enter Book ID: ";
    cin>>b[i].id;
    cout<<"Enter pages:";
    cin>>b[i].pages;
    cout<<"Enter price: ";
    cin>>b[i].price;



}
 max = b[0].price;
 m = 0;
 for(i=0; i<5; i++)
 if(b[i].price > max)
 {
    max = b[i].price;
    m = i;


 }
 cout<<"\nThe most costly book:\n";
 cout<<"BOok ID: "<<b[m].id<<endl;
 cout<<"Pagres: "<<b[m].pages<<endl;
 cout<<"Prices: "<<b[m].price<<endl;
 return 0;
 
}