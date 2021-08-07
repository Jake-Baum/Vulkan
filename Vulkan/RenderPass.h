#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
#include <stdexcept>

#pragma once
class RenderPass
{
public:
	VkRenderPass renderPass;

	RenderPass(VkDevice device, VkFormat swapChainImageFormat);

	void createRenderPass();

private:
	VkDevice device;
	VkFormat swapChainImageFormat;
	VkPipelineLayout pipelineLayout;
};

