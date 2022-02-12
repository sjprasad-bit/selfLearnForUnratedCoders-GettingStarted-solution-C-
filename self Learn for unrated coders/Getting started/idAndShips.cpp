//  TODO: Id and Ship Problem Code: FLOW010

/*    
    Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.

    Class ID	Ship Class
     B or b	     BattleShip
     C or c	     Cruiser
     D or d	     Destroyer
     F or f	     Frigate
                
        Input
             ->The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains a character.

        Output
             ->For each test case, display the Ship Class depending on ID, in a new line.

        Example - 
            Input:
             3 
             b
             c
             d

            Output:
             BattleShip
             Cruiser
             Destroyer   
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++){
	    char ch;
	    cin >> ch;
	    
	    if (ch == 'b' || ch == 'B')
	    {
	        cout << "BattleShip" << endl;
	    }
	    
	    if (ch == 'c'|| ch == 'C'){
	        cout << "Cruiser" << endl;
	    }
	    
	    if (ch == 'f' || ch == 'F'){
	        cout << "Frigate" << endl;
	    }
	    
	    if (ch == 'd' || ch == 'D'){
	        cout << "Destroyer" << endl;
	    }
	}
	return 0;
}