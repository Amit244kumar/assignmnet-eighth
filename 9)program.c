int main()
{
    int i,j,c=0;
    for(i=1;i<=4;i++)
    {
        c=0;
        for(j=1;j<=7;j++)
        {
           if(j>=i&&j<=8-i)
           {
              if(j>4)
                  c--;
              else
                  c++;
              printf("%d",c);
           }else{
            printf(" ");
           }
        }
        printf("\n");
    }
    getch();
    return 0;
}
