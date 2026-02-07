#include<iostream>
#include<vector>
using namespace std;
int maxProduct(vector<int>& nums) {
        int maxmul=INT8_MIN;
        for(int i=0; i<nums.size();i++){
            int curr_mul;
            if(nums[i]==0){
                curr_mul=0;
            }
            else curr_mul=1;
            for(int j=i; j<nums.size();j++){
                curr_mul*=nums[j];
                maxmul=max(curr_mul,maxmul);
            }
            
        }
    return maxmul;
}

int main(){
    vector<int> vec={2,3,-2,4};
    cout<<maxProduct(vec)<<endl;

}

