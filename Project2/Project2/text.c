//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void*e1, const void*e2)
//{
//	return (*(int *)e1 - *(int *)e2);
//}
//
//int cmp_struct_stu_byname(const void*e1, const void*e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void Swap(void*buf1, void*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char temp = *((char*)buf1+i);
//		*((char*)buf1 + i) = *((char*)buf2 + i);
//		*((char*)buf2 + i) = temp;
//	}
//}
//
//void bubble_sort(void*base, int sz, int width, int(*cmp)(void*e1, void*e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)
//				Swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
//		}
//	}
//}
//
//void text5()
//{
//	struct stu s[3] = { {"zhangsan",13},{"lisi",15},{"wangwu",32 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_stu_byname);
//	int i = 0;
//}
//
//
//int main()
//{
//
//	text5();
//	text4();
//
//	return 0;
//}

//#include<stdio.h>
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_struct_stu_byname(const void*e1, const void*e2)
//{
//	return ((struct stu*)e1)->name - ((struct stu*)e2)->name;
//}
//
//int Swap(void*buf1, void*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)      //width���ַ�����ĳ��ȣ�20�κ���������滻�ַ�
//	{
//		char temp = *((char*)buf1+i);
//		*((char*)buf1+i) = *((char*)buf2+i);
//		*((char*)buf2+i) = temp;
//	}
//}
//
//
//int bubble_sort(void*base,int sz,int width,int (*cmp)(const void*e1, const void*e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width > 0));
//			Swap((char*)base + j * width, (char*)base + (j + 1)*width,width);
//		}
//	}
//}
//
//
//void text4()
//{
//	struct stu s[3] = { {"zhangsan",17},{"lisi",23},{"wangwu",13} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_stu_byname);
//}
//
//
//int main()
//{
//	text4();
//	return 0;
//}

//����������Ԫ�ص�ַ
//1.sizeof(��������-��������ʾ��������
//2.&������  -��������ʾ��������
//����֮���������������Ԫ�ص�ַ
//ֻҪ�ǵ�ַ����С����4��8���ֽ�