#include <stdio.h>

int main()
{
    int Mat_num[3][5] = {{0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}, {10, 11, 12, 13, 14}};
    
    for (int lin = 0; lin < 3; lin++){
        for (int col = 0; col < 5; col++){
            printf("%02d ", Mat_num[lin][col]);
        }
        printf("\n");
    }
    return 0;
}