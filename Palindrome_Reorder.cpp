// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// bool canFormPalindrome(string str){
//     int n =str.size();
//     unordered_map<char,int> mp;
//     for(int i=0;i<n;i++){
//         mp[str[i]]++;
//     }
//     int oddCnt=0;
//     for(auto i:mp){
//         if(i.second%2){
//             oddCnt++;
//             if(oddCnt>1) return false;
//         }
//     }
//     return true;
    
// }
// void solve(string str){
//     if(!canFormPalindrome(str)){
//         cout<<"NO SOLUTION"<<endl;
//         return;
//     }
//     unordered_map<char,int> mp;
//     string left,mid,right;
//     for(int i=0;i<str.size();i++){
//         mp[str[i]]++;
//     }
//     for(auto i:mp){
//         char c=i.first;
//         int count=i.second;
//         if(count%2==0){
//             left.append(count/2,c);
//             right.insert(0,count/2,c);
//         }
//         else{
//             mid=c;
//             left.append((count-1)/2,c);
//             right.insert(0,(count-1)/2,c);
//         }
//     }
//     cout<<left<<mid<<right<<endl;
// }
// int main(){
//     ios_base::sync_with_stdio(false);cin.tie(NULL);
//     ll t;
//     // cin>>t;
//     t=1;
//     while(t--){
//         string str;
//         cin>>str;
//         solve(str);
//     }
//     return 0;
// }
#include <iostream>
#include <string>

using namespace std;

// Function to generate and print binary sequences of length n
void generateBinarySequences(int n, string sequence = "") {
    if (n == 0) {
        cout << sequence << endl;
        return;
    } else {
        generateBinarySequences(n - 1, sequence + "0");
        generateBinarySequences(n - 1, sequence + "1");
    }
}

int main() {
    int n;

    cout << "Enter the length of binary sequences (n): ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        generateBinarySequences(n);
    }

    return 0;
}
