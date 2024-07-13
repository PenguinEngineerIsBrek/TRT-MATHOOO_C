#ifndef LEXER_H
#define LEXER_H
#include <stdio.h>
int tokenize(char path[])
{
    // pointer demo to FILE
    FILE *demo;
    int display;

    // Creates a file "demo_file"
    // with file access as read mode
    demo = fopen(path, "r");

    while (1)
    {
        display = fgetc(demo);

        // end of file indicator
        if (feof(demo))
            break;

        // displaying every characters
        printf("%c", display);
    }

    // closes the file pointed by demo
    fclose(demo);

    return 0;
}
#endif