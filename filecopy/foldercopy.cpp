#include "filesystem"
#include "iostream"

const std::string fromnormal = "modules";
const std::string tonormal = "godot/modules";

int main(){
    std::cout << "starting" << std::endl;

    std::cout << "normally nothing has to be changed, if so just enter # two times" << std::endl;
    std::cout << "select folders: " << std::endl;
    std::cout << " from:" << std::endl;
    std::string from;
    std::string to;
    std::cin >> from;
    std::cout << "to:";
    std::cin >> to;

    if (from == "#") {
        std::cout << "defaulf value will be used" << std::endl;
        from = fromnormal;
    }
    if (to == "#") {
        std::cout << "defaulf value will be used" << std::endl;
        to = tonormal;
    }

    std::filesystem::copy(from,to, std::filesystem::copy_options::recursive);
}