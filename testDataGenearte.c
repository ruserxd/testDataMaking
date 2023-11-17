#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
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
        if (i == 0)printf("%c", toupper(random[i]));
        else printf("%c", random[i]);
    }
}
void generateINT(int limit_num)
{
    int randomNum = rand() % limit_num;
    printf(" %d",randomNum);
}
int main()
{
    srand(time(NULL)); // define a seed for the random number generator
    int time = 10;
    while(time --) {
        generateString();
        generateINT(100);
        printf("\n");
    }
}
