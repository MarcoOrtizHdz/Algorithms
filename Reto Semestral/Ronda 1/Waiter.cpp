#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

void change(stack<int> &Aa, stack<int> &Ab, int prm) {
    stack<int> B;
    while(!Aa.empty())
    {
        int tp  = Aa.top();
        Aa.pop();
        if(tp%prm!=0)
            Ab.push(tp);
        else
            B.push(tp);
    }
    
    while(!B.empty())
    {
        cout << B.top() << endl;
        B.pop();
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,Q;
    cin >> N >> Q;
    
    /* Caculate the first Q primes */
    int *prime = new int [Q];
    int cnt = 0;
    for(int i=2;cnt<Q;i++)
    {
        bool flag = true;
        for(int j=2;j<=sqrt(i);j++)
            if(i%j==0)
            {
                flag = false;
                break;
            }
        if(flag)
        {
            prime[cnt] = i;
            cnt++;
        }
    }
    
    /* There are 2 stacks for A, and B needs one */
    stack<int> Aa;
    stack<int> Ab;
    for(int i=0;i<N;i++)
    {
        int tmp;
        cin >> tmp;
        Aa.push(tmp);
    }
    
    for(int i=0;i<Q;i++)
        change(Aa.empty()?Ab:Aa, Aa.empty()?Aa:Ab, prime[i]);
    
    stack<int> A(Aa.empty()?Ab:Aa);
    while(!A.empty())
    {
        cout << A.top() << endl;
        A.pop();
    }
    
    return 0;
}
