#include<iostream>
using namespace std;

void sortedArray(int arr[], int n){

    if(n == 0 || n == 1){
        return ;
    }
    for ( int i = 0; i < n - 1 ; i++ ){
        
        int index = i;
        for (int j = i + 1; j < n ; j++ ){
            
            if ( arr[j] < arr[index]){
                index = j;
            }
        }
        swap( arr[i], arr[index]);
    }
    
    sortedArray(arr + 1,  n-1);
}

int main(){

    int arr[6] = { 5, 6, 2, 7, 2, 1};

    sortedArray(arr, 6);

    for ( int i = 0; i < 6 ; i++ ){
        cout << arr[i]<< " ";
    }
    cout << endl;
    return 0;

}