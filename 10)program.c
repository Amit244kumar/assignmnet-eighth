int main()
{
    int i,j,c=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>4)
            {
                c--;
            }
            else{
                c++;
            }
            if(j>=1&&j<=5-i || j>=3+i&&j<=7)
            {
                printf("%d",c);

            }
            else{
                    printf(" ");
            }
        }
        c=0;
        printf("\n");
    }
    getch();
    return 0;
}
