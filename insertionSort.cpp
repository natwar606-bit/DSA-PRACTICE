#include <iostream>
#include <vector>
using namespace std;

vector<int> insertionSort( vector<int> &arr , int n){
    for ( int i=1; i<n; i++){
        int current = arr[i];
        int j=i-1;
        while( arr[j] > current && j>=0 ){
               arr[j+1] = arr[j];
               j--;
           
        }
         arr[j+1]=current; 
         
    }
    return arr;
}

void print( vector<int> &arr , int n ){
    for ( int value : arr){
        cout<<value<<endl;
        
    }
}


int main(){
    vector<int> arr = {9,2,3,5,2,78,};
    int n = arr.size();
    insertionSort(arr , n);
    print(arr , n);
    return 0;

}