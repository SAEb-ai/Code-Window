#include <iostream>
using namespace std;

int firstCheck(int a[],int n,int i,int key){
  if(i==n)
    return -1;
  if(a[i]==key)
    return i;
  return firstCheck(a,n,i+1,key);
}
int lastCheck(int a[],int n,int i,int key){
  if(i==n)
    return -1;
  int rest_array=lastCheck(a,n,i+1,key);
  if(rest_array!=-1)
    return rest_array;
  if(a[i]==key)
    return i;
  return -1;
}
int main()
{
    int a[]={1,2,3,4,5,3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<firstCheck(a,n,0,3)<<" ";
    cout<<lastCheck(a,n,0,3);
    return 0;
}
