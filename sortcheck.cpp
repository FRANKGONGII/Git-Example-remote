#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//int main(void)
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("your storing sort is small");
//	}
//	else if(*p == 0)
//	{
//		printf("your storing sort is big");
//	}
//	return 0;
//}

// putting these codes in a function will be better

//int checksort(void)
//{
//	int a = 0;
//	char* p = (char*)&a;//we can even make it "return *(char*)&a"
//	return *p;
//}
//
//int main(void)
//{
//	int ret = checksort();
//	if (ret == 1)
//	{
//		printf("small");
//	}
//	else if (ret == 0)
//	{
//		printf("big");
//	}
//	return 0;
//}

int main(void)
{
	char a = -128;
	printf("%u", a);
	return 0;
}