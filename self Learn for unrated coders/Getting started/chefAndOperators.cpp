#include <iostream>
using namespace std;

int main() {

    /*
        TODO:   Chef And Operators Problem Code: CHOPRT
                Chef has just started Programming, he is in first year of Engineering. Chef is reading about Relational Operators.
                Relational Operators are operators which check relatioship between two values. Given two numerical values A and B you need to help chef in finding the relationship between them that is,
                
                Input
                 ->First line contains an integer T, which denotes the number of testcases. Each of the T lines contain two integers A and B.

                Output
                 ->For each line of input produce one line of output. This line contains any one of the relational operators'<' , '>' , '='
    */

    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        /* code */
        int num1 , num2;
        cin >> num1 >> num2;

        if(num1 > num2){
            cout << ">" << endl ;
        }

        if(num1 < num2){
            cout << "<" << endl ;
        }
        
        if(num1 == num2){
            cout << "=" << endl ;
        }
    }
    
    return 0;
}