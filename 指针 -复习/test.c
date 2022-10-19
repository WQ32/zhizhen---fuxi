#include <stdio.h>

// 指针就是指针，通常指的是存放内存地址的指针变量
// 一个指针变量的大小是4个字节（32位机器）
// 指针定义方式： type + *           //  char *pc

////演示实例
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);        // 000000790FF7F724
//	printf("%p\n", pc);        // 000000790FF7F724
//	printf("%p\n", pc + 1);    // 000000790FF7F725  pc是字符指针，占1个字节
//	printf("%p\n", pi);        // 000000790FF7F724
//	printf("%p\n", pi + 1);    // 000000790FF7F728  pi是整型指针，占4个字节
//	//注：指针的类型决定了指针向前或者向后走一步有多大（距离）
//	return 0;
//}

//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;
//	//只有一个字节变成0
//	*pi = 0;
//	//四个字节都变成0
//	return 0;
//}

// 注：只要指针的类型决定了， char* 的指针解引用就只能访问一个字节，
// 而 int* 的指针的解引用就能访问四个字节

//野指针   - 野指针就是指针指向的位置是不可知的
//1.指针未初始化
//2.指针越界访问
//3.指针指向的空间释放

//// 1.
//
//int main()
//{
//	int* p;  //局部变量指针未初始化，默认为随机值
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
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//	}
//	return 0;
//}

// 如何规避野指针
// 1.指针初始化
// 2.小心指针越界
// 3.指针指向空间释放即使置NULL
// 4.避免返回局部变量的地址
// 5.指针使用之前检查有效性

//指针的运算

//1.指针+-整数




//2.指针-指针





//3.指针的关系运算
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与
//指向第一个元素之前的那个内存位置的指针进行比较。



// 指针和数组
//数组名和数组首元素的地址是一样的
//数组名表示的是首元素的地址，除了 sizeof(数组名) 和 &数组名

//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	//两者相同
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr;  //p存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p   p+%d = %p\n",i, &arr[i], i,p + i);
//		printf("arr[%d] = %d\n", i, *(p + i));
//	}
//	return 0;
//}

////二级指针
////用于存放指针变量（指针变量是变量，是变量就有地址）
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

//指针数组
// 是数组，是存放指针的数组
// 如：int* arr3[5]    是一个数组，5个元素每个元素的类型都是 int*

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];     // p指向arr数组下标为9的位置
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p++;    // 越界
//	//}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);  // 10 8 6 4 2
//		p -= 2;   
//	}
//	return 0;
//}

//指针间的运算

//int main()
//{
//	char ch[5] = {0};
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[0] - &arr[9]);      //  -9
//	printf("%d\n", &arr[9] - &arr[0]);      //  9
//	// 这里求的是两个指针间的元素个数，包括被减数，不包括减数
//	// printf("%d\n", &arr[9] - &ch[0]);//err
//	// 两个类型不兼容，没有意义  char类型 - int类型
//	return 0;
//}

//// 指针运算模拟strlen函数   -求字符串长度
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
//	printf("%s 的长度为 %d\n", arr, len);
//	return 0;
//}


////翻转数组
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
//	// Init(arr, sz);   //初始化数组
//	Print(arr, sz);  //打印数组
//	Reverse(arr, sz); //翻转数组
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
//		// p是short类型，每次跳过2个字节
//		//*(arr + i) = 0;
//		//arr是int类型，每次跳过4个字节
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
//	// pc是char类型，赋值时，将第一个字节的内容赋值为0
//	printf("%x\n", a);
//	//结果： 11223300
//	return 0;
//}


//int i;//全局变量-不初始化-默认是0
//int main()
//{
//	i--;
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111    是一个正数
//	//
//	if (i > sizeof(i))//sizeof()-计算变量/类型所占内存的大小 >=0 无符号数
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

// exec((v1,v2),(v3,v4),v5,v6)的实参的个数  - 逗号表达式，只看v2,v4,所以一共4个