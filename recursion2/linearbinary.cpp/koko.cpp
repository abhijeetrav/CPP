#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> time;
int n = time.size();
int mx=-1;
long long lo=1;
long long totalTrips;
long long hi=(long long)mx*(long long)totalTrips;
long long ans = -1;
while(lo<=hi){
long long mid = lo+(hi-lo)/2;
if((mid,time,totalTrips)==true){
    ans = mid;
    hi = mid-1;
    }
    else lo = mid+1;
}
    return ans;

}