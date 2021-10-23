#include <stdio.h>
#include <string.h>

main()
{
    int i;
    char name[] = "SAI KAARTHIK"; //input is my name, space also counts as character

    printf("The string which is to be reversed: ");
    for (i = 0; i < strlen(name); i++) //printing the given string
    {
        printf("%c", name[i]);
    }

    printf("\nThe reverse of the given string: ");
    for (i = strlen(name) - 1; i >= 0; i--) //printing the reverse of the input string-i is the index that starts from zero and goes till one less than the string length
    {
        printf("%c", name[i]);
    }
}
