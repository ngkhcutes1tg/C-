// #include <iostream>

// int main() {
//     int score = 100;
//     int* pScore = &score;
//     std::cout << "Cach 1 (Truc tiep): " << score << "\n";
//     std::cout << "Cach 2 (Gian tiep): " << *pScore << "\n";   
//     *pScore += 150;
//     std::cout << "Score sau khi sua: " << score << "\n";
// }

#include <iostream>

struct Node {
    int value;
    Node* next;
};

int main() {
    Node node1 = {10, nullptr};
    Node node2 = {20, nullptr};
    node1.next = &node2;

    std::cout << node1.next->value << "\n";
}
