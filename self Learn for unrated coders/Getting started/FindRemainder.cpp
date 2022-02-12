#include <iostream>
using namespace std;

int main()
{
    /*
        TODO: Write a program to find the remainder when an integer A is divided by an integer B.
              -> The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B
    */
   
    int t;
    cin >> t;

    int rem = 0;

    for (int i = 0; i < t; i++){
        int a,b;
        cin >> a >> b;

        rem = a % b;
        cout << rem << endl;
    }

    return 0;
}
