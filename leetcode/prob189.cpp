#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>rotate(vector<int>& nums ,int k){
    k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    for(int val:nums){
        cout<<val<<" ";

    }

}


int main(){
    vector <int> vec{1,2,3,4,5,6,7};
    int k=3;
    rotate(vec,k);
    return 0;
}
