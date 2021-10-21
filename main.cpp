#include <iostream>
int kakoyDenVGodu()

bool VysokosLi(int year)
{
    if(year%400 == 0 || year % 4 == 0 && year % 100 !=0)
    {
        std::cout << "Год високосный" << std::endl;
        return 1;
    }
    else
    {
        std::cout << "Год невисокосный" << std::endl;
        return 0;
    }
}

int main() {
    system("chcp 65001");
    int year = 2024;
    int skolkoDneyVGodu;
    int denNedeli;
    if(VysokosLi(year) == 1)
        skolkoDneyVGodu == 366;
    else
        skolkoDneyVGodu == 365;

    for (int i = 1; i <= skolkoDneyVGodu; ++i)
    {

    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
