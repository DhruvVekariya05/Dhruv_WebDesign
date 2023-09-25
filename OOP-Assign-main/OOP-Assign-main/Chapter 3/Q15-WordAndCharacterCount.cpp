#include <iostream>

using namespace std;

int main() {
  string sentence;
  cout << "Enter a sentence: ";
  getline(cin, sentence);
  int wordCount = 0, charCount = 0;
  for (int i = 0; i < sentence.length(); i++) {
    if (sentence[i] == ' ')
      wordCount++;
    else
      charCount++;
  }
  cout << "Number of words: " << wordCount + 1 << endl;
  cout << "Number of characters: " << charCount << endl;
}