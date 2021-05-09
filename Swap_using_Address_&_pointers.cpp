#include<iostream>
#include<conio.h>
using namespace std;
int swap(int*,int*); //fun dec
int swap(int *x,int*y)
{
  *x=*x^*y;
  *y=*x^*y;
  *x=*x^*y;
}
int main()
{
  int a,b;
  cout<<"enter two numbers";
  cin>>a>>b;
  cout<<"value before swap"<<endl;
  cout<<"a="<<a<<"\t"<<"b="<<b;
  swap(&a,&b); //fun call
  cout<<"\nvalue after swap"<<endl;
  cout<<"a="<<a<<"\t"<<"b="<<b;
}
 
