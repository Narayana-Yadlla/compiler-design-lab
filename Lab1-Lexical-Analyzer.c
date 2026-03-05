#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter statement: ");
    fgets(str,100,stdin);

    char *token=strtok(str," ");

    while(token!=NULL)
    {
        if(strcmp(token,"int")==0 || strcmp(token,"float")==0 || strcmp(token,"if")==0)
            printf("%s : Keyword\n",token);
        else if(isdigit(token[0]))
            printf("%s : Constant\n",token);
        else
            printf("%s : Identifier\n",token);

        token=strtok(NULL," ");
    }
    return 0;
}
