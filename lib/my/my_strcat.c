/*
** EPITECH PROJECT, 2018
** Day07
** File description:
** task02
*/

#include "./my.h"
#include <stdlib.h>

char *my_strcat(char *dest, char const *src)
{
    int size = 0;
    int size2 = 0;
    int counter = 0;
    char *str;

    size = my_strlen(src);
    size2 = my_strlen(dest);
    size = size + size2;
    str = malloc(sizeof(char) * size2);
    my_strcpy(str, dest);
    dest = malloc(sizeof(char) * size);
    my_strcpy(dest, str);
    while (size2 < size) {
        dest[size2] = src[counter];
        counter++;
        size2++;
    }
    return (dest);
}
