#include <stdio.h>

int main()
{
    int numberOfPipes;

    char pipeInit,pipeOut;

    int i, j;

    scanf("%d",&numberOfPipes);

    for (i = 0; i < numberOfPipes;i++){
        printf("digite %d i cano\n", i);
        scanf(" %c %c", &pipeInit, &pipeOut);

        printf("init=%c , out=%c\n", pipeInit, pipeOut);

        //addpipe
        //resolvepipe
    }

    return 0;
}