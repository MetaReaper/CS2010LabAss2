#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int playGame(){
	int Die1;
	int Die2;
	int Roll;
}

int main() {
	char ans;
  	bool done = false;
  	while ( ! done ) {
        	playGame();   // YOU MUST WRITE THIS FUNCTION
        	cout << " Play again (y/n) ? ";
        	cin >> ans;
        	if ( ans == 'y' || ans == 'Y') done = false;
             	else done = true;
  	}
  	return 0;
}
