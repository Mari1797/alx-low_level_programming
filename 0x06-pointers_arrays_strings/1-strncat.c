#include "main.h"

/**
 * _strncat - Contenate 2 strings
 * @dest: first string
 * @src: second string
 * @n: no of contenation
 *
 * Return: A pointer to the resulting string
 */*
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int j = 0;

	while (dest[len])
	{
		len++;
	}

	while (j < n && src[j])
	{
		dest[len] = src[j];
		len++;
		j++;
	}

	dest[len + n + 1] = '\0';
        return(dest);									   
}
