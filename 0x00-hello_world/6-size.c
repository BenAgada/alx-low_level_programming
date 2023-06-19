#include <stdio.h>
/**
 * main - 6-size.c
 * description - Write a C program that prints the size of various type
 * Return: Always 0 (Success)
 */
int main(void){
        printf("size of a char: %ld+ byte(s)\n", sizeof(char));
        printf("size of an int: %ld byte(s)\n", sizeof(int));
        printf("size of a long int: %ld byte(s)\n", sizeof(long int));
        printf("size of a long long: %ld byte(s)\n", sizeof(long long int));
        printf("size of a float: %ld byte(s)\n", sizeof(float));
        return (0);
}

