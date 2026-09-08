#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

int main() {
    std::cout << "hello\n";
    std::string s;
    std::getline(std::cin, s);
    std::stack<char> st;

    int n = s.size();

    st.push(s[0]);
    for(int i = 1; i < n; ++i) {
        if(!st.empty() && s[i] == st.top())
            st.pop();
        else st.push(s[i]);
    }
    std::string x;
    while(!st.empty()) {
        x += st.top();
        st.pop();
    }
    std::reverse(x.begin(), x.end());
    std::cout << x << "\n";
}