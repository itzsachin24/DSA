#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void pattern18(int n) {
        
        for(int i = 0; i < n; i++) {
            
            
            for(char ch = ('A'+ n-1)-i; ch <= ('A'+ n-1); ch++){
                cout<<ch<<" ";
            }
            
           
            cout << endl;
        }
    }
};

int main() {
    int N = 5;
    
   
    Solution sol;
    
    sol.pattern18(N);
    
    return 0;
}
