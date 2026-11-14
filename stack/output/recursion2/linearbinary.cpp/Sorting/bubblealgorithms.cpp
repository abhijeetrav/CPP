// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={5,3,4,2,1};
//     int n=5;
    
//     for(int i=0;i<n-1;i++){
//         cin>>n>>endl;
//         bool flag = true;
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 if(arr[i]>arr[i+1]){
//                 swap(arr[i],arr[i+1]);
//                 }
//             }
//             cout<<"IT IS SORTED"<<endl;
//             break;
//         }
//       }
//     if(bool flag = false){
//            cout<<"IT IS SORTED"<<endl;
//         }
// }
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,6,5,4,3,2};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;  
            
             // bobble sort
             for(int i=0;i<n-i;i++){    //traverse
                    for(int j=0;j<n-1-i;j++){
                        if(arr[j]>arr[j+1]){
                            swap(arr[j],arr[j+1]);
                        }
                    }
                }
            cout<<endl;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
        }
}