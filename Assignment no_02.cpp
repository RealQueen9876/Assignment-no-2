#include<iostream>
using namespace std;
int main()
{
int x,y;
char ch;
while (true)
{
cout<<"Enter 1st integer"<<endl;
cin>>x;
cout<<"Enter 2nd integer"<<endl;
cin>>y;
cout<<"press 1 for Addition"<<endl;
cout<<"press 2 for Subtraction"<<endl;
cout<<"press 3 for Multiplication"<<endl;
cout<<"press 4 for Division"<<endl;
cout<<"press 5 for remainder"<<endl;
cin>>ch;
if (ch=='1')
cout<<x+y<<endl;
else
 if (ch=='2')
cout<<x-y<<endl;
 if (ch=='3')
cout<<x*y<<endl;
else
 if (ch=='4')
cout<<x/y<<endl;
if (ch=='5')
cout<<x%y<<endl;}

}

    