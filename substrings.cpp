#include<iostream>
#include<vector>

using namespace std;
void solve(string str, string output, int index, vector<string>& ans){
    if( index >= str.length()){
        ans.push_back(output);
        return;
    }

    solve(str, output, index+1, ans);

    char element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);

}
vector<string> substrings(string& str){
    string output = "";
    int index = 0;
    vector<string> ans;
    solve(str, output , index , ans);

    return ans;
}
int main(){
    string str = "abcd";
    vector<string> result = substrings(str);
    for(const string& sub : result){
        cout << sub << " ";
     
    }
    return 0;
}