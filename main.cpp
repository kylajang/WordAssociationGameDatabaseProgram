#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::stringstream;
using std::ifstream;
using std::ofstream;
using std::vector;
using std::left;
using std::right;
using std::setw;

int main() {
	string answer;
	//Welcome message and description of program
	cout << "Welcome to the Word Association Game database Program!! This program will let you choose two words per entry and assign them a number of how closely or remotely associated they are to each other." << endl;
	cout << "Would you like to clear your database? (Y/N): ";
	cin >> answer;

	if (answer == "y" ||"Y") {
		cout << "Okay, deleting the database!" << endl;
		std::ofstream ofs;
			ofs.open("words.db", std::ofstream::out | std::ofstream::trunc);
			ofs.close();
	}

	else if (answer == "n" || "N"){
		cout << "Okay, keeping the database!" << endl;
	}

	else {
		cout << "Invalid choice. Please type (Y/N)." << endl;
	}

	int answer2;
	cout << "How many entries would you like to add? ==> ";
	cin >> answer2;

	//Stephan's Part
	//Here the program begins accepting new entries to the database
	//variables to be used to accept entries and count entry number
	int current_entry_number = 1;
	vector<string> words_and_score;
	string word1;
	string word2;
	string score;

	//This while loop will allow the user to enter their words until done
	while (current_entry_number <= answer2)
	{
		//message to let user know which entry number we're on
		cout << "Now creating new database entry "
			<< current_entry_number << " of "
			<< answer2 << endl;
		//warning user to format entry a specific way
		cout << "When inputting a new entry, please do not use spaces or non alpha-numeric characters.\n";
		//messages to tell user which word they're on and input score
		cout << "Please enter the first word: ";
		cin >> word1;

		cout << "Please enter the second word: ";
		cin >> word2;

		cout << "Please enter the point value for this association: ";
		cin >> score;

		//assigned 3 responses above to a vector
		words_and_score.push_back(word1 + " " + word2 + " " + score);
		//keeps track of which entry number we're on
		current_entry_number++;
	}
	//opens and specifies the file for our "entry database"
	ofstream outFile;
	outFile.open("words.db", std::ios::app);
	//for loop that allows the info in the vector to print to file
	for (size_t i = 0; i < words_and_score.size(); i++)
	{
		string s = words_and_score[i];
		outFile << s << endl;
	}
	//closes the file
	outFile.close();
	//message telling user they've finished inputting entries
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
