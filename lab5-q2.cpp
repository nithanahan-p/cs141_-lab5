#include<iostream>
using namespace std;
int main(){
   //declairing variables
   int a,b,c;
   //writing three numbers
   cout<<"entering three numbers"<<endl;
   cin>>a;
   cin>>b;
   cin>>c;
   if (a>b&&a>c)
   //printing output
   cout<<"a is the greatest number"<<endl;
   //else do this
   else if (b>a&&b>c)
   cout<<"b is the greatest number"<<endl;
   //else do this
   else (c>a&&c>b);
   cout<<"c is the greatest number"<<endl;
   return 0;
}
