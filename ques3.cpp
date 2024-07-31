#include <iostream>
#include <sstream>
#include <map>
#include <string>
using namespace std;

int main() {
    string paragraph;
    map<string, int> wordCount;
    string word;

    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    stringstream ss(paragraph);
    while (ss >> word) {
        ++wordCount[word];
    }

    cout << "Word frequencies:\n";
    for (const auto& pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
