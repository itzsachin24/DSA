#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   
    int mostFrequentElement(vector<int> &nums) {
        
      
        int n = nums.size();
        
       
        int maxFreq = 0; 
        
       
        int maxEle;
        
        
        vector<bool> visited(n, false);
        
        
        for(int i = 0; i < n; i++) {
           
            if(visited[i]) continue;
            
            
            int freq = 0;
            
            
            for(int j = i; j < n; j++) {
                if(nums[i] == nums[j]) {
                    freq++;
                    visited[j] = true;
                }
            }
            
            
            if(freq > maxFreq) {
                maxFreq = freq;
                maxEle = nums[i];
            } else if(freq == maxFreq) {
                maxEle = min(maxEle, nums[i]);
            }
        }
        
       
        return maxEle;
    }
};

int main() {
    vector<int> nums = {4, 4, 5, 5, 6};
    
  
    Solution sol; 
    
    
    int ans = sol.mostFrequentElement(nums);
    
    cout << "The highest occurring element in the array is: " << ans;
    
    return 0;
}
