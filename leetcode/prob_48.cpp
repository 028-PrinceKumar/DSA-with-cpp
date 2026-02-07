#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<vector<int>> mat({{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}});
    int m=mat.size(),n=mat[0].size();
    for(int i=0; i<m; i++){
        for(int j=i; j<n; j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0; i<m;i++){
        int s=0, e=n-1;
        while(s<e){
            swap(mat[i][s],mat[i][e]);
            s++,e--;
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
