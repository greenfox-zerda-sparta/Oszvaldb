#include <iostream>
#include <string>

using namespace std;

int fakt(int n);
/*int fakt(int n) {
  int fact=1;
  int i;
  for (i=1; i<=n; i++){
    fact*=i;
  }

  return fact;
}*/

int main (){
	// create a function that returns it's input factorial
int m;
int faktoriel;


cout<<"Enter number: ";
cin>>m;

faktoriel=fakt(m);

cout<<"The factorial is: "<<faktoriel<<endl;
cin.get(); cin.get();

return 0;
}

int fakt(int n) {
  int fact=1;
  int i;
  for (i=1; i<=n; i++){
    fact*=i;
  }
  return fact;
}
