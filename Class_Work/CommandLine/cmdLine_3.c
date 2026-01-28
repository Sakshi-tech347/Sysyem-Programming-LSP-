#include<stdio.h>

int main(int argc , char* argv[])
{
    printf("Number of Command Line argumets are : %d\n",argc);

    int i = 0;

    for ( i = 0; i < argc; i++)
    {
         printf("%s\n",argv[i]);
    }

    return 0;
}

/*
1
INPUT
        ./myexe demo first Second
OUTPUT        
        Number of Command Line argumets are : 4
        ./myexe
        demo
        first
        Second
    
case :2
        ./myexe demo first
        Number of Command Line argumets are : 3
        ./myexe
        demo
        first
*/
