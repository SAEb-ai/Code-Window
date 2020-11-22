#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row_start=0,row_end=2,column_start=0,column_end=2;
    while(row_start<=row_end&&column_start<=column_end){
    for(int col=column_start;col<=column_end;col++){
      cout<<a[row_start][col]<<" ";
    }
    row_start++;
    for(int row=row_start;row<=row_end;row++){
      cout<<a[row][column_end]<<" ";
    }
    column_end--;
    for(int col=column_end;col>=column_start;col--){
      cout<<a[row_end][col]<<" ";
    }
    row_end--;
    for(int row=row_end;row>=row_start;row--){
      cout<<a[row][column_start]<<" ";
    }
    column_start++;
  } 
    return 0;
}
