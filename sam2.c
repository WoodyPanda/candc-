#include <stdio.h>
#include <malloc.h>
int fun1(int *a,int n,int last,int k,int nlast)
{
	int i;
	for (i=0;i<n;i++)
		if (a[i]>=(-k)&&a[i]<=k)
			last=a[i];
	return last; 	
}
int fun2(int *array,int l,int last2,int m,int nlast2)
{
	int j;
	for (j=0;j<l;j++)
		if (array[j]>=(-m)&&array[j]<=m)
			nlast2=j;
	return nlast2;
}
int main ()
{
	int mk,s,i;
	int mlast,mnum;
	int *p;
	printf ("Введите размер массива\n");
	scanf ("%d",&s);
	p=(int*)malloc(sizeof(int)*s);
	for (i=0;i<s;i++)
	{
		printf("Введите элемент массива\n");
		scanf("%d",&p[i]);
	}
	printf("Введите границу диапазона значений\n");
	scanf ("%d",&mk);
	mlast=fun1(p,s,mlast,mk,mnum);
	mnum=fun2(p,s,mlast,mk,mnum);
	printf("последний элемент данного массива в данном диапазоне: %d\n",mlast);
	printf("номер последнего элемента: %d\n",mnum+1);
	free (p);
	return 0;
}
