#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes of s2 to concatenate
 *
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *p, *q;
    unsigned int len, i;

    if (s1 == NULL) {
        s1 = "";
    }

    if (s2 == NULL) {
        s2 = "";
    }
     
    if(strlen(s2) < n){
        len = strlen(s2);
    }
    else{
        len = n;
    }
    

    p = malloc(strlen(s1) + len + 1);
    if (p == NULL) {
        return (NULL);
    }

    for (i = 0; i < strlen(s1); i++) {
        *(p + i) = *(s1 + i);
    }

    for (i = 0; i < len; i++) {
        *(p + strlen(s1) + i) = *(s2 + i);
    }

    *(p + strlen(s1) + len) = '\0';

    q = p;
    return (q);
}
