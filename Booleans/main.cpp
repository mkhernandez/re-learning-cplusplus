#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    int random = std::rand();
    
    bool red_light {false};
    bool yellow_light {false};
    bool green_light {false};
    random = 1 + std::rand() / ((RAND_MAX + 1u) / 3);
    std::cout << std::boolalpha; // If you want to see the word "true" or "false" instead of 0 or 1
    if(random == 1) {
        red_light = true;
        yellow_light = false;
        green_light = false;
        std::cout << "Stop! The light is red! " << red_light << std::endl;
    } else if(random == 2) {
        yellow_light = true;
        red_light = false;
        green_light = false;
        std::cout << "Warning, the light is yellow! " << yellow_light << std::endl;
    } else {
        green_light = true;
        yellow_light = false;
        red_light = false;
        std::cout << "The light is green! Keep it moving! " << green_light << std::endl;
    }

    // Size of bool
    std::cout << "Size of bool: " << sizeof(bool) << std::endl;
    return 0;
}