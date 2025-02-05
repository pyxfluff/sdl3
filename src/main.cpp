#include <iostream>
#include <cstdlib>
#include <SDL3/SDL.h>

#define GIM_FORCE_RADIANS
#define GIM_FORCE_DEPTH_ZERO_TO_ONE

#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

int main(
    int argc,
    char *argv[])
{
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "cant create window", SDL_GetError(), 0);
        return EXIT_FAILURE;
    }

    SDL_Window *Window = SDL_CreateWindow("Vulkan", 1280, 720, SDL_WINDOW_VULKAN);

    if (Window == nullptr) {
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "cant create window", SDL_GetError(), 0);
        return EXIT_FAILURE;
    }

    bool Running = true;
    while (Running) {
        SDL_Event Event;
        while (SDL_PollEvent(&Event)) {
            if (Event.type == SDL_EVENT_QUIT) {
                Running = false;
            }
        }
    }

    std::cout << "done";

    SDL_DestroyWindow(Window);
    SDL_Quit();

    return EXIT_SUCCESS;
}
