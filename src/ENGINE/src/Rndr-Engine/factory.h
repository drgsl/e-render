
#pragma once

// #include "renderer.h"
// #include "renderer.cpp"

#include "api/opengl/opengl.h"
#include "api/opengl/opengl.cpp"

namespace render {
  

enum class API {
    OpenGL,
    Vulkan,
    // Add more APIs as needed
};


class RendererFactory {
public:
    static Renderer* createRenderer(API api) {
        switch (api) {
            case API::OpenGL:
                return new OpenGLRenderer();
            // case API::Vulkan:
            //     return new VulkanRenderer();
            default:
                return nullptr;
        }
    }
};



}
