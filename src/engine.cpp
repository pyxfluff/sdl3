#include "Engine.h"
#include <cstdlib>

void Engine::Run() {
    this -> InitWindow();
    this -> LoadVulkan();
    this -> MainLoop();
    this -> Cleanup();
}

void Engine::InitWindow() {
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "cant create window", SDL_GetError(), 0);
        
        exit(EXIT_FAILURE);
    }

    this -> Window = SDL_CreateWindow("Engine", this -> WIDTH, this -> HEIGHT, SDL_WINDOW_VULKAN);
}
