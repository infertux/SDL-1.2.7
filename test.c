#include <stdio.h>
#include "SDL.h"

int main(void)
{
    SDL_Init(SDL_INIT_VIDEO);
    if (SDL_GL_LoadLibrary("libGL.so.1") == -1)
        printf("SDL_GL_LoadLibrary() failed: %s.\n", SDL_GetError());
    return(0);
}
