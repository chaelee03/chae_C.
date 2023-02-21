//
//  main.c
//  main project
//
//  Created by may Lee on 2023/02/02.
//2월 2일 과제

#include <stdio.h>

int main(void)
{
    
   //6장 과제
    
    //1번
    
   /* for(int i=0;i<7;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }*/
    //1번 입력받기
   /* int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }*/
    
    //2번
    /*
    for(int i=0;i<7;i++)
    {
        for(int j=6;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    */
    //2번 입력받기
   /* int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        for(int j=k-1;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }*/
    
    //3번
    /*for(int i=0;i<7;i++)
    {
        for(int j=6;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }*/
    //3번 입력받기
    /*int l;
    scanf("%d",&l);
    for(int i=0;i<l;i++)
    {
        for(int j=l-1;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    */
    //4번
    //13
    
   for(int i=0;i<13;i++)
    {
        for(int j=6;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1&&i<7;k++)
            //별을 홀수로 출력해야하기 때문에
        {
            printf("*");
            
        }
        printf("\n");
    }
   
    //5번
    
  
    //달력 답 확인 해 보기
    return 0;
}


