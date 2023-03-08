#include <osbind.h>


void async_events(Model* model) {
	
  UINT32 input;
  if (has_user_input()) {
	  
    input = get_user_input();
	
      if (key_repeat)
       player_movement(&model->player, input);
    
  }
}



void game_loop() {
	
	Model model;
	
	render(base, model);
	
	async_events(&model);
	
	
	
}



