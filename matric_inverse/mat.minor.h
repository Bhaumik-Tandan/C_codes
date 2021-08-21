// https://stackoverflow.com/questions/44645547/how-to-pass-2d-array-without-size-into-function-in-c
void minor_mat(int n,int m[n][n],int co[n-1][n-1],int r,int c)//m matrix cofactor pointer //r row no. c collumn no.
{
    int ri=0,ci=0;
    for(int i=0;i<n;i++)
    if(i!=r-1)
    {
        for(int j=0;j<n;j++)
        if(j!=c-1)
        co[ri][ci++]=m[i][j];
        ri++;
        ci=0;
    }    
}