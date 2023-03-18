# A video player plays a game in which the character competes in a hurdle race. Hurdles are of varying heights, and the characters have a maximum height they can jump.
# There is a magic potion they can take that will increase their maximum jump height by 1 unit for each dose. How many doses of the potion must the character take to be able
# to jump all of the hurdles. If the character can already clear all of the hurdles, return 0.

#include <iostream>
using namespace std;

int main() {
    int k, n;
    cin >> n >> k;
    
    int hurdleHeight, dose = 0;
    for (int i = 0; i < n; i++) {
        cin >> hurdleHeight;
        if (hurdleHeight > k) {
            dose += hurdleHeight - k;
            k = hurdleHeight;
        }
    }
    
    cout << dose << endl;
    
    return 0;
}
