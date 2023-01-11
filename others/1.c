#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000


void remove(char *str, const char *toRemove);


int main()
{
    FILE * fPtr;
    FILE * fTemp;
    char path[100];
    
    char toRemove[100];
    char buffer[1000];


    /* Input source file path path */
    printf("Enter path of source file: ");
    scanf("%s", path);

    printf("Enter word to remove: ");
    scanf("%s", toRemove);


    /*  Open files */
    fPtr  = fopen(path, "r");
    fTemp = fopen("delete.tmp", "w"); 

    /* fopen() return NULL if unable to open file in given mode. */
    if (fPtr == NULL || fTemp == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_SUCCESS);
    }


    /*
     * Read line from source file and write to destination 
     * file after removing given word.
     */
    while ((fgets(buffer, BUFFER_SIZE, fPtr)) != NULL)
    {
        // Remove all occurrence of word from current line
        remove(buffer, toRemove);

        // Write to temp file
        fputs(buffer, fTemp);
    }


    /* Close all files to release resource */
    fclose(fPtr);
    fclose(fTemp);


    /* Delete original source file */
    remove(path);

    /* Rename temp file as original file */
    rename("delete.tmp", path);


    printf("\nAll occurrence of '%s' removed successfully.", toRemove);

    return 0;
}
