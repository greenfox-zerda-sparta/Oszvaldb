#include <SDL2/SDL.h>
#include <iostream>
#include "game-engine.hpp"
#include "level_builder.hpp"

bool level [10] [10];

class MyGame : public Game {
public:
  MyGame() {}
  virtual void init(GameContext& context) {
    context.load_file("floor.bmp");
    context.load_file("wall.bmp");
  }
  virtual void render(GameContext& context) {
    for (int i = 0; i < 10; i ++){
    	for (int j = 0; j < 10; j ++) {
    		if (level[i] [j] == true) {
    		context.draw_sprite("floor.bmp", i * 72, j * 72);
    		    context.render();
    		} else {
    			context.draw_sprite("wall.bmp", i * 72, j * 72);
    			    context.render();
    		}
    	}
    }
  //context.draw_sprite("wall.bmp", 72, 72);
  	//context.render();
  }
};

int main(int argc, char* argv[]) {
	srand(time(0));
	zerolevel(level);
	level_builder(0,0,level,0);
	MyGame game;
	  GameEngine engine(&game, 720, 720);
	  engine.run();
	return 0;
}
