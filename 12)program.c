int main()
{
    int i,j;
    char c;
    for(i=1;i<=4;i++)
    {
        c='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
                printf("%c",c);
                if(j>=4)
                    c--;
                else
                   c++;
            }
            else{

                printf(" ");

            }
        }
        printf("\n");
    }
}
