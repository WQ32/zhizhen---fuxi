#include <stdio.h>

// ָ�����ָ�룬ͨ��ָ���Ǵ���ڴ��ַ��ָ�����
// һ��ָ������Ĵ�С��4���ֽڣ�32λ������
// ָ�붨�巽ʽ�� type + *           //  char *pc

////��ʾʵ��
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);        // 000000790FF7F724
//	printf("%p\n", pc);        // 000000790FF7F724
//	printf("%p\n", pc + 1);    // 000000790FF7F725  pc���ַ�ָ�룬ռ1���ֽ�
//	printf("%p\n", pi);        // 000000790FF7F724
//	printf("%p\n", pi + 1);    // 000000790FF7F728  pi������ָ�룬ռ4���ֽ�
//	//ע��ָ������;�����ָ����ǰ���������һ���ж�󣨾��룩
//	return 0;
//}

//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;
//	//ֻ��һ���ֽڱ��0
//	*pi = 0;
//	//�ĸ��ֽڶ����0
//	return 0;
//}

// ע��ֻҪָ������;����ˣ� char* ��ָ������þ�ֻ�ܷ���һ���ֽڣ�
// �� int* ��ָ��Ľ����þ��ܷ����ĸ��ֽ�

//Ұָ��   - Ұָ�����ָ��ָ���λ���ǲ���֪��
//1.ָ��δ��ʼ��
//2.ָ��Խ�����
//3.ָ��ָ��Ŀռ��ͷ�

//// 1.
//
//int main()
//{
//	int* p;  //�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;
//	return 0;
//}

//// 2.
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		*(p++) = i;
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//	}
//	return 0;
//}

// ��ι��Ұָ��
// 1.ָ���ʼ��
// 2.С��ָ��Խ��
// 3.ָ��ָ��ռ��ͷż�ʹ��NULL
// 4.���ⷵ�ؾֲ������ĵ�ַ
// 5.ָ��ʹ��֮ǰ�����Ч��

//ָ�������

//1.ָ��+-����




//2.ָ��-ָ��





//3.ָ��Ĺ�ϵ����
//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ����ǲ�������
//ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽϡ�



// ָ�������
//��������������Ԫ�صĵ�ַ��һ����
//��������ʾ������Ԫ�صĵ�ַ������ sizeof(������) �� &������

//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	//������ͬ
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr;  //p���������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p   p+%d = %p\n",i, &arr[i], i,p + i);
//		printf("arr[%d] = %d\n", i, *(p + i));
//	}
//	return 0;
//}

////����ָ��
////���ڴ��ָ�������ָ������Ǳ������Ǳ������е�ַ��
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	printf("a = %d\n", a);
//	printf("*p = %d\n", *p);
//	printf("**pp = %d\n", **pp);
//	printf("&a = %p\n", p);
//	printf("&a = %p\n", *pp);
//	printf("&p = %p\n", pp);
//	return 0;
//}

//ָ������
// �����飬�Ǵ��ָ�������
// �磺int* arr3[5]    ��һ�����飬5��Ԫ��ÿ��Ԫ�ص����Ͷ��� int*

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];     // pָ��arr�����±�Ϊ9��λ��
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p++;    // Խ��
//	//}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);  // 10 8 6 4 2
//		p -= 2;   
//	}
//	return 0;
//}

//ָ��������

//int main()
//{
//	char ch[5] = {0};
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[0] - &arr[9]);      //  -9
//	printf("%d\n", &arr[9] - &arr[0]);      //  9
//	// �������������ָ����Ԫ�ظ���������������������������
//	// printf("%d\n", &arr[9] - &ch[0]);//err
//	// �������Ͳ����ݣ�û������  char���� - int����
//	return 0;
//}

//// ָ������ģ��strlen����   -���ַ�������
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != 0)
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "Eudora is Wangqi!";
//	int len = my_strlen(arr);
//	printf("%s �ĳ���Ϊ %d\n", arr, len);
//	return 0;
//}


////��ת����
//
////void Init(int arr[], int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		arr[i] = 0;
////	}
////}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// Init(arr, sz);   //��ʼ������
//	Print(arr, sz);  //��ӡ����
//	Reverse(arr, sz); //��ת����
//	Print(arr, sz);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("arr1 :");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2 :");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//		// p��short���ͣ�ÿ������2���ֽ�
//		//*(arr + i) = 0;
//		//arr��int���ͣ�ÿ������4���ֽ�
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	// pc��char���ͣ���ֵʱ������һ���ֽڵ����ݸ�ֵΪ0
//	printf("%x\n", a);
//	//����� 11223300
//	return 0;
//}


//int i;//ȫ�ֱ���-����ʼ��-Ĭ����0
//int main()
//{
//	i--;
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111    ��һ������
//	//
//	if (i > sizeof(i))//sizeof()-�������/������ռ�ڴ�Ĵ�С >=0 �޷�����
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	//9 23 8
//	return 0;
//}

// exec((v1,v2),(v3,v4),v5,v6)��ʵ�εĸ���  - ���ű��ʽ��ֻ��v2,v4,����һ��4��