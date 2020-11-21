#include <bits/stdc++.h>
using namespace std;

int isort(int a[],int n){
  for(int i=1;i<n;i++){
    int current=a[i];
    int j=i-1;
    while(a[j]>current&&j>=0){
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=current;
  }
  cout<<"The sorted array:"<<endl;;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}
int main()
{
    int a[]={4,8,3,9,5};
    int n=sizeof(a)/sizeof(a[0]);
    isort(a,n);
    return 0;
}
