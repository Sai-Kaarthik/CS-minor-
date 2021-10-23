#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(int argn, char *args[]) //Calling of main function. Here, the main function has two arguments: argn of type int and args, which is an array character pointers.
{
	int i; // Declaration of variable i of data type int
	FILE *fp; // Declaration of variable fp, which is a pointer to the data type FILE
	fp = fopen("note.txt", "a"); // fopen is an input-output function (I/O) which creates a new file for use or opens the file if it already exists. 
	//Here, we have specified "note.txt" as the filename. fp is then assigned an identifier which contains all the information about file. The second argument "a" specifies that we are opening the file to add data to it. 
	if(argn>2) // Checks if the number of arguments given at command line is greater than 2.
	{
		fprintf(fp, "**** %s ****\n", args[1]); // Prints the second argument given in the command line in the place of the format specifier %s.
		for(i=2; i<argn; i++)
		{
			if(i%10==0)
				{
				fprintf(fp, "\n"); //Goes to the next line after every ten arguments are printed.
			    }
			fprintf(fp, "%s", args[i]); // Prints the ith argument, from i=2. Therefore, the first arguement, which is the name of the executable program file like "program.exe" is not printed.
		}
		fprintf(fp, "\n----------------------------------\n"); // Prints a series of dashes in the next line, after all the arguements have been printed.
	}
	fclose(fp); // Closes the file associated with the pointer fp, which is "note.txt".
}
