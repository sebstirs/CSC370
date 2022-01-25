#include <iostream>
#include <string>

using namespace std;

int main()
{
	string inputString;
	cout << "Enter input string: ";
	cin >> inputString;
	string newString = "";
	int count = 0;

	for (int i = 0; i < inputString.length(); i++)
	{
		char currentChar = inputString[i];
		char nextChar = inputString[i + 1];

		if (inputString == "\n")
		{
			return 0;
		}
		else if (currentChar == nextChar) {
			count++;
			continue;
		}
		else if (currentChar != nextChar && count + 1 > 4)
		{
			if (count < 10)
			{
				newString += "/";
				newString += "0";
				newString += to_string(count + 1);
				count = 0;
				newString += currentChar;
				continue;
			}
			else if (count > 10)
			{
				newString += "/";
				newString += to_string(count + 1);
				count = 0;
				newString += currentChar;
				continue;
			}
		}
		else if(currentChar != nextChar && count <= 4) 
		{
			for (int ii = 0; ii < count + 1; ii++)
			{
				newString += currentChar;
			}
		}
	}
	cout << newString << endl;
	return 0;
}