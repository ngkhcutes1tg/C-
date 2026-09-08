#include <iostream>

int fibo(int f)
{
    if(f == 0 || f == 1)
        return f;
    return fibo(f - 1) + fibo(f - 2);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fibo(n);
}