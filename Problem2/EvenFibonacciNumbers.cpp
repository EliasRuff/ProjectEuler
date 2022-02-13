#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> fibSmallerThan(int max)
{
    std::vector<int> fib = {1, 2};

    while (fib.end()[-1] < max)
    {
        fib.push_back(fib.end()[-1] + fib.end()[-2]);
    }

    return fib;
}

int main()
{
    int sum = 0;
    std::vector<int> out, fib = fibSmallerThan(4000000);

    std::remove_copy_if(
        begin(fib),
        end(fib),
        std::back_inserter(out),
        [](int x)
        { return x % 2 != 0; });

    for (int& i : out)
    {
        sum+= i;
    }

    std::cout << sum << '\n';

    return 0;
}