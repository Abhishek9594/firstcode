#include<iostream>
#include<conio.h>
swap(int*,int*); //fun dec
swap(int *x,int*y)
{ 
  *x=*x^*y;
  *y=*x^*y;
  *x=*x^*y;
}
void main()
{ 
  int a,b;
  cout<<"enter two numbers";
  cin>>a>>b;
  cout<<"value before swap";
  cout<<"a="<<a<<"\t"<<"b="<<b;
  swap(&a,&b); //fun call
  cout<<"value after swap";
 cout<<"a="<<a<<"\t"<<"b="<<b;
} 
