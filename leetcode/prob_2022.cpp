#include <iostream>
#include<vector>
using namespace std;
vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    if(original.size()!=m*n){
        return {};
    }

    else{
        vector<vector<int>> mat(m, vector<int>(n));
        int count=0;
        for(int i=0; i<m;i++){
            for(int j=0; j<n; j++){
                mat[i][j]=original[count];
                count++;
            }
        }
        return mat;
    }
    
}

int main() {
    vector<int> vec={1,2};
    int m=1,n=1;
    vector<vector<int>>ans=construct2DArray(vec,m,n);
    for( int i=0; i<ans.size();i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}

