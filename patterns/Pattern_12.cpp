#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void pattern12(int n) {
        
      
      int spaces = 2*(n-1);
      
      
      for(int i=1;i<=n;i++){
          
          
          for(int j=1;j<=i;j++){
              cout<<j;
          }
          
          
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
         
          for(int j=i;j>=1;j--){
              cout<<j;
          }
          
          
          cout<<endl;
          
          
          spaces-=2;
        }
    }

};

int main() {
    int N = 5;

   
    Solution sol;

    sol.pattern12(N);

    return 0;
}