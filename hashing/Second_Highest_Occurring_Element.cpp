#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int secondMostFrequentElement(vector<int> &nums) {
        
       
        int n = nums.size();
        
       
        int maxFreq = 0;
        int secMaxFreq = 0;
        
        
        int maxEle = -1, secEle = -1;
        
        
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
                secMaxFreq = maxFreq;
                maxFreq = freq;
                secEle = maxEle;
                maxEle = nums[i];
            } 
            else if(freq == maxFreq) {
                maxEle = min(maxEle, nums[i]);
            }
            else if(freq > secMaxFreq) {
                secMaxFreq = freq;
                secEle = nums[i];
            }
            else if(freq == secMaxFreq) {
                secEle = min(secEle, nums[i]);
            }
            
        }
        
        
        return secEle;
    }
};

int main() {
    vector<int> nums = {4, 4, 5, 6, 6, 5 , 7};
    
    Solution sol; 
    
   
    int ans = sol.secondMostFrequentElement(nums);
    
    cout << "The second highest occurring element in the array is: " << ans;
    
    return 0;
}