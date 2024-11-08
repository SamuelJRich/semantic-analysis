//
// Created by rich4 on 08/11/2024.
//
#include <stdio.h>

FILE *fptr;

int main() {
    fptr = fopen("CommentsMay2017.csv", "r");

    if (fptr == NULL) {
        printf("File could not be opened\n");
        return 1;
    }

    return 0;
}

