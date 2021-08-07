#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
#include <stdexcept>

#include "Constants.h"
#include "CommandBuffer.h"

#pragma once
class FrameDrawer
{
public:
	FrameDrawer(VkDevice device,
							VkSwapchainKHR swapChain,
							std::vector<VkSemaphore> imageAvailableSemaphore,
							std::vector<VkSemaphore> renderFinishedSemaphore,
							std::vector<VkFence> inFlightFences,
							std::vector<VkFence> imagesInFlight,
							CommandBuffer commandBuffer,
							VkQueue graphicsQueue,
							VkQueue presentQueue);

	void drawFrame();

private:
	VkDevice device;
	VkSwapchainKHR swapChain;
	std::vector<VkSemaphore> imageAvailableSemaphores;
	std::vector<VkSemaphore> renderFinishedSemaphores;
	std::vector<VkFence> inFlightFences;
	std::vector<VkFence> imagesInFlight;
	CommandBuffer commandBuffer;
	VkQueue graphicsQueue;
	VkQueue presentQueue;
	size_t currentFrame = 0;

};

