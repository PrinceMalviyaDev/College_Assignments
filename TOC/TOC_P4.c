// Design a DFA that accepts atmost one '0' over the alphabet {0,1}:

#include<stdio.h>

int main()
{
    char state1 = 'A';
    char state2 = 'B';
    char state3 = 'C';
    char PS = state1;

    char input[50];
    
    printf("Enter the String : ");
    scanf("%s", input);

    int length = 0;
    while(input[length] != '\0')
    {
        if(input[length] != '0' && input[length] != '1')
        {
            printf("Please Enter a valid string next time.");
            return 0;
        }
        length++;
    }

    for(int i = 0; i < length; i++)
    {
        switch(PS)
        {
            case 'A':
                if(input[i] == '0')
                {
                    PS = state2;
                }
                else
                {
                    PS = state1;
                }
                break;
            case 'B':
                if(input[i] == '1')
                {
                    PS = state2;
                }
                else
                {
                    PS = state3;
                }
                break;
            case 'C':
                if(input[i] == '0' || input[i] == '1')
                {
                    PS = state3;
                }
                break;
        }
    }
    
    if(PS == state2)
    {
        printf("The Input String is accepted.");
    }
    else
    {
        printf("The Input String is rejected.");
    }
}

// Construct a moore machine that takes set of all strings over {a,b} as input and print 1 as output for every occurrence if ab as a substring.

// Construct a moore machine that takes set of all strings over {0,1} and produces capital 'A' as output if input ends with '10' or produces 'B' as output if input ends with '11' otherwise produces 'C'.