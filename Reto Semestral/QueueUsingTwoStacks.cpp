#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
  queue<int> q;
  queue<int> disp;
  int n; // numero de queries
  int op, enq; // op es para las instrucciones, enq es para el numero de enqueue

  cin >> n;

  for ( int i = 1; i <= n ; i++ ) {
    cin >> op; 
    if ( op == 1 ) {
      cin >> enq; 
      q.push(enq); 
    }
    else if ( op == 2 ) {
      q.pop();
    }
    else {
      disp.push(q.front());
    }
  }

  while ( !disp.empty() ) {
    cout << disp.front() << endl;
    disp.pop();
  }

  return 0;
}
