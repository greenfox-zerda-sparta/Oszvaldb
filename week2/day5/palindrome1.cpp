#include <iostream>

using namespace std;

void build_pal(string word, int l) {
  //static_cast <char[l + 1]> (word);
  char * word_data = new char[l + 1];
    copy(word.begin(), word.end(), word_data);
    word_data[l * 2 + 1] = '\0';
    for (int i = 0; i < l; i++) {
      word_data[l * 2 - i - 1] = word_data[i];
    }
    cout << word_data;
}

int main() {
  string word = "pear";
  int l = 4;
  //char word_data;
  build_pal(word, l);

  return 0;
}
