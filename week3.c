#include <stdio.h>
#include <stdlib.h> 
// char name[20];
char n[5];
int main()
{
// printf("Enter name : ");
// gets(name);
// fgets(name, 20, stdin);
// printf("name = %s\n , name");
// fgets(n, 5, stdin);
// int i = atoi(n);
// printf("n = %s , i = %d" , n , i);
// getchar();

// puts(n);
// putchar(100);

int found = 0;
float isIn = 0.0;
char isExist = '\0' ;
fgets(n, 5, stdin);
int i = atoi(n);
int count =0;

for (int j = 0; j < i; j++)
{
    printf("%d\n" ,j);
}

// while (count < i)
// {
//     printf("%d\n" ,count);
//     count++;
// }


// if (i > 0 && i<20)
// {
//     printf("if");
// }else if (i<100 || !found && isExist)
// {
//     printf("else if\n");
// }else if (i> 'A' && i< 'z')
// {
//     printf("else if 2\n");
// }else
// {
//     printf("%d\n" , i>0 );
// }

}