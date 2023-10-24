#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define Max_str_size 64


int main(int argc, char* argv[]) {
    char* p1 = (char*)malloc(Max_str_size * sizeof(char));
    char* p2 = (char*)malloc(Max_str_size * sizeof(char));

    strcpy(p1, argv[1]);

    for (int i  = 0;p1[i] != '\0'; i++) {
        p2[i] = tolower(p1[i]);
    }

    printf("%s \n" ,p2);
}