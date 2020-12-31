#include <iostream>
#include <vector>
#include <string>

using namespace std;

void sol()
{
	vector <int> line;
	string input = { 0, };
	int j = 0;
	while (input[0] != '#')
	{
		getline(cin, input);
		line.push_back(0);
		for (int i = 0; i < input.size(); i++)
		{
			if (input[i] == 'a' || input[i] == 'A' ||
				input[i] == 'e' || input[i] == 'E' ||
				input[i] == 'i' || input[i] == 'I' ||
				input[i] == 'o' || input[i] == 'O' ||
				input[i] == 'u' || input[i] == 'U')
				line[j]++;
		}
		j++;
	}
	for (int i = 0; i < j-1; i++)
		cout << line[i]<< endl;

}

int main()
{

	sol();
	return 0;

}