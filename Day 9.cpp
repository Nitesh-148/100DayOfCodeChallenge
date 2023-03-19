# We say that a string contains the word hackerrank if a subsequence of its characters spell the word hackerrank. Remeber that a subsequence maintains the order of characters selected from a sequence.



#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        string s;
        cin >> s;
        string target = "hackerrank";
        int j = 0;
        for (int i= 0; i < s.size() && j < target.size(); i++) {
            if (s[i] == target[j]) {
                j++;
            }
        }
        if (j == target.size()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
    return 0;
}
