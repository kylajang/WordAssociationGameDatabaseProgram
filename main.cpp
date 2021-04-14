#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	char answer;
	cout << "Welcome to the Word Association Game database Program!! This program will let you choose two words per entry and assign a number of association to them " << endl;
	cout << "Would you like to clear your database?" << endl;
	cin >> answer;

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
			<< total_words_added;
	
	}
	
	
	return 0;
}
