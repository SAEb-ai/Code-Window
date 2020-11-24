#include <iostream>
using namespace std;
int getbit(int n,int pos){
  return n&(1<<pos);
}
int setbit(int n,int pos){
  return n|(1<<pos);
}
int bit3(int a[],int n){
  int x=0;
  for(int i=0;i<64;i++){
    int count=0;
    for(int j=0;j<n;j++){
      if(getbit(a[j],i))
        count++;
    }
    if(count%3!=0)
      x=setbit(x,i);
  }
  return x;
}
int main()
{
   int a[]={1,1,2,1,4,2,2};
   int n=sizeof(a)/sizeof(a[0]);
   cout<<bit3(a,n);
   return 0;
}
