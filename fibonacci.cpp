#include<iostream> 
#include<vector>
using namespace std;


int fibo(int n ){

    if ( n == 0 )
         return 0;

    else if ( n == 1 )
        return 1;

    int ans = fibo(n - 1) + fibo( n - 2);

    return ans;
   
}

int main ( ){

  int n;
  cout << "Enter the no. ";
  cin >> n;
  int ans = fibo(n);
  cout << ans << endl;

    return 0;
}