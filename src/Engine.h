#ifndef ENGINE_H
#define ENGINE_H

#include <vulkan/vulkan.h>
#include <SDL3/SDL.h>

class Engine {
public:
    void Run();

private:

    const uint32_t WIDTH = 1280;
    const uint32_t HEIGHT = 720;

    SDL_Window* Window;

    void InitWindow();
    void LoadVulkan();
    void MainLoop();
    void Cleanup();

};

#endif
