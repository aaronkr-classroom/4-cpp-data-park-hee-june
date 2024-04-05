#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
	vector<string> words;
	unordered_map<string, int> wordCount;

	cout << "enter words (CTRL+Z to stop): "  << endl;
	// 1. Read words(cin)
	string word;
	while (cin >> word) {
		words.push_back(word);

	}
	// 2. count words(for)
	for (auto& w : words) { // for(i in vec):
		wordCount[w]++;
	}
	//3.print results
	cout << "Word count: " << endl;
	for (auto& pair : wordCount) {
		cout << pair.first << ":" << pair.second << endl;


	}
	return 0;
}