#include <bits/stdc++.h>
#include <math.h>
using namespace std;

class Solution {
public:

    
    static void pattern4(int n) {
        
       
        for (int i = 1; i <= n; i++) {
            
            
            for (int j = 1; j <= i; j++) {
                cout << i;
            }
            
            cout << endl;
        }
    }
};

int main() {
    int N = 5;
    
    
    Solution sol;
    
    sol.pattern4(N);

    return 0;
}
