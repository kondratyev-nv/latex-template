#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

const int n = 10, m = 5;

int main(int argc, char** argv) {

    std::cout << "Hello World!" << std::endl;
    
    float* A = new float[n * m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            A[i * m + j] = i + j;
        }
    }

    for (int i = 0; i < n; ++i) {
        std::cout << "| ";
        for (int j = 0; j < m; ++j) {
            std::cout << std::setw(5) << A[i * m + j] << " ";
        }
        std::cout << " |" << std::endl;
    }

    std::ofstream out;

    /*
    * выдача результатов в файл
    */
    out.open("d01-x");
    out << std::setw(10) << "num" << " " << std::setw(10) << "value"
        << std::endl;
    for (float x = 0; x < 10; x += 1) {
        out << std::setw(10) << x << " " << std::setw(10) << x << std::endl;
    }
    out.close();

    out.open("d01-xx");
    out << std::setw(10) << "num" << " " << std::setw(10) << "value"
        << std::endl;
    for (float x = 0; x < 10; x += 1) {
        out << std::setw(10) << x << " " << std::setw(10) << x * x << std::endl;
    }
    out.close();

    out.open("d01-sin");
    out << std::setw(10) << "num" << " " << std::setw(10) << "value"
        << std::endl;
    for (float x = 0; x < 10; x += 1) {
        out << std::setw(10) << x << " " << std::setw(10) << sin(x)
            << std::endl;
    }
    out.close();

    return 0;

}

