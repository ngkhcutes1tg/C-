#include <iostream>
#include <stack>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin,s);
    int n = s.size();
    bool flag = true;
    std::stack<char> st;

    for(int i = 0; i < n; ++i) {
        if(s[i] == '(')
            st.push('(');
        else if(s[i] == ')') {
            if(st.empty()) {
                flag = false;
                break;
            }
            else st.pop();
        }
    }

    if(st.empty() && flag)  std::cout << "Valid\n";
    else std::cout << "Invalid\n";

}