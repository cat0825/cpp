#include <iostream>

void modifyValue(int x) {
    x *= 2; // 修改参数的值
    std::cout << "Inside function: " << x << std::endl;
}

int main() {
    int num = 5;
    std::cout << "Before function call: " << num << std::endl;
    modifyValue(num);
    std::cout << "After function call: " << num << std::endl;
    return 0;
}
