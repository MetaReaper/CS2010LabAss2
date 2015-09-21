//CS2010 Lab Assignment #2 by Trevor Bird
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int playGame(){
	srand(time(NULL));
	int Die1 =(rand()%6)+1;
	int Die2 =(rand()%6)+1;
	int Roll = Die1+Die2;
	int Point = 0;
	bool PointGet = false;

	cout<<"Your roll is "<<Roll<<endl;
	switch(Roll){
		case 2: cout<<"You Lose!"<<endl; PointGet = true; break; 
		case 3:	cout<<"You Lose!"<<endl; PointGet = true; break;
		case 7:	cout<<"You Win!!"<<endl; PointGet = true; break;
		case 11:cout<<"You Win!!"<<endl; PointGet = true; break;
		case 12:cout<<"You Lose!"<<endl; PointGet = true; break;
		default: cout<<"Your point to make is "<<Roll<<endl; Point=Roll; break;
	}
	cout<<endl;

	while (!PointGet){
		Die1 = (rand()%6)+1;
		Die2 = (rand()%6)+1;
		Roll = Die1+Die2;
		cout<<"Your roll is "<<Roll<<endl;
		if (Roll==7) {
			cout<<"You lose!"<<endl;
			PointGet = true;
		}
		if (Roll==Point){
			cout<<"You Win!!"<<endl;
			PointGet = true;
		}
		if (PointGet==true){		
		cout<<"Press Enter to Continue..."<<endl;
		cin.get();
		} else {
		cout<<"Press Enter to Roll Again..."<<endl;
		cin.get();
		}
	}
	return 0;
}

int main() {
	char ans;
  	bool done = false;
  	while ( ! done ) {
        	playGame();
        	cout << " Play again (y/n) ? ";
        	cin >> ans;
        	if ( ans == 'y' || ans == 'Y') done = false;
             	else done = true;
  	}
  	return 0;
}
