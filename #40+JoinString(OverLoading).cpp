#include<iostream>
#include<string>
#include<vector>
using namespace std;

string JoinString(const vector<string>& vStrings, string Delim) {

	if (vStrings.size() == 0)
		return "";

	string S1 = "";

	for (const string& Token : vStrings) {

		S1.append(Token);
		S1.append(Delim);
	}

	return S1.substr(0, S1.length() - Delim.length());
}

string JoinString(string arr[], short Length, string Delim) {

	if (Length == 0)
		return "";

	string S1 = "";

	for (short i = 0; i < Length; i++) {
	
		S1.append(arr[i]);
		S1.append(Delim);
	}

	return S1.substr(0, S1.length() - Delim.length());
}

int main() {

	vector<string> vStrings{ "majdi", "aws", "owen", "shahem" };
	cout << "Vector after join:\n" << JoinString(vStrings ," ") << endl;
	string arr[]{ "majdi", "aws", "owen", "shahem" };
	cout << "\n\nArray after join:\n" << JoinString(arr, 4, " ") << endl;

	return 0;
}