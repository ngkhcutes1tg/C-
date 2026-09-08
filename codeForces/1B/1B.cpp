#include <iostream>
#include <cstring>
#include <cmath>

bool check(std::string s) {
    if(s[0] != 'R') return false;
    if(isalpha(s[1]))   return false;
    int i = 2;
    while(isdigit(s[i])) i++;
    if(s[i] != 'C') return false;
    return true;
}

void tach(std::string s, std::string &so, std::string &chu) {
    int i = 0;
    while(isalpha(s[i]))    {
        chu += s[i];
        i++;
    }
    while(i < s.size()) {
        so += s[i];
        i++;
    }
}

int xuly(std::string s) {
    int x, n = s.size();
    for(int i = n - 1; i >= 0; --i) {
        x += (int(s[i]) - 64) * pow(26, n - i - 1);
    }
    return x;
}

void tach2(std::string s, std::string &so1, std::string &so2) {
    int i = 1;
    while(isdigit(s[i])) {
        so1 += s[i];
        i++;
    }
    i++;
    while(isdigit(s[i])) {
        so2 += s[i];
        i++;
    }
}

int chuyen(std::string s) {
    int n = s.size(), x;
    for(int i = n - 1; i >= 0; --i) {
        x += (s[i] - '0') * pow(10, n - i - 1);
    }
    return x;
}

std::string xuly2(int n) {
    int b[] = {26, 702, 18278, 475254};
    switch(n) {
        case 26: return "Z";
        case 702: return "ZZ";
        case 18278: return "ZZZ";
        case 475254: return "ZZZZ";
    }
    if(n <= 26) {
        std::string s;
        s = char(n + 64); 
        return s;
    }
    std::string s;
    int i = 3;
    while (b[i] > n) {
        i--;
    }
    if(n % b[i] == 0) {
        int x = (n / b[i]) - 1;
        s += char(x + 64);
        n -= x * b[i];    
        switch(n) {
            case 26: return "Z";
            case 702: return "ZZ";
            case 18278: return "ZZZ";
            case 475254: return "ZZZZ";
        }
    }
    else {
        while(i >= 0) {
            int x = n / b[i];
            n %= b[i];
            s += char(x + 64);
            i--;
        }
        s += char(n + 64);
    }
    return s;
}

std::string chuoi(int n) {
    std::string s;
    int a[7], i = 0;
    while(n != 0) {
        a[i] = n % 10;
        n /= 10;
        i++;
    }
    for(int j = i - 1; j >= 0; --j) {
        s += a[j] + '0';
    }
    return s;
} 

int main() 
{
    int n;
    std::string kq;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        if(check(s))    {
            std::string s1;
            std::string s2;
            tach2(s, s1, s2);
            int k = chuyen(s2);
            std::string t = xuly2(k);
            // std::cout <<  t << s1;
            kq += t + s1 + "\n";
        }
        else {
            std::string chu;
            std::string so;
            tach(s, so, chu);
            int k = xuly(chu);
            std::string t = chuoi(k);
            kq += "R" + so + "C" + t + "\n";
            // std::cout << "R" << so << "C" << xuly(chu);
        }
    }
    std::cout << kq;
}