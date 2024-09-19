#include<stdio.h>
#include "not_string.h"

int main()
{

    // test not_strlen
    char str[] = "Hello";
    printf("Length of string: %d\n", not_strlen(str));

    // test not_strcmp
    char str1[] = "Hello";
    char str2[] = "Hello";
    printf("Compare strings: %d\n", not_strcmp(str1, str2));
    // test not_strcmp
    char str14[] = "Hello";
    char str15[] = "World";
    printf("Compare strings: %d\n", not_strcmp(str14, str15));

    // test not_strncmp
    char str3[] = "Hel";
    char str4[] = "Hello";
    printf("Compare strings: %d\n", not_strncmp(str3, str4, 3));
    
    // test not_strncmp
    char str31[] = "Hello";
    char str41[] = "Hetlo";
    printf("Compare strings: %d\n", not_strncmp(str31, str41, 3));

    // test not_strcpy
    char str5[] = "Hello";
    char str6[10];
    printf("Copy string: %s\n", not_strcpy(str6, str5));

    // test not_strncpy
    char str7[] = "Hello";
    char str8[10];
    printf("Copy string: %s\n", not_strncpy(str8, str7, 3));

    // test not_strcat
    char str9[20] = "Hello";
    char str10[] = " World";
    printf("Concatenated string: %s\n", not_strcat(str9, str10));

    // test not_strncat
    char str11[20] = "Hello";
    char str12[] = " World";
    printf("Concatenated string: %s\n", not_strncat(str11, str12, 3));

    // test not_strreverse
    char str13[] = "Hello";
    not_strreverse(str13);
    printf("Reversed string: %s\n", str13);

    return 0;
}