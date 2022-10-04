#include<stdio.h>
#include<string.h>
//int key_cle(int x)
//{
//	
//	if (x <= 1)
//		return 1;
//	else
//		return x * key_cle(x - 1);
//}
//int main()
//{
//	int n = 0;//n = 10
//	int j = 0;
//	scanf_s("%d", &n);
//	j = key_cle(n);
//	printf("%d\n", j);
//	return 0;
//}
//
//

 void bubble_sort(int arr[], int sz)
{
	 int i = 0;
	 for (i = 0; i < sz - 1; i++)
		
	{
		int falg =1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				falg = 0;
			}	
		}
		if (falg == 1)
		{
			break;
		}
	}

}
int main()//冒泡函数的求法
{
	int arr[] = {9 , 8 , 7 ,6 , 5 ,4 , 3 , 2, 1 , 0 };
	int i = 0;

    int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf(" %d ", arr[i]);
	}
	return 0;
}