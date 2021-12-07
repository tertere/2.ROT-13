#include <iostream>
#include <string>
using namespace std;

string ROT13(string input) {
	for (int i = 0; i < input.length(); i++) {
		if (input[i] >= 97 && input[i] <= 122) {
			if (input[i] > 109) {
				input[i] = input[i] - 13;
			}
			else
			{
				input[i] = input[i] + 13;
			}
		}
		else
		{

			if (input[i] >= 65 && input[i] <= 90) {
				if (input[i] > 77) {
					input[i] = input[i] - 13;
				}
				else
				{
					input[i] = input[i] + 13;
				}
			}
		}
	}
	return input;
}

int main()
{
	cout << "Enter the text:";
	string text;
	while (true) {
		getline(cin, text);
		text = ROT13(text);
		cout << text << '\n';
	}
}