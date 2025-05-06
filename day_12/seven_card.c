// define card using struct (suit enum + short for pips)
// create and shuffle a standard 52-card deck
// simulate 1 million 7-card poker hands
// evaluate hand types (pair, two pair, three of a kind, etc)
// track counts of each hand type
// estimate probability of each hand by Monte Carlo method
// compare to table

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DECK_SIZE 52
#define SIMULATIONS 1000000

// enum to represent suits
typedef enum {
    HEARTS, DIAMONDS, CLUBS, SPADES
} Suit;

// struct to represent a playing card
typedef struct {
    Suit suit;
    short pips; // 2 through 14 (J=11, Q=12, K=13, A=14)
} Card;

// initialize the deck
void init_deck(Card deck[]) {
    int index = 0;
    for (int s = 0; s < 4; s++) {
        for (int p = 2; p <= 14; p++) {
            deck[index].suit = s;
            deck[index].pips = p;
            index++;
        }
    }
}

// shuffle the deck
void shuffle_deck(Card deck[]) {
    for (int i = DECK_SIZE - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

// deal a hand of 7 cards
void deal_hand(Card hand[], Card deck[]) {
    for (int i = 0; i < 7; i++) {
        hand[i] = deck[i];
    }
}

// evaluate hand and return a code for its type
// 1 = one pair, 2 = two pair, 3 = three of a kind, 4 = full house, 5 = four of a kind, 0 = high card
int evaluate_hand(Card hand[]) {
    int value_count[15] = {0}; // index 2 to 14

    for (int i = 0; i < 7; i++) {
        value_count[hand[i].pips]++;
    }

    int pairs = 0, threes = 0, fours = 0;

    for (int i = 2; i <= 14; i++) {
        if (value_count[i] == 2) pairs++;
        if (value_count[i] == 3) threes++;
        if (value_count[i] == 4) fours++;
    }

    if (fours == 1) return 5;
    if (threes == 1 && pairs >= 1) return 4;
    if (threes == 1) return 3;
    if (pairs >= 2) return 2;
    if (pairs == 1) return 1;

    return 0; // high card
}

int main() {
    Card deck[DECK_SIZE];
    Card hand[7];
    
    int high_card = 0, one_pair = 0, two_pair = 0, three_kind = 0, full_house = 0, four_kind = 0;

    srand(time(NULL)); // seed RNG once

    for (int i = 0; i < SIMULATIONS; i++) {
        init_deck(deck);
        shuffle_deck(deck);
        deal_hand(hand, deck);

        int result = evaluate_hand(hand);
        switch (result) {
            case 0: high_card++; break;
            case 1: one_pair++; break;
            case 2: two_pair++; break;
            case 3: three_kind++; break;
            case 4: full_house++; break;
            case 5: four_kind++; break;
        }
    }

    // print estimated probabilities
    printf("Monte Carlo Simulation Results (out of %d hands):\n", SIMULATIONS);
    printf("High Card     : %.5f\n", high_card / (float)SIMULATIONS);
    printf("One Pair      : %.5f\n", one_pair / (float)SIMULATIONS);
    printf("Two Pair      : %.5f\n", two_pair / (float)SIMULATIONS);
    printf("Three of Kind : %.5f\n", three_kind / (float)SIMULATIONS);
    printf("Full House    : %.5f\n", full_house / (float)SIMULATIONS);
    printf("Four of Kind  : %.5f\n", four_kind / (float)SIMULATIONS);

    return 0;
}