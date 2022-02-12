//  TODO: First and Last Digit Problem Code: FLOW004

/*    
    If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.
                
        Input
             ->The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

        Output
             ->For each test case, display the sum of first and last digits of N in a new line.

        Example - Successful Transaction
            Input:
             3
             1234
             124894
             242323

            Output:
             5
             5
             5    
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int t;
        cin >> t;

        int ldigit = t % 10;
        int fdigit = 0;
        while(t--){
            fdigit = t % 10;
            t = t / 10;
        }
        cout << ldigit + fdigit << endl;
    }
    return 0;
}