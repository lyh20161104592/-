//
//  main.c
//  排序
//
//  Created by lyh20161104592 on 17/6/12.
//  Copyright © 2017年 lyh20161104592. All rights reserved.
//
#include <stdio.h>
int main()
{
    int a[10];
    int j,i,k;
    int temp;
    printf("请输入十个整数\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<9;j++)
    {
        for(k=0;k<9-j;k++)
        {
          if(a[k]>a[k+1])
            {
            temp=a[k];
            a[k]=a[k+1];
            a[k+1]=temp;
             }
        }
    }
        for(k=0;k<i;k++)
        {
            printf("%d ",a[k]);
        }
    
        printf("\n");
        return 0;
}
