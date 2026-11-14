#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {5,3,4,2,1};
    int n = 5;
    for (int ele : arr){ // ele:arr----> it is used for select elements from array::
        cout << ele << " ";
    }
    cout << endl;
    // insertion sort
    for (int i = 0; i < n - 1 - i; i++){
        int min = INT_MAX;
        int midx = -1;
        // minimum element calculation imn arragebox//
    }
    int i;
    int min;
    int midx;
    for (int j = i; j < n; j++){
        if (arr[j] < min){
            min = arr[j];
            midx = j;
        }
    }
    swap(arr[i], arr[midx]);
for (int ele : arr){
    cout << ele << " ";
    }
}
