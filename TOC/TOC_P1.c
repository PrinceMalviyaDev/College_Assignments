#include<stdio.h>

int main()
{
    int count1 =0;
    int count0 =0;
    char input[10];
    printf("Enter the input string: ");
    scanf("%s", input);
    for(int i=0; i<10; i++)
    {
        if(input[i] == '1')
        {
            count1++;
        }
        else
        {
            count0++;
        }
    }
    printf("Number of 1's: %d\n", count1);
    printf("Number of 0's: %d\n", count0);
    return 0;
}