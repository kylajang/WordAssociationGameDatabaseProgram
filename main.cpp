#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	char answer;
	cout << "Welcome to the Word Association Game database Program!! This program will let you choose two words per entry and assign them a number of how closely or remotely associated they are to each other." << endl;
	cout << "Would you like to clear your database?" << endl;
	cin >> answer;

	if (answer=="y"||"Y"){
		cout << "Okay, deleting the database!" << endl;
		int answer2;
		cout << "How many entries would you like to add? ==> ";
		cin >> answer2;
		for (i=1;i<=answer2;i++){
			cout << "Now creating new database entry " << i << " of " << answer2;
			//Stephan's part
		}
	}
	else{

	}


	return 0;
}