#include<iostream>
using namespace std;
void increment(int *a)
 {
    (*a)++;
 }
 void swap(int *a, int *b)
 {
   int t;
   t=*a;
   *a=*b;
   *b=t;
 }
int main() 
{
  int b=2; 
 increment(&b);
 cout<<b<<endl;
 int c=15;
 int d=20;
 cout<<"c:"<<c<<endl;
 cout<<"d:"<<d<<endl;
 swap(&c,&d);
 cout<<"After swapping:"<<endl;
 cout<<"c:"<<c<<endl;
 cout<<"d:"<<d<<endl;
 
 return 0;
}
/*
OUTPUT
c:15
d:20
After swapping:
c:20
d:15
*/
