#include <stdio.h>
main()
{
    int x,y,i,j,k=0;
    scanf("%d %d",&x,&y);
    for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            k++;
            printf("%d ",k);
        }
        printf("\n");
        if(k==y)
            break;
    }
    return 0;
}
