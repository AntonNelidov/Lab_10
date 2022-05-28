#include <iostream>
#include <BMP.hpp>

int main()
{
    try {
        my::handler::BMP my_bmp(1000, 1000);
        my_bmp.BMP_Open("../in.bmp");
        my_bmp.Rotate(acos(-1) / 2);
        my_bmp.Interpolation();
        my_bmp.BMP_Close("../out.bmp");
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "Task is done, check yout folder!" << std::endl;
    return 0;
}


