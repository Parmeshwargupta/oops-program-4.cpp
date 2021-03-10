  // PARMESHWAR GUPTA (191920) B. TECH 2nd year 4th sem central university of Haryana

//WAP to show the effect default arguments can be alternatively achieved by overloading.




#include<iostream>
using namespace std;
float power(int x);
float power(int a, int b);
 int main()
 {
 int a,b,c;
 cout<<"enter the value of a,b and c";
 cin>>a>>b>>c;
 power(a);
 power(b,c);
 return 0;
}
float power(int x)
{
 int result=1,i, y=2;
 for(i=1;i<=y;i++)
 {
 result=result*x;
 }
 cout<<"result1 is:"<<result<<endl;
return 0;
}
float power(int x,int y)
{
 int result=1,i;
 for(i=1;i<=y;i++)
 {
 result=result*x;
 }
 cout<<"result2is:"<<result;
return 0;
}
