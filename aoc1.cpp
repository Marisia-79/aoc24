#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	vector<int> f_list, s_list;
	ifstream i_file;
	string line;
	int answer = 0;
	i_file.open("input.txt");

	while (getline(i_file, line))
	{
		int num1, num2;
		stringstream ss(line);

		while (ss >> num1 >> num2)
		{
			f_list.push_back(num1);
			s_list.push_back(num2);
		}
	}

	sort(f_list.begin(), f_list.end());
	sort(s_list.begin(), s_list.end());

	for (int i = 0; i < f_list.size(); i++)
	{
		answer += abs(f_list[i] - s_list[i]);
	}
	cout << answer << endl;
	return 0;
}

