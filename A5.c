//Hang-Man Game 
#include <stdio.h>
#include <string.h>

int main() {
    char word[50], guess[50];
    int lives = 3, i, j, correct = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    for (i = 0; i < strlen(word); i++) {
        guess[i] = '_';
    }
    guess[i] = '\0';

    while (lives > 0 && correct < strlen(word)) {
        printf("\nLives remaining: %d\n", lives);
        printf("Guess the word: %s\n", guess);

        char letter;
        printf("Guess a letter: ");
        scanf(" %c", &letter);

        correct = 0;
        for (i = 0; i < strlen(word); i++) {
            if (word[i] == letter) {
                guess[i] = letter;
                correct++;
            }
        }

        if (correct == 0) 
        {
            lives--;
        }
    }

    if (lives == 0) {
        printf("\nYou lose! The word was: %s\n", word);
    } else {
        printf("\nYou win! The word was: %s\n", word);
    }

    return 0;
}