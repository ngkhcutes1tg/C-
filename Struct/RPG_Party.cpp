#include <iostream>

struct Hero {
    std::string name; 
    int hp, mp;

    Hero (std::string n, int h, int m) : name(n), hp(h), mp(m) {

    }

};

void showPartyInfo(Hero party[], int size) {
    std::cout << "----THONG TIN DOI HINH----" << "\n";
    for(int i = 0; i < size; i++) {
        std::cout << party[i].name << " " 
        << party[i].hp << " "
        << party[i].mp << "\n";
    }
}

int main() {
    Hero myParty[3] = {Hero("A",100,50), Hero("B",200,150), Hero("C", 50, 300)};

    showPartyInfo(myParty, 3);
}