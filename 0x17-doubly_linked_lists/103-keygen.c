#include <stdio.h>
#include <stdint.h>
#include "lists.h"
/**
 * main - the entry point for the program
 * @argc: number of arguments passed to the program
 * @argv: array of strings with arguments for the program
 * Return: return 0 always
 */
int main(int argc, char *argv[])
{
	char *username = argv[1];
	uint32_t key = 0;

	int j;

	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}

	for (j = 0; username[j] != '\0'; j++)
	{
		key += username[j];
	}

	printf("Valid key for username %s: %u\n", username, key);
	return (0);
}
