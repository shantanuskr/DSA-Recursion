#include<iostream>
#include<math.h>
using namespace std;



int powerOf2(int n){
    if ( n == 0)
        return 1;

    return 2 * powerOf2( n - 1);
}
int main(){

    int n ;
    cout << "Enter the no. " ;
    cin >> n;

    int ans = powerOf2(n);

    cout << ans << endl;

    return 0;

}