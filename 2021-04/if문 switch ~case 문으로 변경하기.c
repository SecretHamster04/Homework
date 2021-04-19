#include <stdio.h>
int fie() // 함수 if else
{
    int temp;
    scanf("%d",&temp);

    if (temp == 3){
        printf("3점입니다.\n");
    }
    else if (temp == 2){
        printf("2점입니다.\n");

    }
    else {
        printf("그 외 점수입니다\n");
    }
    return 0;
}

int fsc() // 함수 switch ~case
{
    int temp2;
    scanf("%d",&temp2);
    switch (temp2){
        case 3:
            printf("3점입니다.\n");
            break;
        case 2:
            printf("2점입니다.\n");
            break;
        default:
            printf("그 외 점수입니다\n");
            break;
    }
    return 0;
}

main()
{
    fie();
    fsc();

return 0;
}
