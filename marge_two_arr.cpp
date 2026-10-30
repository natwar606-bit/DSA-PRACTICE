#include <iostream>
#include <vector>
using namespace std;

 vector<int> margeTwoArray( vector<int> &arr1 , vector<int> &arr2 , int n ,int m ){
    int i = n-m-1, j=m, k=n;
    while ( j >= 0){
        if ( i>=0 && arr1[i] > arr2[j]  ){
            swap ( arr1[i] ,arr1[k]);
            i--;
            k--;
        }
        else {
            swap ( arr1[k] ,arr2[j]);
            j--;
            k--;
        }
    }
    return arr1;
 }

 void print( vector<int> &arr1 , int n ){
    for ( int value : arr1){
        cout<<value<<endl;
        
    }
}

int main(){
    vector<int> arr1 = {2,6,8,0,0,0};
    vector<int> arr2 = {1,5,9};
    int n = arr1.size()-1;
    int m = arr2.size()-1;
    margeTwoArray( arr1, arr2 , n ,m );
    print( arr1, n);

    return 0;
}