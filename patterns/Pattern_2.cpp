#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

  
    static void pattern2(int n) {
        
       
        for (int i = 0; i < n; i++) {
            
           
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            
            cout << endl;
        }
    }
};

int main() {
    int N = 5;
    
   
    Solution sol;
    
    sol.pattern2(N);

    return 0;
}
