#include<iostream>
#include<vector>
#include<string>
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

string ReverseWordsInString(string S1) {

    vector<string> vString;
    string S2 = "";

    vString = SplitStringToTokens(S1, " ");
    vector<string>::iterator iter = vString.end();

    while (iter != vString.begin()) {

        iter--;
        S2 += *iter + " ";
    }

    if (!S2.empty())
        S2.pop_back();

    return S2;
}

int main() {

    string S1 = ReadString();
    cout << "\nString after reversing words :\n" << ReverseWordsInString(S1) << endl;

	return 0;
}