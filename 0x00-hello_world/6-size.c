# include <stdio.h>

/**
* main - Sizeofvariables
* Return: 0
*/

int main(void)
{
printf("Size of a char: %c byte(s)\n",sizeof(char));
printf("Size of an int: %u byte(s)\n",sizeof(int));
printf("Size of a long int: %lu byte(s)\n",sizeof(long));
printf("Size of a lon long int: %llu byte(s)\n",sizeof(long long));
printf("Size of a float: %f byte(s)\n",sizeof(float));
return (0);
}