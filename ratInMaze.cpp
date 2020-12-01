#include <iostream>
using namespace std;

bool isSafe(int **a,int x, int y, int n){
  if(x<n&&y<n&&a[x][y]==1){
    return true;
  }
  return false;
}
bool ratInMaze(int **a,int x,int y,int n,int** sol){
  if(x==n-1&&y==n-1){
    sol[x][y]=1;
    return true;
  }
    
  if(isSafe(a,x,y,n)){
    sol[x][y]=1;
    if(ratInMaze(a,x+1,y,n,sol))
      return true;
    if(ratInMaze(a,x,y+1,n,sol))
      return true;
    sol[x][y]=0;
    return false;
  }
  return false;
}

int main()
{
    int **a=new int*[5];
    for(int i=0;i<5;i++)
      a[i]=new int[5];
    int **sol=new int*[5];
    for(int i=0;i<5;i++)
      sol[i]=new int[5];
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        cin>>a[i][j];
      }
    }
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        sol[i][j]=0;
      }
    }
    cout<<endl;
    ratInMaze(a,0,0,5,sol);
     for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        cout<<sol[i][j]<<" ";
      }
      cout<<endl;
    }
}
