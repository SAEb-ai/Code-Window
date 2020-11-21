#include <bits/stdc++.h>
using namespace std;

int firstRepEle(int a[],int n){
    const int N=10e+6;
    int index[N];
    for(int i=0;i<N;i++){
      index[i]=-1;
    }
    int min1=INT_MAX;
    for(int i=0;i<n;i++){
      if(index[a[i]]==-1){
        index[a[i]]=i;
      }
      else{
        min1=min(min1,index[a[i]]);
      }
    }
    if(min1==INT_MAX)
      return -1;
    else
      return min1+1;
}
int main()
{
    int a[]={1,5,3,4,3,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"First Repeating Element:"<<firstRepEle(a,n);
    return 0;
}
