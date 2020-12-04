#include <bits/stdc++.h>
using namespace std;

void swap(int a[],int i,int j){
  int temp=a[i];
  a[i]=a[j];
  a[j]=temp;
}
int partition(int a[],int l, int r){
  int pivot=a[r];
  int i=l-1;
  for(int j=l;j<=r-1;j++){
    if(a[j]<pivot){
      i++;
      swap(a,i,j);
    }
  }
  swap(a,i+1,r);
  return i+1;
}
void quickSort(int a[],int l,int r){
  if(l<r){
  int pivot=partition(a,l,r);
  
  quickSort(a,l,pivot-1);
  quickSort(a,pivot+1,r);
  }
}

int main()
{
    int a[]={5,6,1,4,7,3};
    quickSort(a,0,5);
    for(int i=0;i<=5;i++){
      cout<<a[i]<<" ";
    }
    return 0;
}
