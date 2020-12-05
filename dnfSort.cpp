#include <bits/stdc++.h>
using namespace std;


void swap(int a[],int b,int c){
  int temp=a[b];
  a[b]=a[c];
  a[c]=temp;
}
void dnfSort(int a[],int low,int mid,int high){
  while(mid<=high){
  if(a[mid]==0){
    swap(a,low,mid);
    low++;mid++;
  }
  else if(a[mid]==1){
    mid++;
  }
  else if(a[mid]==2){
    swap(a,mid,high);
    high--;
  }
  }
}

int main()
{
    int a[]={1,1,0,2,1,1,0,2,0,1};
    dnfSort(a,0,0,9);
    for(int i=0;i<10;i++){
      cout<<a[i]<<" ";
    }
    return 0;
}
