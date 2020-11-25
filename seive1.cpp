#include <iostream>
using namespace std;

void sieve(int n){
  int a[n+1]={0};
  for(int i=2;i<=n;i++){
    if(a[i]==0){
      for(int j=i*i;j<=n;j+=i)
        a[j]=1;
    }
  }
  for(int i=2;i<=n;i++){
    if(a[i]==0){
      cout<<i<<" ";
    }
  }
}

int main()
{
   sieve(50);
   return 0;
}
