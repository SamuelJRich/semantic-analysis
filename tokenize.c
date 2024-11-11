#include <stdio.h>
#include <string.h>
#include <stdbool.h>

FILE *fptr;

void parse_csv_line(char *line) {
    bool in_quotes = false;
    char *field_start = line;
    int field_count = 0;

        for (char *p = line; *p; p++) {
        if (*p == '"') {
            in_quotes = !in_quotes;  // Toggle quote mode
        } else if (*p == ',' && !in_quotes) {
            *p = '\0';  // End of field
            field_count++;

        }
    }
}

int main() {

    // Opens the file in read mode.
    fptr = fopen("CommentsMay2017.csv", "r");

    // Error handling for checking the file opening.
    if (fptr == NULL) {
        perror("File could not be opened\n");
        return 1;
    }



    return 0;
}

