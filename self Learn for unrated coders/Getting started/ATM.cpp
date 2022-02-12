#include <iostream>
using namespace std;

int main() {
    /*
        TODO:   ATM Problem Code: HS08TEST
                ->Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.

                Input:
                Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.

                Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance.

                Output:
                Output the account balance after the attempted transaction, given as a number with two digits of precision. If there is not enough money in the account to complete the transaction, output the current bank balance.

                Example - Successful Transaction
                Input:
                30 120.00

                Output:
                89.50
    */

    float balance;
    int widthdraw;
    cin >> widthdraw >> balance;
    float sub_amount;

    if (widthdraw % 5 == 0 && widthdraw <= balance-0.5){
        sub_amount = ((balance - widthdraw) - (0.5));
        cout << sub_amount << endl;
    }else{
        cout << (float)balance << endl ;
    }
    
    return 0;
}