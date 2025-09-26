//Design a DFA that accepts all the strings containing atleast one zero over alphabet{0,1}

#include<stdio.h>

int main()
{
    char state1 = 'A'; // initial state
    char state2 = 'B'; // final
    char ps = state1;
    char input[20]; 
    printf("Enter a String: ");
    scanf("%s", input);                 
    int len = 0;
    while(input[len] != '\0')
        len++;
    
    for(int i = 0; i < len; i++)
    {
        switch(ps)
        {
            case 'A':
                if(input[i] == '0')
                    ps = state2;
                else if(input[i] == '1')
                    ps = state1;
                else
                {
                    printf("Invalid Input\n");
                    return 0;
                }
                break;
            case 'B':
                if(input[i] == '0' || input[i] == '1')
                    ps = state2;
                else
                {
                    printf("Invalid Input\n");
                    return 0;
                }
        }
    }
    if(ps == 'B')
    {
        printf("Valid String!");
    }
    else
    {
        printf("Invalid String!");
    }
}