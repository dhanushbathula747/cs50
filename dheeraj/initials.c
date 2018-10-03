#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
void main(void)
{
    string s = get_string();

    printf("%c", toupper(s[0]));
    for(int i=0;i<strlen(s);i++) //Checking the Condition.
    {
        if(s[i] == ' ')
        {
            if(s[i+1] >= 'a' && s[i+1]<='z')
            {
                printf("%c", toupper(s[i+1])); //Prints the final answer.
            }
            else
            {
                printf("%c",s[i+1]);//Else prints the other answer.
            }

        }
    }
}
