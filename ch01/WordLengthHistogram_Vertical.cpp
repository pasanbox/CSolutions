#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void CalculateWordLength(int);
int main()
{
	cout << "Letter Count Vertical Histogram|2015|PasanW\n";
	
	int ai_LetterCount[11];
	
	//init
	for(int i=0; i< 11; i++)
	{
		ai_LetterCount[i] = 0;
	}
	
	//calculate word length
	fstream f_InputFile("input.txt");
	std::string word = "";
	while(f_InputFile >> word)
	{
		int i_Length = word.length();
		if (i_Length < 10)
		{
			ai_LetterCount[i_Length]++;
		}
		else
			ai_LetterCount[10]++;
	}
	
	////////////////////////////////////////////////////////////////////////////
	cout << "Character Counting Completed!" << endl;
	for(int i=0; i < 11; i++)
	{
		cout << i << "\t" << ai_LetterCount[i] << endl;
	}
	////////////////////////////////////////////////////////////////////////////
	
	int k = 150;
	
	while(k > 0)
	{
		for(int i = 1; i < 11; i++)
		{
			if(ai_LetterCount[i] == k)
			{
				cout << "*---";
				ai_LetterCount[i]--;
			}
			else
			{
				cout << " ---";
			}
		}
		
		cout << endl;
		k--;
	}
	
	
	
	
  
	return 0;
}
