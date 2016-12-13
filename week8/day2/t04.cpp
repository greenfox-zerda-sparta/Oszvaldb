#include <iostream>
#include <string>
#include <map>

using namespace std;

// write a function that takes a string and returns a map
// the map should have the letters of the string as keys and
// it should have integers as values that represents how many times the
// letter appeared int the string

map <char, int> countletters (string a) {
	map <char, int> occurence;
	map<char, int>::iterator it;

	for(int i = 0; i != a.size(); i++) {
		occurence[a[i]] += 1;
	}

	for(it = occurence.begin(); it !=occurence.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}

	return occurence;
}

int main() {
string a = "tatatataaaa";
countletters(a);
  return 0;
}


