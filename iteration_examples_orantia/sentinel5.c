#include <stdio.h>
int main(){int n,max=-9999;scanf("%d",&n);while(n!=-1){if(n>max)max=n;scanf("%d",&n);}printf("%d",max);return 0;}