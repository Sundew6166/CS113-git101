#include <stdio.h>
#include  <stdlib.h>
int main()
{
    int x = 100;
    // printf("x = %d\n", x);
    // printf("reference of x = %lu\n", &x);
    // printf("reference of x = %p\n", &x); // & == address

    // int number[] = {7, 8, 9, 10, 11};
    // int number[100] = {7, 8, 9, 10, 11};
    // int number[5];
    // int number[300] = 200;
    // printf("index 3 = %d\n" , number[300]);
    // printf("reference index 3 = %p\n", &number[3]);
    // printf("reference index 0 = %p\n" , &number[0]); /* pointer */
    // printf("reference index 0 = %p\n", number+3); /* address +3 คือการบวก3เท่า*/

    // int *ptr = &x; /* ตอนประกาศต้องมี * ถ้าไปชี้ค่าไม่ต้องมี * */
    // int *arrPtr;
    // arrPtr = number; // &number[0] >> 7
    // arrPtr = arrPtr + 1 ; // การบวก1 คือการให้ไปชี้ใน indexที่ 1 >> 8
    // *arrPtr = *arrPtr +1 ; // * dereferncing  >> 9
    // printf("arrPtr = %p, *arrPtr = %d\n", arrPtr, *arrPtr);
    // printf("number[1] = %p, number[1] = %d\n", &number[1], number[1]);

    // &x = 50; ทำไม่ได้
    // ptr = x; // ptr = ชี้ที่ x = 100
    // *ptr = 50; // เป็นการเปลี่ยนค่า x จาก 100 เป็น 50

    // int number[] = {7, 8, 9, 10, 11};
    // char intput[50];
    // for (int *ptr = number; ptr <= &number[4]; ptr++)
    // {
    //     printf("[%p] = %d\n" , ptr ,*ptr);
    // }
    // char input[50];
    // int count = 0;
    // char c;
    // while ((c = getchar()) != '\n') // เป็นการรับ input ตั้งแต่ตัวยแรก ถึง \n
    // {
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0';
    // printf("input = %s\n", input);

    // for (char *cPtr = input; *cPtr != '\0'; cPtr++)
    // {
    //     printf("%c\n", *cPtr);
    // }
    
    int a;
    char c;
    char s[50]; // ถ้ารับเป็น array ไม่ต้องใส่ &
    
    scanf("%c-%d-%s", &c, &a, s); 
    printf("%c    %d    %s", c, a, s);

}