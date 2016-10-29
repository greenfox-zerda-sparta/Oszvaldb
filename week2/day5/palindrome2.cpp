#include <iostream>

using namespace std;

void build_pal(string word, int l) {
  //static_cast <char[l + 1]> (word);
  char * word_data = new char[l + 1];
    copy(word.begin(), word.end(), word_data);
    word_data[l + 1] = '\0';
    for (int i = 0; i < l; i++) {
      if (word_data[i - 1] == word_data[i + 1]) {
    	cout << word_data[i - 1] << word_data[i] << word_data[i + 1] << " ";
      } else if (word_data[i - 1] == word_data[i + 1] &&  word_data[i - 2] == word_data[i + 2]) {
    	cout << word_data[i - 2] << word_data[i - 1] << word_data[i] << word_data[i + 1] << word_data[i + 2] << " ";
      } else if (word_data[i] == word_data[i + 1]) {
    	cout << word_data[i - 1] << word_data[i]  << word_data[i + 1] << word_data[i + 2] << " ";
      }
     // word_data[l * 2 - i - 1] = word_data[i];
    }
}

int main() {
  string word = "dog goat dad duck doodle never";
  int l = word.size();
  //char word_data;
  build_pal(word, l);

  return 0;
}
