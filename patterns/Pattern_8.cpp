#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    
    static void pattern8(int n) {
        
      
        for (int i = 0; i < n; i++) {
            
            
            for(int j = 0; j < i; j++){
                cout << " ";
            }
            
            
            for (int j = 0; j < 2*n-(2*i+1); j++) {
                cout << "*";
            }
            
            cout << endl;
        }
    }
};

int main() {
    int N = 5;
    
    
    Solution sol;
    
    sol.pattern8(N);

    return 0;
}
