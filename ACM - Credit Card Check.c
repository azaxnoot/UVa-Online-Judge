#include<stdio.h>
#include<string.h>
int main()
{
    char a[5], b[5], c[5], d[5];
    int sum , add, t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s %s %s",&a,&b,&c,&d);
        sum = 0; add=0;
        sum = sum + ((a[0]-48)*2)/10 + ((a[0]-48)*2)%10 + ((a[2]-48)*2)/10 + ((a[2]-48)*2)%10;
        sum = sum + ((b[0]-48)*2)/10 + ((b[0]-48)*2)%10 + ((b[2]-48)*2)/10 + ((b[2]-48)*2)%10;
        sum = sum + ((c[0]-48)*2)/10 + ((c[0]-48)*2)%10 + ((c[2]-48)*2)/10 + ((c[2]-48)*2)%10;
        sum = sum + ((d[0]-48)*2)/10 + ((d[0]-48)*2)%10 + ((d[2]-48)*2)/10 + ((d[2]-48)*2)%10;
        add = add + (a[1]-48) + (a[3]-48) + (b[1]-48) + (b[3]-48) + (c[1]-48) + (c[3]-48) + (d[1]-48) + (d[3]-48);

        if((sum+add)%10==0)
            printf("Valid\n");
        else
            printf("Invalid\n");

    }
    return 0;
}
