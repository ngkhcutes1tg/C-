#include <iostream>
#include <queue>
#include <string>

int main() {
    std::queue<std::string> q;
    std::string s;
    int n;
    std::cin >> n;
    q.push("1");
    for(int i = 0; i < n; ++i) {
        s = q.front();
        std::cout << s;
        q.pop();
        q.push(s+"0");
        q.push(s+"1");
    }
    return 0;
}