#include<stdio.h>
int main()
{
    int m, n, r, i, j, k, t;
    scanf("%d%d", &m, &n);
    r = m + n, i = m, j = n;
    int a[i], b[j], c[r];
    for(i = 0; i < m; i++)
        scanf("%d", &a[i]);
    for(j = 0; j < n; j++)
        scanf("%d", &b[j]);
    i = 0, j = 0;
    for(k = 0; k < m; k++)
    {
        c[k] = a[i];
        i++;
    }
    for(k = m; k < m + n; k++)
    {
        c[k] = b[j];
        j++;
    }
    for(k = 0; k < m + n; k++)
        for(r = 0; r < m + n; r++)
            if(c[r+1] < c[r])
    		{
        		t = c[r+1];
        		c[r+1] = c[r];
        		c[r] = t;
   		    }
    for(r = 1; r <= m + n; r++)
    printf("%d ", c[r]);
    return 0;
}

