int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {

        for(j=1;j<=9;j++)
        {
            if(i==5||6-i==j||4+i==j)
            {

              printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
