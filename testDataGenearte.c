#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

void generateString();
void generateINT(int);
void generateGraphy(int, int);

FILE * in;

int main()
{
    srand(time(NULL)); // define a seed for the random number generator
    char fileName[300];
    printf("Please tell me the filename you want to input :");
    scanf("%s",fileName);
    in = fopen(fileName,"w+");
    
    int time = 10;
    while (time--)
    {
        generateString();
        generateINT(100);
        fprintf(in,"\n");
    }
    fclose(in);
}
void generateString()
{
    char random[10 + 1];
    const char ALLOWED[] = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;
    int c = 0;
    int nbAllowed = sizeof(ALLOWED) - 1;
    for (i = 0; i < 3; i++)
    {
        c = rand() % nbAllowed;
        random[i] = ALLOWED[c];
    }
    random[10] = '\0';
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
            fprintf(in,"%c", toupper(random[i]));
        else
            fprintf(in,"%c", random[i]);
    }
}
void generateINT(int limit_num)
{
    int randomNum = rand() % limit_num;
    fprintf(in," %d", randomNum);
}
void generateGraphy(int column, int row)
{
    for (int i = 0; i < column; i++)
    {
        for (int k = 0; k < row; k++)
        {
            fprintf(in,"%c", '1');
        }
        fprintf(in,"\n");
    }       
}