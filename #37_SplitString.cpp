#include<iostream>
#include<string>
#include<vector>
using namespace std;

string ReadString() {

    string S1;
    cout << "Enter your string ?\n";
    getline(cin, S1);
    return S1;
}

vector<string> SplitStringToTokens(string S1, string Delim) {

    vector<string> vTokens;
    string Tokens;
    short pos = 0;

    while ((pos = S1.find(Delim)) != string::npos) {

        Tokens = S1.substr(0, pos);

        if (Tokens != "")
            vTokens.push_back(Tokens);

        S1.erase(0, pos + Delim.length());
    }

    if (S1 != "")
            vTokens.push_back(S1);

    return vTokens;
}

void PrintSplitString(vector<string> vTokens) {

    cout << "Tokens = " << vTokens.size() << endl;

    for (const string& Tokens : vTokens) {
    
        cout << Tokens << endl;
    }
}

int main() {

    string S1 = ReadString();
    PrintSplitString(SplitStringToTokens(S1 ," "));

	return 0;
}