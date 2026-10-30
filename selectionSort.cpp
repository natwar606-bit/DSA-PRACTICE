#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> &arr, int n ){
    for ( int i = 0; i<n-1; i++){
        int minIndex = i;
        for( int j=i+1; j<n; j++){
            if ( arr[j] < arr[minIndex] ){
               minIndex = j;
            }
        }
        swap( arr[i], arr[minIndex]);
    }
    return arr;
}

void print( vector<int> &arr, int n ){
    for ( int value : arr ){
        cout<<value<<endl;
    }
}

int main(){
    vector<int> arr = {9,8,7,6,5,4};
    int n = arr.size();
    selectionSort( arr , n);
    print( arr , n);


    return 0;
}