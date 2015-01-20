/* Wordlist Unscrambler by Ferdinand Uribe.
Hack this site Programming Challange 1
1/19/2015 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string fileName;
	bool validFile = false;
	vector<string> wordVect;
	wordVect.reserve(1000); //Reserver memory block at least 1000 strings.
	fstream wordlist;

	do {

		cout << "Please enter the wordlist name including extention." << endl;
		cin >> fileName;

		/*Using fileName string as file name arguement in wordlist.open
		function. Must be dont using "fileName.c_string" format. C++ is
		weird like that. Im sure theres a logical reason why.*/
		wordlist.open(fileName.c_string(), ios::in);

		//Checking for file existance
		if (wordlist.fail())
		{
			cout << "Wordlist not present. Please try again." << endl;
		}
		else
		{
			cout << "Wordlist accepted... Continuing." << endl;
			validFile = true;
		}
	}while (!validFile);

	while (!wordlist.eof())
	{
		
	}


	return 0;
}