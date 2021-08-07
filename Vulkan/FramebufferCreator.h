#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
#include <stdexcept>
#include <vector>

#include "RenderPass.h"

#pragma once
class FramebufferCreator
{
public:
	std::vector<VkFramebuffer> swapChainFramebuffers;

	FramebufferCreator(VkDevice device, std::vector<VkImageView> swapChainImageViews, RenderPass renderPass, VkExtent2D swapChainExtent);

	void createFramebuffers();

private:
	VkDevice device;
	std::vector<VkImageView> swapChainImageViews;
	RenderPass renderPass;
	VkExtent2D swapChainExtent;
};

