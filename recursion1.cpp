#include <iostream>
using namespace std;

void dec(int n){
  if(n==1){
    printf("1 ");
    return;
  }
  cout<<n<<" ";
  dec(n-1);
}
void inc(int n){
  if(n==1){
    printf("1 ");
    return;
  }
  inc(n-1);
  cout<<n<<" ";
}
int main()
{
    int n=5;
    dec(n);
    printf("\n");
    inc(n);
    return 0;
}
