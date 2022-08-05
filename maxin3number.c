  #include<stdio.h>
  #include<stdlib.h>
  int main()
  {
    int a,b,c;
    printf("Enter a,b and c value=");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c) puts("All are equal");
    else if(a>b && a>c) printf("a is big");
    else if(b>c) printf("b is big");
    else puts("c is big");
    
  } 