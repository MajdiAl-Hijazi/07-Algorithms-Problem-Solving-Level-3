#include<iostream>
#include<string>
#include<vector>
using namespace std;

string JoinString(const vector<string>& vStrings, string Delim) {

	if (vStrings.empty())
		return "";

	string S1 = "";

	for (const string& Token: vStrings) {
	
		S1.append(Token);
		S1.append(Delim);
	}

	return S1.substr(0, S1.length() - Delim.length());
}

int main() {

	vector<string> vStrings{ "majdi", "aws", "owen", "shahem"};
	cout << "\nS1 = " << JoinString(vStrings ," ") << endl;

	return 0;
}
