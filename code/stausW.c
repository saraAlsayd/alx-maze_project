#include "../include/main.h"
/**
 * finish - A function checks if you close the window
 * key. and it is handel the frame
 *
 * @event: SDL_EVENT
 * @del: DELAY FLAG
 * @keys: an array to store key
 * Returne: true or false
 **/
bool finish(SDL_EVENT *event, bool *del, const unsigned char *keys)
{
	if (del)
		SDL_DELAY(5);
	SDL_PollEvent(event);
	/*
	 * while(SDL_pollevent(event))
	 * {
	 * 	if (event->type ==SDL_QUIT)
	 * 		return(true);
	 * }
	 * */
	if (keys[SDLK_ESCAPE])
				return (true);

		return (false);
}

/**
 *  * readKeys - A function that gives value of pressed key to keys array.
 *   *
 *    * @keys: A boolean array to store key states
 *     */
void readKeys(const unsigned char *keys)
{
		SDL_PumpEvents();
			keys = SDL_GetKeyboardState(NULL);
				for (int i = 0; i < 1; i++)
						{
									if (keys[i] == 1)
													break;
										}
}
