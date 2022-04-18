#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define BUFFER_SIZE 16384

void Help()
{
printf("\nAllows to Edit & Insert a text on a line in a text file... without
replacing the entire content.
This is an improved & Combined version of ReplaceLine & StrSurr utilities 
both of them were created by Kvc as well.
I needed a tool, when I was working on a Fiverr project, and I couldn't find a
simple solution. So, I created my own solution. I hope this will help you in 
your project too.
\n\"Keep Creating... Be Authentic\".
\nv.1.0 Created by Kvc - www.batch-man.com
\nUSAGE:\nCall EditLine [File] [LineNumber] [Marker 1] [Marker 2] [Text]\n
Where:
[File]\t\t\t: Name of the Text File
[LineNumber]\t\t: Line to Edit/Trim/Modify
[Marker 1]\t\t: Text From where, to start the edit
[Marker 2]\t\t: Text From where, to end the edit
[Text]\t\t\t: Text to be inserted

Example:
Call EditLine designmap2.xml 2 \"product=\" \")\" \"6.0(31)\"

The above command will edit the 2nd line from the designmap2.xml file, and
replace the text between the markers with the text \"6.0(31)\".
You can use this utility to edit a line in a file, and also to insert a line.

Input: \"<?aid style=\"50\" featureSet=\"257\" product=\"16.3(24)\" ?>\"
Output: \"<?aid style=\"50\" featureSet=\"257\" product=\"6.0(31)\" ?>\"
");
    return;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Error: missing arguments\n");
        Help();
        return 1;
    }
    if (!strcmp(argv[1], "/?"))
    {
        Help();
        return 0;
    }
    char *file_open = argv[1];
    /* File pointer to hold reference of input file */
    FILE *fTemp, *fOut;

    char buffer[BUFFER_SIZE];
    fTemp = fopen(argv[1], "rb+");
	fOut = fopen(".temp", "wb+");
    
    fseek(fTemp, 0, SEEK_SET);
    fseek(fOut, 0, SEEK_SET);

    /* fopen() return NULL if unable to open file in given mode. */
    if (fTemp == NULL)
    {
        fprintf(stderr, "%s: %s", file_open, strerror(errno));
        return errno;
    }

    int count = 0;
    while ((fgets(buffer, BUFFER_SIZE, fTemp)) != NULL)
    {
        count++;

        /* If current line is line to replace */
        if (count == atoi(argv[2]))
        {
            size_t openlen = strlen(argv[3]);
            size_t closelen = strlen(argv[4]);

            int ret = strstr(buffer, argv[3]);
            int ret2 = strstr(buffer, argv[4]);

            ret = abs(buffer-ret)+openlen;
            ret2 = abs(buffer-ret2);

            //printf("%d\n", ret);
            //printf("%d\n", ret2);

            for (int i = 0; i <= ret; i++)
            {
                fprintf(fOut, "%c", buffer[i]);
            }
            fprintf(fOut, "%s", argv[5]);
            for (int i = ret2+1; i < strlen(buffer); i++)
            {
                fprintf(fOut, "%c", buffer[i]);
            }
    
        } else {
			fprintf(fOut, "%s", buffer);
		}
    }
    
    fclose(fTemp);
    fclose(fOut);

    remove(argv[1]);
	rename(".temp", argv[1]);

    return 0;
    }
