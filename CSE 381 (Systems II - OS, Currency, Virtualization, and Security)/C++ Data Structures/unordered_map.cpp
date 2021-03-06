#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> map;

    map.insert({"Foo", 1});
    map.insert({"Bar", 2});
    map.insert({"Baz", 3});
    map["Baz"] *= 2;

    for (const auto &item : map) {
        std::cout << item.first << " :: " << item.second << std::endl;
    }

    return EXIT_SUCCESS;
}
