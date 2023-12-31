// Implementation of strlen, strcat, strcpy and strcmp functions

#include <stdio.h>

int my_strlen(char str[]) {
    int i;
    for(i=0; str[i]!='\0';i++); // Or simply for(i=0; str[i]; i++);
    // As loop increments value at the end even after false condtion, it will always end at length of string
    return i;
}

void my_strcat(char dest[], char src[]) {
    int i, j;
    for(i=0; dest[i]!='\0';i++);
    for(j=0; src[j]!='\0';j++){
        dest[i+j]=src[j];
    }
    dest[i+j] = '\0';
}

void my_strcpy(char dest[], char src[]) {
    int i;
    for(i=0; src[i]!='\0';i++){
        dest[i]=src[i];
    }
    dest[i] = '\0';
}
int my_strcmp(char str1[], char str2[]) {
    int i;
    for(i=0; ((str1[i]!='\0') || (str1[i]!='\0')) ;i++){
        if (str1[i]!=str2[i]){
            return str1[i] - str2[i];
        }
    }
    return 0;
}
int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";

    printf("Length of str1: %d\n", my_strlen(str1));

    my_strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    my_strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    printf("Comparison result: %d\n", my_strcmp(str1, str2));

    return 0;
}
