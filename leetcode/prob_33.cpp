#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int search1(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else if(target>nums[mid]){
                start=mid+1;
            }

        }
        return -1;
    }
int main(){
    vector<int> vec={4,5,6,7,0,1,2};
    cout<<search1(vec,6)<<endl;

}
