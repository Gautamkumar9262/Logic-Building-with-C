main(){
    int i,j,lines,k;
    printf("Enter number of line you want to print: ");
    scanf("%d",&lines);

    for(i=1;i<=lines;i++)
    {
        k=1;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i && j<=lines-1+i)
            {
             printf("%2d",k);
            if(j<lines)
            k++;
        else
        k--;

            }

            else printf("  ");
        }
        printf("\n");
    }

}