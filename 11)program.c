int main()
{
    int i,j;
    int  c='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                printf("%c",c);
                if(j>=5)
                    c--;
                else
                    c++;
            }
            else{
                printf(" ");
            }
        }
        c='A';
        printf("\n");
    }
}
