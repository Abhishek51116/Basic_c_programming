#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Match stick game \nThere are a total of 21 match sticks \nYou can pick 1,2,3 or 4 match sticks in a single try and then computer will have his try\n The one to pick the last match stick will lose.\n");
    int s=21;
    int i=1;
    int ps;
    int sl;
        while(i<=4)
    {
        label:
            printf("sticks left : %d\n",s);
        printf("Pick your count\n");
        scanf("%d",&ps);
        if(ps<1||ps>4)
            {
                printf("invalid\n");
                goto label;
            }
            else
            {
                printf("computer picked %d stick(s)\n",5-ps);
                s=s-5;
                i++;
            }

    }
    printf("only one stick left. You lose.\n");

    return 0;
}
