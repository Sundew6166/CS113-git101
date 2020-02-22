#include <stdio.h>
// void addTen(int *number, int n) *number = referent  n = value
void addTen(int *number, int n)
{
    for (int i = 0; i < n ; i++)
    {
        printf("number + %d addr = %p, %d\n" , i, number + i, *(number+i)); //number เป็น address
        *(number + i) += 10; // ถ้าเติม * จะเป็นการไปดึงค่าใน address นั้นมา
    } 
}
int addTwenty(int *n)
{
    *n +=20; //ถ้าใส่ * จะส่งค่ากลับมา เป็น 26 แต่ถ้าไม่ใส่จะเป็น 6
    return 1;

}

int main()
{
    int number[] = {5, 6, 7, 8, 9, 0};
    int n = 6;
    // int *ptr = &n; //เป็นการชี้ pointer ที่ n
    // int *ptr = n; // pointerเก็บค่า n
    int *ptr = 0;
    addTen(&number[0] ,n); 
    for (int i = 0; i < 6 ; i++)
    {
        printf("number[%d] = %d\n" ,i ,number[i]);
    }
    addTwenty(&n); //ส่งค่าไป addTwenty ในวงเล็บจะลงpointer (ptr) เป็นการส่ง addressไป ไปก็ได้ (*ptr) จะส่งค่า 6 ไป
    printf("n = %d\n", n); // ปริ้น 26
    printf("%d" ,ptr); // จะปริ้น 0
}