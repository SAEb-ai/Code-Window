#include <iostream>
using namespace std;

int getbit(int n,int pos){
  return n&(1<<pos);
}
void sub(int a[],int n){
  for(int i=0;i<(1<<n);i++){
    for(int j=0;j<n;j++){
      if(getbit(i,j))
        cout<<a[j];
    }
    cout<<endl;
  }
}

int main()
{
   int a[]={1,2,3,4};
   int n=sizeof(a)/sizeof(a[0]);
   sub(a,n);
}
