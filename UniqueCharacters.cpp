#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool isUniqueCharacter(string& s);

int main()
{
	string word;
	cout << "enter a string:" << endl;
	cin >> word;

	bool reply = isUniqueCharacter(word);
	cout <<boolalpha<< reply;

	return 0;
}

bool isUniqueCharacter(string& s)
{
	unordered_map<char,int> charIndex;

	for (int i = 0; i < s.size(); i++)
	{
		char currentChar = s[i];

		if (charIndex.find(currentChar) != charIndex.end())
			return false;

		charIndex[currentChar] = i;
	}
	return true;
}