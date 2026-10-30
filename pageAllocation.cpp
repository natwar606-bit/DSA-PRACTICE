#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool isPossible( vector <int> &arr ,int n ,int maxAlloved , int s ){
    
   int students=1;
    int c_page =0;
    for ( int i = 0; i<n; i++){
        if (arr[i] > maxAlloved)
    return false;
         if ( arr[i] + c_page > maxAlloved ){
             students++;
             c_page = arr[i];
         }
        else 
             c_page += arr[i];
    }
    if ( students <= s){
        return true;
    }
    else 
        return false;
    
    
}
int maxOfMinPage(vector <int> &arr ,int n , int s ){
   int st = *max_element(arr.begin() , arr.end());
    int end = accumulate(arr.begin() , arr.end() , 0);
    
    int ans = -1;
    while ( st <= end){
        int mid = st + (end - st)/2;
        if ( isPossible( arr , n , mid , s)){
        end = mid - 1;
            ans = mid;
      }
     else 
          st = mid + 1;
      }
    return ans;
 
    }
   
int main(){
    int n=4;
    vector <int> arr = {10,30,20,40};
    int s=2;
    int ans = maxOfMinPage(arr , n , s);
    cout << ans;
    
    
    return 0;
}