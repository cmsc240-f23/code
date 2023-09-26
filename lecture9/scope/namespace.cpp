#include <iostream>
#include <string>
#include <vector>

// Define a namespace named 'TeamCake'
namespace TeamCake 
{  
    std::string team = "Cake";
    std::vector<std::string> desserts = {"Angel Food", "Birthday", "Chocolate", "Red Velvet", "Sponge"};
}

// Define a namespace named 'TeamPie'
namespace TeamPie
{
    std::string team = "Pie";
    std::vector<std::string> desserts = {"Apple", "Blueberry", "Cherry", "Pumpkin", "Strawberry"};

    namespace NestedNamespace
    {
        int num = 50;
    }
}

int main() 
{
    // Access using scope resolution operator
    std::cout << TeamCake::team << std::endl;  

    // Access nested namespace member
    std::cout << TeamPie::NestedNamespace::num << std::endl; 

    {
        // Using directive
        using namespace TeamCake;   

        // Can now access directly
        std::cout << team << std::endl;

        for (std::string dessert : desserts)
        {
            std::cout << dessert << std::endl; 
        }
    }

    // Using directive
    using namespace TeamPie;  

    // Can now access directly
    std::cout << team << std::endl; 

    for (std::string dessert : desserts)
    {
        std::cout << dessert << std::endl; 
    }
    
    return 0;
}
