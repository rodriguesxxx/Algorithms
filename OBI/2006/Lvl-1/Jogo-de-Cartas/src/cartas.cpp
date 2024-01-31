#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> buyingCards = {2, 1, 3};
    vector<int> cardDiscard;
    vector<int> deadCards;

    int rounds = 0;
    int value = 1;

    while (!buyingCards.empty()) {
        cardDiscard.clear();

        for (int i = 0; i < buyingCards.size(); i++) {
            if (buyingCards[i] == value) {
                deadCards.push_back(buyingCards[i]);
                value++;
            } else {
                cardDiscard.push_back(buyingCards[i]);
            }
        }
        rounds++;
        buyingCards = cardDiscard;
    }

    cout << rounds << endl;

    return 0;
}
