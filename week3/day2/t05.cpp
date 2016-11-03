#include <string>
#include <iostream>

using namespace std;

// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters
//
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a refrence to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)
//
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.
//
// Create a function that takes an array of houses (and it's length),
// then it creates a new array that consists new houses with the calculated price,
// but all the other properties are the same.

struct House {
  string address;
  int price;
  int rooms;
  int area;
};

bool is_good(House house) {
  return house.area*400 > house.price;
}

int count_good(House houses[], int length) {
  int counter = 0;
  for (int i = 0; i < length; i++) {
    if (houses[i].area*400 > houses[i].price) {
      counter += 1;
	  }
  }
  return counter;
}

House* good_price(House houses[], int length) {
  House* good_price = new House[length];
  for (int i = 0; i < length; i++) {
    good_price[i].address = houses[i].address;
    good_price[i].rooms = houses[i].rooms;
    good_price[i].area = houses[i].area;
    good_price[i].price = houses[i].area*400;

  }
  return good_price;
}

void print(House good_price[], int length ) {
	for (int j = 0; j < length; j++) {
	    cout << good_price[j].address
	    		<< ": rooms: " << good_price[j].rooms
				<< " area:" << good_price[j].area << " price:"
				<< good_price[j].price << endl;
	  }
}

int main() {
  House houses[] =  {
    {"Svabhegy", 1e5, 4, 150},
    {"Rozsadomb", 9e4, 3, 140},
    {"Terezvaros", 6e4, 4, 150},
	{"Jozsefvaros", 5e4, 3, 130}
  };
  cout << is_good(houses[1]) << endl;
  cout << count_good(houses, 4) << endl;
  House* fixed_price_houses = good_price(houses, 4);
  print(fixed_price_houses, 4);
  delete[] fixed_price_houses;
  return 0;
}
