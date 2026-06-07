// // #include<iostream>
// // #include<string>
// // using namespace std;
// // int main(){
// //     string s="123";
// //     int i=0;
// //     i++;
// //     int n=sizeof(s)/sizeof(0);
// //     if(s[i])<=s[i+1]){
// //         for
// //     }
// #include <iostream>
// using namespace std;
// int fact(int n) {
//    if (n == 0 || n == 1)
//    return 1;
//    else
//    return n * fact(n - 1);
// }
// int main() {
//    int n, r, comb, per;
//    cout<<"Enter n : ";
//    cin>>n;
//    cout<<"\nEnter r : ";
//    cin>>r;
//    comb = fact(n) / (fact(r) * fact(n-r));
//    cout << "\nCombination : " << comb;
//    per = fact(n) / fact(n-r);
//    cout << "\nPermutation : " << per;
//    return 0;
// }
// // C++ program to Find the kth Permutation
// // Sequence of first n natural numbers
// #include <bits/stdc++.h>
// using namespace std;

// // recursive function to generate all 
// // possible permutations of a string
// void generate_permutations(string& str, int idx, vector<string>& result) {
//     // base case
//     if (idx == str.size()) {
//         result.push_back(str);
//         return;
//     }
    
//     // traverse string from idx to end
//     for (int i = idx; i < str.size(); i++) {
//         swap(str[i], str[idx]);
//         generate_permutations(str, idx + 1, result);
//         swap(str[i], str[idx]);
//     }
// }

// Function to find the
// kth permutation of n numbers
string findKthPermutation(int n, int k) {
    string str = "";
    vector<string> result;
    
    // Insert all natural number
    // upto n in string
    for (int i = 1; i <= n; i++) {
        str.push_back(i + '0');AfAFF
    }
    
    generate_permutations(str, 0, result);
    // sort the generated permutations
    sort(result.begin(), result.end());
    
    // make k 0-based indexed to point to kth sequence
   return result[k-1];
}

// Driver code
int main() {
    int n = 3, k = 4;
    
    // function call
    string kth_perm_seq = findKthPermutation(n, k);
    cout << kth_perm_seq << endl;

    return 0;
}
