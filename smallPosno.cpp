#include <iostream>
using namespace std;

int smallPosno(int a[],int n){
  bool b[n+1]={false};
  for(int i=0;i<n;i++){
    if(a[i]>0&&a[i]<=n){
      b[a[i]]=true;
    }
  }
  for(int i=1;i<=n;i++){
    if(!b[i]){
      return i;
    }
  }
  return n+1;
}

int main()
{
    int a[]={0,-10,1,3,-20};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"The smallest positive missing no:"<<smallPosno(a,n);
    return 0;
}
