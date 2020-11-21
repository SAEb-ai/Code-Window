#include <iostream>
using namespace std;

void subarr(int a[],int n,int sum){
  int sum1=0,i=0,j=0,st,en;
  while(j<n&&(a[j]+sum1)<=sum){
    sum1=sum1+a[j];
    j++;
  }
  if(sum1==sum){
    cout<<i+1<<" "<<j;return;
  }
  while(j<n){
    sum1=sum1+a[j];
    while(sum1>sum){
      sum1=sum1-a[i];
      i++;
    }
    if(sum1==sum){
      st=i+1;
      en=j+1;
      break;
    }
    j++;
  }
  if(st==-1)
    cout<<"Sum not found";
  else
    cout<<st<<" "<<en;
}

int main()
{
    int a[]={1,2,3,7,5};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=12;
    subarr(a,n,sum);
    return 0;
}
