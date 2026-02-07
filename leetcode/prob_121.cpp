#include<stdio.h>
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int sell(vector<int>price){
    vector<int> bestbuy(price.size());
    bestbuy[0]=INT_MAX;
    for(int i=1;i<price.size();i++){
        bestbuy[i]=min(bestbuy[i-1],price[i-1]);
    
    }
    int maxprofit=INT_MIN;
    for(int i=0; i<price.size();i++){
        maxprofit=max(maxprofit,(price[i]-bestbuy[i]));
    }
    if (maxprofit<=0){
            return 0;
        }
        else{
        return maxprofit;
        }
}
int main(){
    vector<int> price{7,1,5,3,6,4};
    cout<<"Maximum profit in stock:"<<sell(price);
    return 0;
}
