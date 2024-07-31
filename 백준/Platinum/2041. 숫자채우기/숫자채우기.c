n,m,c,i,j,b;main(u)
{
    scanf("%d %d",&n,&m);
    c=(m-1)*n+1;
    for(i=0;i<n;i++)
    {
        printf("%d ",u);
        b=u;
        for(j = 1; j < m; j++)
        {
            b+=i+1+(j-1)*n;
            printf("%d ",b);
        }
        u+=c+i*m;
        printf("\n");
    }
}