#include<iostream>
#include<vector>
using namespace std;

void  solve(vector<int> nums, vector<int > output , int index, vector<vector<int>>& ans){
    if( index >= nums.size() ){
        ans.push_back(output);
        return;
    }
    //exclude
    solve(nums, output, index +1 , ans);

    //include
    int element  = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans );
}

vector<vector<int > > subsets(vector<int>& nums){

        vector<vector<int> > ans;
        vector<int> output;
        int index;
        solve( nums, output , index , ans);

        return ans;
    }

int main(){
    vector<int > arr;
    arr ={1, 2, 3};
    vector<vector<int>> result =  subsets(arr);

    for( const vector<int>& subsets : result){
        cout << "{";
        for( int i = 0; i< subsets.size(); i++){
            cout << subsets[i];
            if(i < subsets.size()){
                cout << ",";
            }
        }
         cout<< "},";
    }

    return 0;
}