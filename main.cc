#include <volk.h>
#include <iostream>

int main() {
    const VkResult result{ volkInitialize() };
    if ( result != VK_SUCCESS ) {
        std::cerr << "Failed to initialize the Vulkan loader: " << result << '\n';
        return 1;
    }

    std::cout << "Vulkan loader initialized.\n";

    return 0;
}