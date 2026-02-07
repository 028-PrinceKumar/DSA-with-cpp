#include<iostream>
#include<vector>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    int n=nums.size();
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(nums[i]==nums[j]){
                count++;
            }
            if(count>=2){
                return true;
            }
        }

    }
        return false;
    }
int main(){
    vector<int> vec={1,4,3,2};
    cout<<containsDuplicate(vec)<<endl;

}