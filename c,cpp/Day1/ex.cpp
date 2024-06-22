#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    float num = 0;

   // printf("Ennter a number : ");
    cout << "Enter a number : ";

    //scanf("%f", &num);
    cin >> num;

    float res = abs(num);
    //printf("res=%f\n", res);
    cout << "res = " << res;
}