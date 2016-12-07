#include <iostream>
#include "level_builder.hpp"
#include <cstdlib>
#include <ctime>

using namespace std;

const int COVERABLE = 58;

void zerolevel(bool level[10][10]){
	for (int i = 0;i < 10; i++){
			for(int j = 0; j < 10; j++){
				level[i][j]=0;
			}
	}
}

const int STEPS[15] = {3,3,4,5,4,4,4,5,5,5,5,5,6,6,6};

bool level_builder (int x, int y, bool level[10][10], int covered){
	if (!level[x][y]) {
		level[x][y] = 1;
		++covered;
	}
	if (covered >= COVERABLE){
		return level;
	}
	int stp = rand() % 15;
	int dir = rand() % 4;
	for (int i = 1; i <= STEPS[stp]; ++i){
		if(dir == 0){ //right
			if (++x>9) {
				x=9;
				dir = rand() % 4;
			}
			if (!level[x][y]) {
				++covered;
				level[x][y] = 1;
			}
		} else if (dir == 1) { //down
			if (++y>9) {
				y=9;
				dir = rand() % 4;
			}
			if (!level[x][y]) {
				++covered;
				level[x][y] = 1;
			}
		} else if (dir == 2) { // left
			if (--x<0) {
				x=0;
				dir = rand() % 4;
			}
			if (!level[x][y]) {
				++covered;
				level[x][y] = 1;
			}
		} else { // up
			if (--y<0) {
				y = 0;
				dir = rand() % 4;
			}
			if(!level[x][y]){
				++covered;
				level[x][y] = 1;
			}
		}
		if (covered == COVERABLE){
			return level;
		}
	// Paraszt DEBUG
	//cout << "x: " << x << "  y: " << y<<endl;
	}
	level_builder(x, y, level, covered);
	return level; //for safety, shoud never reach this line anyways...
}
