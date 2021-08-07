#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
#include <stdexcept>
#include <vector>

#include "Structs.h"
#include "PhysicalDevice.h"

#pragma once
class CommandPool
{
public:
	VkCommandPool commandPool;

	CommandPool(VkDevice device, VkPhysicalDevice physicalDevice, VkSurfaceKHR surface);

	void createCommandPool();

private:
	VkDevice device;
	VkPhysicalDevice physicalDevice;
	VkSurfaceKHR surface;
};

