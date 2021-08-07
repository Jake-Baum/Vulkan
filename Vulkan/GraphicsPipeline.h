#define GLFW_INCLUDE_VULKAN

#include <iostream>
#include <GLFW/glfw3.h>

#include "FileReader.h"
#include "RenderPass.h"

#pragma once
class GraphicsPipeline
{
public:
	VkPipelineLayout pipelineLayout;
	VkPipeline graphicsPipeline;

	GraphicsPipeline(VkDevice device, VkExtent2D swapChainExtend, RenderPass renderPass);

	void createGraphicsPipeline();

private:
	RenderPass renderPass;
	VkDevice device;
	VkExtent2D swapChainExtent;

	VkShaderModule createShaderModule(const std::vector<char>& code);
};

