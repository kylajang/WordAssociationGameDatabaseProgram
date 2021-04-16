#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <sstream>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::stringstream;
using std::ifstream;
using std::vector;
using std::left;
using std::right;
using std::setw;


int main() {
	char answer;
	//Welcome message and description of program
	cout << "Welcome to the Word Association Game database Program!! This program will let you choose two words per entry and assign them a number of how closely or remotely associated they are to each other." << endl;
	cout << "Would you like to clear your database?" << endl;
	cin >> answer;

	if (answer=='y'||'Y') {
		cout << "Okay, deleting the database!" << endl;
	}

	int answer2;
	cout << "How many entries would you like to add? ==> ";
	cin >> answer2;

	//Here the program begins accepting new entries to the database

	/* Ana, I put these variable names for now, I can change them to what
	you name them in your section or you can use these names if you want */

	int current_word_position = 1;
	std::vector<std::string> words_and_score;
	std::string word1;
	std::string word2;
	std::string score;

	//This while loop will allow the user to enter their words until done
	while (current_word_position <= answer2)
	{
		cout << "Now creating new database entry "
			<< current_word_position << " of "
			<< answer2 << endl;

		cout << "When inputting a new entry, please do not use spaces or non alpha-numeric characters.\n";
		cout << "Please enter the first word: ";
		cin >> word1;

		cout << "Please enter the second word: ";
		cin >> word2;

		cout << "Please enter the point value for this association: ";
		cin >> score;

		words_and_score.push_back(word1);
		words_and_score.push_back(" ");
		words_and_score.push_back(word2);
		words_and_score.push_back(" ");
		words_and_score.push_back(score);
		words_and_score.push_back("\n");

		current_word_position++;
	}

	cout << "We've finished adding new records to the database.\n";

	// Kyla's Part
  // opening file
  	ifstream ifs;
    ifs.open("words.db");
    // word variable used to created words from file
    string word;
    // vector to hold all space separated words
    vector<string> v(3);
    // char to read from file
    char c;
    int i = 0;
    // Printing out a message to explain what the program is printing
    cout << "Printing all records: " << endl;
    // read chars from file one at a time
    while(ifs.get(c)){
      string s(1,c);
      // if char is not a space or newline add it to word variable
      if (s.compare(" ") && s.compare("\n")){
        word.append(s);
      }
      // if char is space, add word to list and clear word
      else if(!s.compare(" ")) {
        v[i++] = word;
        word.clear();
      }
      // if char is newline, add word to list, reset count, clear word, and print out formatted words
      else {
        v[i++] = word;
        i = 0;
        cout << setw(20) << left << v[0] << setw(20) << left << v[1] << setw(10) << right << v[2] << endl;
        word.clear();
      }
    }
  return 0;

}
