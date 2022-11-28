#include<stdio.h>
#include<assert.h>
//int main()
//{
//	int n = 10;
//	char* pc = &n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pi);
//	printf("%p\n", pi+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", &pi);
//	printf("%p\n", &pi + 1);
//	return 0;
//}
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*pc = 0;
//		pc++;
//	}
//	return 0;
//}
//模拟实现库函数strcpy
//char my_strcpy(char* arr, const char* a)
//{
//	assert(arr&& a);
//	while (*arr++ = *a++)
//		;
//	return arr;
//}
//int main()
//{
//	char arr[10] = { 0 };
//	char a[10] = { "hello" };
//	char c = my_strcpy(arr, a);
//	printf("%s", arr);
//	return 0;
//}
//模拟实现库函数strlen
//int my_strlen(const char* i)
//{
//	int count = 0;
//	assert(i != NULL);
//	while (*i != 0)
//	{
//		count++;
//		i++;
//	}
//	return count;
//}
//int main()
//{
//	char* i = "abc";
//	int ret = my_strlen(i);
//	printf("%d\n", ret);
//	return 0;
//}
int main()
{
	int a = 0x11223344;
	char* pc = &a;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*pc = 0;
		pc++;
	}
}