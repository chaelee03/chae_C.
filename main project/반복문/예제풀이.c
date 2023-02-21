//
//  예제풀이.c
//  main project
//
//  Created by may Lee on 2023/02/02.
//

//실행이 안 되고 1 duplicate symbol for architecture arm64 요론게 나오면
//main project 체크 박스가 한번 실행할 때 한 파일에만 체크되어있어야 해서 그런거임


#include <stdio.h>
int main(void)
{
    /*int a=1;
    while(a<=3)
    {
        
        printf("hello world\n");
        a++;
    }*/
    /*int a=1;
    int sum=0;
    while(a<=10)
    {
        sum+=a;
        a++;
    }
    printf("%d\n",sum);*/
    /*
    int a;
    int min;
    min=a;
    
    while(a>=0)
    {scanf("%d",&a);
        if(a<=min&&a>=0)
        {
            min=a;
            
        }
    }
    printf("%d",min);
     */
    
  /*  char ch1=65;
    while(65<=ch1 && ch1<=90)
    {
        printf("%c",ch1);
        ch1++;
    }
    printf("\n");
    
    char ch2='a';
    while('a'<=ch2 && ch2<='z')
    {
        printf("%c",ch2);
        ch2++;
    }
    printf("\n");
     
     */
    /*
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            printf("%d*%d=%d\n",i,j,i*j);
        }
        printf("\n");
    }*/
   
    /*int a;
    int fac=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        fac*=i;
    }
    printf("%d\n",fac);
     */
   /* int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        printf(" ");
        printf("a");
    }*/
    /*int sum1=0,sum2=0;
    for(int i=1;i<=10;i++)
    {
        if(i%2!=0)
        {
            sum1+=i;
        }
        if(i%2==0)
        {
            sum2+=i;
        }
    }
    printf("홀 합:%d\n짝 합:%d\n",sum1,sum2);
     */
    
    
 int a;
    scanf("%d",&a);
    for(int i=1;i<=31;i++)
    {
        for(int b=1;b<=a;b++)
        {
            if(i==1)
            {
                printf(" ");}
        }
        if(i<10)
        {
            printf(" ");
        }
        printf("%d",i);
        if(i%7==a-2)
        {
            printf("\n");
        }
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     
     
    return 0;
}
