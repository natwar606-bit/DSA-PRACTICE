#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 vector<int> parmutaion( vector<int> &arr , int n ){
      int p = -1;
      for ( int i=n-1; i>0; i-- ){
        if( arr[i]>arr[i-1] ){
            p = i-1;
            break;
        }
      }
       if(p==-1){
        reverse(arr.begin(),arr.end());
        return arr;
      }
      for ( int i=n-1; i>p; i--){
          if (arr[p]<arr[i]){
            swap(arr[p],arr[i]);
            break;
          }
      }
       reverse(arr.begin()+p+1,arr.end());
      return arr;
 }

 void print( vector<int> &arr , int n ){
    for ( int value : arr){
        cout<<value<<endl;
        
    }
}

int main(){
    vector<int> arr = {1,5,4,3,2};
    int n = arr.size();
    parmutaion( arr , n);
    print(arr, n);
    return 0;
}