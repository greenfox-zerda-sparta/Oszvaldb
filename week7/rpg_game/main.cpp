#include <SDL2/SDL.h>
#include <iostream>
#include "game-engine.hpp"
#include "level_builder.hpp"

bool level [10] [10];
int x = 0;
int y = 0;
class MyGame : public Game {
public:
  MyGame() {}
  virtual void init(GameContext& context) {
    context.load_file("floor.bmp");
    context.load_file("wall.bmp");
    context.load_file("hero-down.bmp");
    context.load_file("hero-up.bmp");
    context.load_file("hero-right.bmp");
    context.load_file("hero-left.bmp");
  }
  virtual void render(GameContext& context) {
    for (int i = 0; i < 10; i ++){
    	for (int j = 0; j < 10; j ++) {
    		if (level[i] [j] == true) {
    		context.draw_sprite("floor.bmp", i * 72, j * 72);
    		} else {
    			context.draw_sprite("wall.bmp", i * 72, j * 72);
    		}
    	}
    }
		context.draw_sprite("hero-down.bmp", x * 72, y * 72);
		//context.render();
		if (context.was_key_pressed(ARROW_DOWN)) {
			context.draw_sprite("hero-down.bmp", x * 72, y * 72);
			if(level [x] [y+1] == true && (y + 1) * 72 < 720) {
				y++;
				context.draw_sprite("hero-down.bmp", x * 72, y * 72);
				//context.render();
			}
			context.render();
			context.reset_keys();
		}else if (context.was_key_pressed(ARROW_RIGHT)) {
			context.draw_sprite("hero-right.bmp", x * 72, y * 72);
			if(level [x+1] [y] == true && (x + 1) * 72 < 720) {
				x++;
				context.draw_sprite("hero-right.bmp", x * 72, y * 72);
				//context.render();
			}
			context.render();
			context.reset_keys();
		}
		context.render();
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
