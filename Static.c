#include<stdio.h>

void Display()
{
    int i = 10;
    static int j = 10;

    i++;
    j++;

    printf("Value of i : %d\n",i);  // 11   11  11  11
    printf("Value of j : %d\n",j);  //  11  12  13  14
}

int main()
{
    Display();
    Display();
    Display();
    Display();

    return 0;
}