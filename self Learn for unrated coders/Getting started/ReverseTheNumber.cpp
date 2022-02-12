//  TODO: Reverse The Number| FLOW007

/* 
    Given an Integer N, write a program to reverse it.

    Input
    The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

    Output
    For each test case, display the reverse of the given number N, in a new line.

    Example
            Input
             4
             12345
             31203
             2123
             2300

            Output
             54321
             30213
             3212
             32
*/

#include <iostream>
using namespace std;

int main () {

    int test_case;
    cin >> test_case;


    while(test_case--){
        int n;
        cin >> n;

        int remainder = 0, reversed = 0;
        
        while(n != 0){
            remainder = n % 10;
            reversed = ((reversed * 10) + remainder);
            n /= 10;
        }
        cout << reversed;
    }
    return 0;
}