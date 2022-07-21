int main()
{
    int i,j;
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(i>=1&&i<=3)//This is for upper three lines to print
            {
                if(j>=4-i&&j<=6+i||j>=14-i&&j<=16+i)
                {
                    printf("*");
                }
                else{
                   printf(" ");
                }
            }
            else if(i==4)//this is for the 4th line to print
            {
                if(j>=1&&j<=6 || j>=13&&j<=19)
                {
                    printf("*");
                }
                else{
                    if(j==7)
                       printf("MySirG");
                }
            }
            else//this is for last all lines to print
            {
                if(j>=i-3&&j<=23-i)
                {
                    printf("*");
                }
                else{
                   printf(" ");
                }
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
