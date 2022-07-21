int main()
{
    int i,j;
    char c;
    for(i=1;i<=7;i++)
    {
        c='A';
        for(j=1;j<=13;j++)
        {
            if(j>=1&&j<=8-i||j>=6+i&&j<=13)
            {
                printf("%c",c);
                if(j>=7)
                    c--;
                else
                    c++;
            }
            else{
                printf(" ");
                if(j>=7)
                    c--;
                else
                    c++;
            }

        }
        printf("\n");
    }
}
