#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 5

void toLowerCase(char* plaintext, int length) {
    for (int i = 0; i < length; i++) {
        if (plaintext[i] > 64 && plaintext[i] < 91)
            plaintext[i] += 32;
    }
}

int removeDuplicates(char str[], int n) {
    int index = 0;
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j])
                break;
        }
        if (j == i)
            str[index++] = str[i];
    }
    return index;
}

void generateKeyTable(char key[], char keyTable[SIZE][SIZE]) {
    int flag[26] = { 0 };
    int n = strlen(key);
    n = removeDuplicates(key, n);

    char filler = 'a';
    int i = 0, j = 0;

    for (int k = 0; k < n; k++) {
        if (key[k] == 'j')
            key[k] = 'i';

        if (!flag[key[k] - 'a']) {
            keyTable[i][j++] = key[k];
            flag[key[k] - 'a'] = 1;
        }
        if (j == SIZE) {
            j = 0;
            i++;
        }
    }

    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (ch == 'j')
            continue;

        if (!flag[ch - 'a']) {
            keyTable[i][j++] = ch;
            flag[ch - 'a'] = 1;
        }
        if (j == SIZE) {
            j = 0;
            i++;
        }
    }
}

void prepareText(char* text, int* len) {
    int i;
    for (i = 0; i < *len; i += 2) {
        if (i == *len - 1) {
            text[*len] = 'x';
            (*len)++;
        }

        if (text[i] == text[i + 1]) {
            for (int j = *len; j > i + 1; j--) {
                text[j] = text[j - 1];
            }
            text[i + 1] = 'x';
            (*len)++;
        }
    }
}

void getPosition(char ch, char keyTable[SIZE][SIZE], int* row, int* col) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (keyTable[i][j] == ch) {
                *row = i;
                *col = j;
                return;
            }
        }
    }
}

void encryptPair(char* text, char keyTable[SIZE][SIZE], int index) {
    int r1, c1, r2, c2;

    getPosition(text[index], keyTable, &r1, &c1);
    getPosition(text[index + 1], keyTable, &r2, &c2);

    if (r1 == r2) {
        text[index] = keyTable[r1][(c1 + 1) % SIZE];
        text[index + 1] = keyTable[r2][(c2 + 1) % SIZE];
    } else if (c1 == c2) {
        text[index] = keyTable[(r1 + 1) % SIZE][c1];
        text[index + 1] = keyTable[(r2 + 1) % SIZE][c2];
    } else {
        text[index] = keyTable[r1][c2];
        text[index + 1] = keyTable[r2][c1];
    }
}

void encrypt(char* text, char keyTable[SIZE][SIZE]) {
    int len = strlen(text);
    prepareText(text, &len);

    for (int i = 0; i < len; i += 2) {
        encryptPair(text, keyTable, i);
    }
}

int main() {
    char key[30], text[100], keyTable[SIZE][SIZE];

    printf("Enter key: ");
    scanf("%s", key);
    toLowerCase(key, strlen(key));

    printf("Enter plaintext: ");
    scanf("%s", text);
    toLowerCase(text, strlen(text));

    generateKeyTable(key, keyTable);

    printf("Key Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", keyTable[i][j]);
        }
        printf("\n");
    }

    encrypt(text, keyTable);

    printf("Ciphertext: %s\n", text);

    return 0;
}

