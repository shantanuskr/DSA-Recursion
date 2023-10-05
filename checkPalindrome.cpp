#include<iostream>
using namespace std;

bool isPalindrome(string& s , int i , int j){

   
    if ( i > j ){
        return true ;
       
    }
    

     if ( s[i] != s[j]){
        return false;
    }
    else {
        
    return isPalindrome(s, i+1 , j-1 );
    }
}
int main(){

    string name = "shanttnahs";
   
    bool ans = isPalindrome(name, 0, name.length()-1);

    if(ans){
        cout << "it is a palindrome " << endl;
    }
    else {
        cout << "it is not a palindrome " << endl;
    }

    return 0;
}