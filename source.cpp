/*Wordlist Unscrambler by Ferdinand Uirbe.
Hack this Site Programming Challange 1
version 2.0
3/26/2014 */

#include <iostream>
#include <fstream>
#include <string>

int main()
{
	//Program Instructions
	std::cout << "Word unscrambler for Hack This Site Programming Challange 1." << std::endl;
	std::cout << "Instructions: All files should be placed in program directory. \nWordlist should be named 'wordlist.txt'. \nScrambled wordlist should be named 'scram.txt'." << std::endl;
	std::cout << "Press 'enter' to continue." << std::endl;
	std::cin.get();
	std::fstream wordlist;
	wordlist.open("wordlist.txt", std::ios::in);
	if(wordlist.fail())
	{
		std::cout << "Wordlist not present. Please provide a proper wordlist and relaunch application." << std::endl;
		std::cin.get();
		return 0;
	}
	std::cout << "Wordlist accepted. Continuing..." << std::endl;
	std::fstream scrambledWords;
	scrambledWords.open("scram.txt", std::ios::in);
	if(scrambledWords.fail())
	{
		std::cout << "Scrambled Wordlist not present. Please provide a proper wordlist and relaunch application." << std::endl;
		std::cin.get();
		return 0;
	}
	std::cout << "Scrambled Wordlist accepted. Continuing..." << std::endl;

	int numLines = 0;
	std::string line;

	while (std::getline(scrambledWords, line))
	{
		++numLines;
	}

	std::cout << numLines;


	wordlist.close();
	scrambledWords.close();


	return 0;
}
