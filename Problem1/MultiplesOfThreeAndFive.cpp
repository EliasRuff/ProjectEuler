#include <iostream>

int multiplesOfThreeAndFive(int max) {
    int sum = 0;
    for (size_t i = 0; i < 1000; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
        else if (i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main() {
    std::cout << multiplesOfThreeAndFive(1000) << '\n';
    return 0;
}