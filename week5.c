#include <stdio.h>
int addTen(int x)
{
    printf("x in addTeb  = %d\n" , x);
    x = x+10;
    return x;
}
int x =300;
int addTwenty();
int main()
{
    int x = 10;
    int y = addTen(x);
    printf("addTen in main = %d\n" , y);//y=20ในฟังก์ชันaddTen
    printf("x in main  = %d\n" , x); //x=10 
    int z = addTwenty();
    printf("addTwenty in main  = %d\n" , z); //ในฟังก์ชันaddTwenty
    printf("x in main  = %d\n" , x);
}
int addTwenty()
{
    printf("x in addTwenty= %d\n" , x);
    x = x + 20;
    return x;
}
