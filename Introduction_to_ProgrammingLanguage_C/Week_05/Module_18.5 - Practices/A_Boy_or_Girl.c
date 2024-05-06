#include <stdio.h>
#include <string.h>

// Function to determine gender
char* determine_gender(char username[]) {
    int distinct_characters[26] = {0};
    int i, count = 0;

    // Count distinct characters
    for (i = 0; i < strlen(username); i++) {
        distinct_characters[username[i] - 'a'] = 1;
    }

    // Count the number of distinct characters
    for (i = 0; i < 26; i++) {
        if (distinct_characters[i] == 1) {
            count++;
        }
    }

    // Determine gender based on the count
    if (count % 2 == 0) {
        return "CHAT WITH HER!";
    } else {
        return "IGNORE HIM!";
    }
}

int main() {
    char username[101];

    // Reading input
    scanf("%s", username);

    // Determining gender
    char *result = determine_gender(username);
    printf("%s\n", result);

    return 0;
}
