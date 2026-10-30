#include <iostream>
#include <vector>
using namespace std;
vector<int> sort( vector<int> &arr , int n){
    int count1=0,count2=0, count3=3;
    int low=0;
    int mid=0;
    int high=n-1;
    while ( high>=mid){
        if ( arr[mid] == 0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else 
          if(arr[mid]==1){
            mid++;
           }
           else
              swap (arr[high],arr[mid]);
              high--;
    }
    return arr;
}

void print( vector<int> &arr , int n ){
    for ( int value : arr){
        cout<<value<<endl;
        
    }
}

int main(){
    vector<int> arr = {0,0,1,2,1,0,1};
    int n = arr.size();
    sort( arr , n);
    print( arr , n);
    return 0;
}