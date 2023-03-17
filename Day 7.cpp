# A left rotation operation on an array of size n shifts each of the array's elements  unit to the left.
# Given an integer,d, rotate the array that many steps left and return the result.

include <iostream>
include <vector>
include<algorithm>

using namespace std;
int main() {
    int n, d;
    cin >> n >> d;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    rotate(a.begin(), a.begin() + d, a.end());

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}


