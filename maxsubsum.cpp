#include<bits/stdc++.h>
using namespace std;

void maxsubsum(int a[],int n){
  int currsum[n+1];int sum,max1=INT_MIN;
  for(int i=1;i<=n;i++){
    currsum[i]=currsum[i-1]+a[i-1];
  }
  for(int i=1;i<=n;i++){
    
    for(int j=1;j<=i;j++){
      sum=currsum[i]-currsum[j-1];
      max1=max(max1,sum);
    }
  }
  cout<<"The maximum sum:"<<max1;
}

int main()
{
    int a[]={1,-5,6,2,3,-1};
    int n=sizeof(a)/sizeof(a[0]);
    maxsubsum(a,n);
    return 0;
}
