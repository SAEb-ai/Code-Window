#include <bits/stdc++.h>
using namespace std;

int getbit(int n,int pos){
  return n&(1<<pos);
}
void unique(int a[],int n){
  int xorsum=0;
  for(int i=0;i<n;i++){
    xorsum=xorsum^a[i];
  }
  int temp=xorsum,pos=0,setbit,r=0;
  while(setbit!=1){
    setbit=xorsum&1;
    pos++;
    xorsum=xorsum>>1;
  }
  for(int i=0;i<n;i++){
    if(getbit(a[i],pos-1)){
      r=r^a[i];
    }
  }
  cout<<(temp^r)<<endl;
  cout<<r;
}
int main()
{
    int a[]={1,2,4,3,3,1};
    int n=sizeof(a)/sizeof(a[0]);
    unique(a,n);
    return 0;
}
