/*
** EPITECH PROJECT, 2023
** my_strcat
** File description:
** Concatenates a string (dest) with another string (src)
** and returns the destination string (dest)
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int len_dest = my_strlen(dest);
    int len_src = my_strlen(src);
    int i = 0;

    for (i = 0; i < len_src; i++) {
        dest[len_dest + i] = src[i];
    }
    dest[len_dest + i] = '\0';
    return dest;
}
