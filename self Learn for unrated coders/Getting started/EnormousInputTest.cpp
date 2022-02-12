#include <iostream>
using namespace std;

int main() {

    /*
        TODO: The input begins with two positive integers n k (n, k<=107). The next n lines of input contain one positive integer ti, not greater than 109, each.
    */
    int n ,k;
    cin >> n >> k;

    int count = 0;

    for(int i = 0; i < n; i++){
        int t ;
        cin >> t;

        if(t % k == 0){
            count++;
        }
        
    }

    cout << count;

    return 0;
}