#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
#include <stdexcept>
#include <vector>

#include "FramebufferCreator.h"
#include "CommandPool.h"
#include "GraphicsPipeline.h"

#pragma once
class CommandBuffer
{
public:
	std::vector<VkCommandBuffer> commandBuffers;
	void createCommandBuffers();

	CommandBuffer(VkDevice device, FramebufferCreator framebuffer, CommandPool commandPool, RenderPass renderPass, VkExtent2D swapChainExtent, GraphicsPipeline graphicsPipeline);

private:
	VkDevice device;
	FramebufferCreator framebuffer;
	CommandPool commandPool;
	RenderPass renderPass;
	VkExtent2D swapChainExtent;
	GraphicsPipeline graphicsPipeline;
};

