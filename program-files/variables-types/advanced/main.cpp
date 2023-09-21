#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

int main(int argc, char const *argv[])
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<std::string> svec = {"one", "two", "three"};

    std::cout << "Int elements: " << vec.size() << std::endl;
    vec.emplace_back(6);
    vec.push_back(7);
    std::cout << "Int elements: " << vec.size() << std::endl;
    std::cout << "Front: " << vec.front() << std::endl;
    std::cout << "Back: " << vec.back() << std::endl;
    // Print Vector
    std::cout << "Vector: ";
    for (int n : vec)
        std::cout << n << ' ';
    std::cout << std::endl;

    std::cout << "Int elements: " << svec.size() << std::endl;
    svec.emplace_back("four");
    svec.push_back("five");
    std::cout << "Int elements: " << svec.size() << std::endl;
    std::cout << "Front: " << svec.front() << std::endl;
    std::cout << "Back: " << svec.back() << std::endl;
    // Print Vector
    std::cout << "Vector: ";
    for (std::string n : svec)
        std::cout << n << ' ';
    std::cout << std::endl;

    return 0;
}
