#include <stdio.h>
#include <SDL2/SDL.h>

#undef main

int main()
{
	//Initializes  the subsystems
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		printf("Unable to initialize SDL %s\n", SDL_GetError());
		return -1;
	}

	SDL_Window* window = NULL;
	//Create window
	window = SDL_CreateWindow("Stdio.vn - SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 640, SDL_WINDOW_SHOWN);
	if (window == NULL)
	{
		printf("Could not create window %s", SDL_GetError());
		return -1;
	}

	//Delay 5 seconds
	SDL_Delay(5000);

	//Destroy a window.
	SDL_DestroyWindow(window);

	//cleans up all initialized subsystems
	SDL_Quit();
	return 0;
}