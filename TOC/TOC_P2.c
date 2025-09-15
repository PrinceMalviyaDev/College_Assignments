#include<stdio.h>
#include<string.h>
int main()
{
    int count1 = 0;
    int count0 = 0;
    char input[11]; // allow space for null terminator
    printf("Enter a String: ");
    scanf("%10s", input); // limit input to 10 chars
    int len = strlen(input);
    for(int i = 0; i < len; i++)
    {
        if(input[i] == '1')
            count1++;
        else if(input[i] == '0')
            count0++;
    }
    if((count1%2) == 0)
    {
        printf("There are even number of 1s in the string.\n");
    }
    else
    {
        printf("There are odd number of 1s in the string.\n");
    }
    if((count0%2) == 0)
    {
        printf("There are even number of 0s in the string.\n");
    }
    else
    {
        printf("There are odd number of 0s in the string.\n");
    }
}
