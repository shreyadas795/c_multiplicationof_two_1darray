#include<stdio.h>
int main()
{
int i, cont1,cont2,arr1[25],arr2[25],res[25];
printf("enter the size of array1::");
scanf("%d",&cont1);
printf("enter the size of array2::");
scanf("%d",&cont2);
printf("enter the number for array1 ::");
for (i=0;i<cont1;i++)
{
scanf("%d",&arr1[i]);
}
printf("enter the number for array2 ::");
for (i=0;i<cont2;i++)
{
 scanf("%d",&arr2[i]);
}


printf("the result is ::");
for(i=0;i<cont1;i++)
{
res[i]=arr1[i]*arr2[i];
 printf("%d\n",res[i]);
}


return 0;

}
