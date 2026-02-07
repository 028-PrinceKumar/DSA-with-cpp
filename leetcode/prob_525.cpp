#include<iostream>
#include<vector>
#include<unordered_map>


using namespace std;
int findMaxLength(vector<int>& nums){
    int max=0;
    int n=nums.size();
    for(int i=0; i<n;i++){
        int c_zero=0,c_one=0;
        for(int j=i;j<n;j++){
            if(nums[j]==0) c_zero++;
            else c_one++;
            if(c_zero==c_one && max<j-i+1){
                max=j-i+1;
                
            }
        }
    }
    
    return max;

}

int main(){
    vector <int> vec={0,1,0};
    cout<<"max length of subarray:"<<findMaxLength(vec);
    return 0;
}


// Optimal way to solve
int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        mp[0] = -1;   
        int sum = 0, maxLen = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                sum += -1;
            else
                sum += 1;

            if (mp.find(sum) != mp.end()) {
                maxLen = max(maxLen, i - mp[sum]);
            } else {
                mp[sum] = i;  
            }
        }
        return maxLen;
    }


