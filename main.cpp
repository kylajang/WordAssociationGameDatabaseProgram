#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	char answer;
	//Welcome message and description of program
	cout << "Welcome to the Word Association Game database Program!! This program will let you choose two words per entry and assign them a number of how closely or remotely associated they are to each other." << endl;
	cout << "Would you like to clear your database?" << endl;
	cin >> answer;

	if (answer=='y'||'Y'){
		cout << "Okay, deleting the database!" << endl;
	}

	int answer2;
	cout << "How many entries would you like to add? ==> ";
	cin >> answer2;

	//Here the program begins accepting new entries to the database
	
	/* Ana, I put these variable names for now, I can change them to what
	you name them in your section or you can use these names if you want */
	
	int current_word_position;
	int total_words_added;
	
	//This while loop will allow the user to enter their words until done
	while (current_word_position <= total_words_added)
	{
		cout << "Now creating new database entry "
			<< current_word_position << " of "
			<< total_words_added << endl;
		
		cout << "When inputting a new entry, please do not use spaces or non alpha-numeric characters.\n";
		cout << "Please enter the first word: ";
		cin >> ;
		
		cout << "Please enter the second word: ";
		cin >> ;
		
		cout << "Please enter the point value for this association: ";
		cin >> ;
	
	}
	
	/*if statment will print message letting users know they have finished
	entering new records to the database file if they have inputted the
	amount of records they said they would*/
	if (current_word_position == total_words_added)
	{
		cout << "We've finished adding new records to the database.\n";
	}
	
	return 0;
}
