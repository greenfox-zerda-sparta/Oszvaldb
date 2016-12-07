#include <SDL2/SDL.h>
#include <iostream>
#include "game-engine.hpp"

class MyGame : public Game {
public:
  MyGame() {}
  virtual void init(GameContext& context) {
    context.load_file("wall.bmp");
  }
  virtual void render(GameContext& context) {
    for (int i = 0; i < 10; i ++){
    	for (int j = 0; j < 10; j ++) {
    		context.draw_sprite("wall.bmp", i * 72, j * 72);
    		    context.render();
    	}
    }
  }
};

int main(int argc, char* argv[]) {
	//bool level [10] [10];
	MyGame game;
	  GameEngine engine(&game, 720, 720);
	  engine.run();
	return 0;
}
