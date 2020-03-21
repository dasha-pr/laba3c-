#include <iostream>
#include<cstring>
#include<conio.h>
#include <sstream> 
using namespace std;

void light1()
{
	char sentence[100];
	cout << "Input sentence with symbol ':' : ";
	cin >> sentence;
	cout << "Sentence with ': ' - " << sentence << endl << endl;
	int counter=0;
	for (int i = 0; sentence[i]; i++)
		if (sentence[i] == ':')
		{
			sentence[i] = ';';
			counter++;
		}

	cout << "Sentence with '; ' - " << sentence << endl;
	cout << "Number of symbol ':' - " << counter << endl;
	cout << endl; 
}

void medium2()
{
	char string[100];
	cout << "Input sentence with '()': ";
	cin >> string;
	
	cout << "Source string : " << string << endl;
	cout << "Substring that is situated between (): ";
	int i;
	for(i = 0; string[i] != '('; ++i);
	{
		++i; 
	}
	for (; string[i] != ')'; ++i)
	{
		cout << string[i];
	}

	cout << endl;
}

void hard3()
{
	size_t max = 0;
	string s, word;
	cout << "Input some words:\n";
	getline(cin, s);
	size_t min = s.size();

	stringstream str(s);
	while (str >> word)
	{
		if (word.size() > max) max = word.size();
		if (word.size() < min) min = word.size();
	}

	cout << "max=" << max << "\n" << "min=" << min << "\n";
}

int main()
{
	light1();
	medium2();
	hard3();
}