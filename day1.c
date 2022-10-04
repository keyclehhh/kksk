#include<stdio.h>
#include<string.h>
//
//
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0 ')
	{
		count++;
		str++;
	}

	return count;
}
int main()
{
	char arr[] = "bbb";
	int len = my_strlen(arr);
	printf(" len = %d\n", len);
	return 0;
}