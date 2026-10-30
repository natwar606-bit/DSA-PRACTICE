#include <iostream>
#include <vector>
using namespace std;


vector<int> boubbleSort( vector <int> &arr , int n){
     bool isSwap = false;
     for ( int i = 0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){  //j<n-i-1
            if(arr[j] > arr[j+1] ){
                swap(arr[j] , arr[j+1]);
                isSwap = true;
            }
            
        }
        if ( isSwap == false ){
            return arr;
        }
    }
     return arr;
}

void print( vector <int> &arr , int n){
    for (int value : arr ){
        cout<<value<<endl;
    }
}

int main(){
    vector <int> arr = {6,3,2,1,7,8,100};
    int n = arr.size();
    boubbleSort( arr , n);
    print( arr , n);
    return 0;
}
