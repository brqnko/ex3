#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    printf("Tossing a coin...\n");
    int heads = 0, tails = 0;
    int i;
    for (i = 0; i < 3; i++) {
        int is_heads = rand() % 2 == 0;
        printf("Round %d: %s\n", i + 1, (is_heads ? "Heads" : "Tails"));
        if (is_heads) {
            heads++;
        } else {
            tails++;
        }
    }
    printf("Heads: %d, Tails: %d\n", heads, tails);
    return 0;
}