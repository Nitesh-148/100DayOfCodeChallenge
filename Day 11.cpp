# Given an array of integers and a positive integer k, determine the number of (i,j) pairs where i<j and ar[i] + ar[j] is divisible by k.

#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    int k;
    int count = 0;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
       cin >> a[i];
    }
    
    for(int i =0 ; i < n -1 ; i++){
        for(int j=i+1 ; j < n ; j++){
            if( (a[i]+a[j])%k ==0){
                count++;
            }
        }
    }
    
    cout << count;
    return 0;
}
