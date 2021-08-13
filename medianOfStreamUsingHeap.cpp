#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>

priority_queue<int, vi> pqmax;
priority_queue<int, vi, greater<int>> pqmin;

void insert(int n) {
  
  if(pqmax.size()==pqmin.size()) {
    if(pqmax.size()==0) {
      pqmax.push(n);
      return;
    }
    if(n<pqmax.top()) {
      pqmax.push(n);
    }
    else {
      pqmin.push(n);
    }
  }
  else {
    if(pqmax.size()>pqmin.size()) {
      if(n<pqmax.top()) {
        pqmin.push(pqmax.top());
        pqmax.pop();
        pqmax.push(n);
      }
      else {
        pqmin.push(n);
      }
    }
    else {
      if(n<pqmax.top()) {
        pqmax.push(n);
      }
      else {
        pqmax.push(pqmin.top());
        pqmin.pop();
        pqmin.push(n);
      }
    }
  }
}

double calMedian() {
  if(pqmax.size()==pqmin.size()) {
    return (pqmax.top()+pqmin.top())/2.0;
  }
  else {
    if(pqmax.size()>pqmin.size()) {
      return pqmax.top();
    }
    else {
      return pqmin.top();
    }
  }
}

int main()
{
    insert(10);
    cout<<calMedian()<<endl;
    insert(15);
    cout<<calMedian()<<endl;
    insert(21);
    cout<<calMedian()<<endl;
    insert(30);
    cout<<calMedian()<<endl;
    insert(18);
    cout<<calMedian()<<endl;
    insert(19);
    cout<<calMedian()<<endl;
}
