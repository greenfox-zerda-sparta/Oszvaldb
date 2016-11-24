#include <iostream>
#include <string>
#include <vector>

using namespace std;

void take_char(char input, char v) {
		if (input != v) {
			throw v;
		}

	}

void print_vector(vector <char>& new_v) {
	for(unsigned int i = 0; i < new_v.size(); i++) {
		cout << new_v[i] << "|";
	}
}

int main() {
	//create a vector of characters with the size of 8
	//ask the user to fill this vector with characters one by one
	//at the end make sure the vector holds the letters of "GREENFOX"
	//so correct the user if he/she gives a different letter from the one we want them to give :)

	try{
		vector <char> v_greenfox(8);
		vector <char> v_user(8);
		v_greenfox = {'G', 'R', 'E', 'E', 'N', 'F', 'O', 'X'};
		char input;
		for (int i = 0 ; i < 8; i++) {
			cout << "enter a character:";
			cin >> input;
			take_char(input, v_greenfox[i]);
			v_user[i] = input;
		}
	print_vector(v_user);
	}
 catch(char typo){
	 cout << "typo! you might wanted to type: " << typo;
 }
  return 0;
}
