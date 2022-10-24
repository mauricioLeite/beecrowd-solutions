#include <stdio.h>

typedef struct typeDeck {
    int cartas[200];
    int head, tail;
} typeDeck;

void pushDeck ( typeDeck*deck, int n ) {
    deck->cartas[deck->tail++] = n;
}
int popDeck ( typeDeck*deck ) {
    return deck->cartas[deck->head++];
}
int main ( int argc, char argv[] ) {
    typeDeck deck;
    int n, i, value, drinkme, discarded;

    while ( scanf ( "%d", &n ) != EOF ) {
        drinkme = 0;
        deck.tail = n;
        deck.head = 0;
        if ( n == 0 )
            return 0;
        for ( i = 0; i < n; i++ )
            deck.cartas[i] = i + 1;
        while ( deck.head != deck.tail - 1 ) {
         if ( drinkme == 0 ) {
                discarded=popDeck ( &deck );
                if ( discarded == 1 )
                    printf ( "Discarded cards: %d", discarded );
                else
                    printf ( ", %d", discarded );
                    drinkme++;
            }
            else {
            value=popDeck ( &deck );
                pushDeck ( &deck, value );
                drinkme--;
            }
        }
        printf ("\n");
        printf ("Remaining card: %d\n", deck.cartas[deck.tail-1]);
    }
}
