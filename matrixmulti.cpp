#include <iostream>
using namespace std;

int main()
{
    int n1=2,n2=3,n3=3;
    int a[n1][n2]={{1,2,3},{4,5,6}};
    int b[n2][n3]={{7,8,9},{10,11,12},{13,14,15}};
    int c[n1][n3];
    for(int i=0;i<n1;i++){
      for(int j=0;j<n3;j++){
        c[i][j]=0;
      }
    }
    for(int i=0;i<n1;i++){
      for(int j=0;j<n3;j++){
        for(int k=0;k<n2;k++){
          c[i][j]+=a[i][k]*b[k][j];
        }
      }
    }
    for(int i=0;i<n1;i++){
      for(int j=0;j<n3;j++){
        cout<<c[i][j]<<" ";
      }
      cout<<endl;
    }
}
