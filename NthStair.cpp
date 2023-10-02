#include<iostream> 
#include<vector>
using namespace std;


int nthstair(int n ){

    if ( n < 0 )
         return 0;

    else if ( n == 0 )
        return 1;

    int ans = nthstair(n - 1) + nthstair( n - 2);

    return ans;
   
}

int main ( ){

  int n;
  cout << "Enter the no. of stairs  ";
  cin >> n;
  int ans = nthstair(n);
  cout << ans << endl;

    return 0;
}