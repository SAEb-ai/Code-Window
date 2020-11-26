#include <iostream>
using namespace std;



int main()
{
   int a=8,b=8;
   while(b!=0){
     int d=a%b;
     a=b;
     b=d;
   }
   cout<<a;
}
