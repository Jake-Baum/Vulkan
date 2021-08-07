#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
#include <stdexcept>
#include <vector>

#include "Constants.h"

#pragma once
class SemaphoreCreator
{
public:
	static std::vector<VkSemaphore> createSemaphores(VkDevice device);
};

