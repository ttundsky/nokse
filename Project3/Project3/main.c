//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() 
//{
//	    int a = 0;
//		int b = 0;
//		int C = 0;
//
//		scanf("%d %d", &a, &b);
//
//			C = a + b;
//
//			printf("%d", C);
//
//			return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//
//int main()
//{
//	float t;
//		int n;
//
//		scanf("%f %d", &t, &n);
//		printf("%.3f\n%d", t / n, 2 * n);
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	char a;
//	//  scanf("%c",&a);
//	a = getchar();
//	printf("%c", a - 32);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int i;
//
//	printf("请输入您的年龄：");
//	scanf_s("%d", &i);
//
//	if (i >= 18)
//	{
//		printf("欢迎来到，英雄联盟\n");
//	}
//	else
//	{
//		printf("请滚去玩原神");
//	}
//
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a, b, c, d, e, f;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	
//	if (b > d && b<60 && d<60)
//	{
//		f = (60 - b) + d;
//		e = c - a - 1;
//
//	}
//	else
//	{
//		f = d - b;
//		e = c - a;
//	}
//	printf("%d %d",e,f);
//
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<math.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int h, r;
//	double V, n,PAI=3.14;
//
//	printf("请输入桶身与底面半径:");
//	scanf_s("%d %d", &h, &r);
//
//	if (1 <= h <= 500 && 1 <= r <= 500)
//	{
//		V = PAI * r * r * h;
//		n = 20000 / V+1;
//		printf("%d",&n);
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int h, r, x, v;
//	double PI = 3.14159;
//	scanf("%d %d", &h, &r);
//	if (1 <= h <= 500 && 1 <= r <= 500)
//	{
//		v = PI * r * r * h;
//		x = 20000 / v;
//		printf("%d", (int)(x)+1);
//		return 0;
//	}
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int h = 0;
//	int r = 0;
//	int i = 0;
//	scanf("%d %d", &h, &r);
//	double v = h * r * r * 3.14;;
//	double n = 20000;
//	i = n / v + 1;
//	printf("%d", i);
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    if ((a % 2 == 0) && (a > 4 && a <= 12))
//        printf("1 ");
//    else
//        printf("0 ");
//    if ((a % 2 == 0) || (a > 4 && a <= 12))
//        printf("1 ");
//    else
//        printf("0 ");
//    if ((a % 2 == 0) && (!(a > 4 && a <= 12)) || (!(a % 2 == 0)) && (a > 4 && a <= 12))
//        printf("1 ");
//    else
//        printf("0 ");
//    if ((!(a % 2 == 0)) && (!(a > 4 && a <= 12)))
//        printf("1 ");
//    else
//        printf("0 ");
//    return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int word;
//	printf("你玩原神吗,玩扣1，不玩扣2");
//	scanf("%d",&word);
//	switch (word)
//	{
//	case 1:
//		printf("原来你也玩原神");
//		break;
//	case 2:
//		printf("不玩原神导致的");
//		break;
//			
//	default:
//		printf("请输入提瓦特语言，谢谢喵");
//		break;
//	}
//
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//void swap(int* a, int* b) {
//	int c = *a;
//	*a = *b;
//	*b = c;
//}
//#include<stdio.h>
//int main()
//{
//	char string[4];
//	int a, b, c, i;
//	scanf("%d %d %d", &a, &b, &c);
//	scanf("%s", string);
//	if (a > b) {
//		swap(&a, &b);
//	}
//	if (a > c) {
//		swap(&a, &c);
//	}
//	if (b > c) {
//		swap(&b, &c);
//	}
//	for (i = 0; i < 3; i++) {
//		if (string[i] == 'A') {
//			printf("%d ", a);
//		}
//		if (string[i] == 'B') {
//			printf("%d ", b);
//		}
//		if (string[i] == 'C') {
//			printf("%d ", c);
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	int year, month;
//	printf("请输入年份和月份：");
//	scanf("%d %d", &year, &month);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//		if (month == 2) {
//			printf("29");
//		}
//		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
//			printf("31");
//		}
//		else {
//			printf("30");
//		}
//	}
//	else {
//		if (month == 2) {
//			printf("28");
//		}
//		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
//			printf("31");
//		}
//		else {
//			printf("30");
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int day = 0;
//
//	if (1 <= a)
//	{
//		scanf("%d", &a);
//		while (a!=1)
//		{
//			a = a / 2;
//			day = 1;
//			day++;
//		}
//		printf("%d", day);
//
//	}
//
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    int a, day;
//    day = 1;
//    scanf("%d", &a);
//    while (a > 1) {
//        a /= 2;
//        day++;
//    }
//    printf("%d", day);
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a,b,c,d,e,f,x,y ;
//	
//	printf("请输入abcdef\n");
//	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
//	a* x + b * y + c == 0;
//	d* x + e * y + f == 0;
//	x = (0 - c - b * (c * d / a - f) / (e - b * d / a)) / a;
//	y = (c * d / a - f) / (e - b * d / a);
//
//	printf("%d %d", x, y);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int i, j, k = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n - i; j++)
//        {
//            k++;
//            printf("%02d", k);
//        }
//        printf("\n");
//    }
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//    int i, j, n;
//    int count = 0;
//    int a[105];
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    printf("0");
//    for (i = 1; i < n; i++) {
//        count = 0;
//        for (j = 0; j < i; j++) {
//            if (a[i] > a[j])
//                count++;
//        }
//        printf(" %d", count);
//    }
//}

//#include<stdio.h>
//int n, m;
//int a[1000];
//int i, j, temp;
//int main() {
//    scanf("%d %d", &n, &m);
//    for (i = 1; i <= m; i++) {
//        scanf("%d", &temp);
//        a[temp]++;
//    }
//    for (i = 1; i < 1000; i++) {
//        if (a[i] == 0) {
//            continue;
//        }
//        for (j = 1; j <= a[i]; j++) {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int JC(int n)
//{
//	if (n == 1) {
//		return 1;
//	}
//	return n * JC(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = JC(n);
//	printf("%d", sum);
//	return 0;
//}
//
//#include<stdio.h>
//struct student
//{
//	char name[100];
//	int ch;
//	int math;
//	int en;
//};
//int main()
//{
//	int n;
//	int t = 0;
//	struct student stu[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d %d %d", stu[i].name, &(stu[i].ch), &(stu[i].math), &(stu[i].en));
//	}
//	int score[n];
//	int max = -999;
//	for (int j = 0; j < n; j++)
//	{
//		score[j] = stu[j].ch + stu[j].math + stu[j].en;
//		if (score[j] > max)
//		{
//			max = score[j];
//			t = j;
//		}
//	}
//	printf("%s %d %d %d", stu[t].name, stu[t].ch, stu[t].math, stu[t].en);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//double a, b, c, d, e, f;
//double x = 0, y = 0;
//
//int main()
//{
//	printf("请输入数据：\n");
//	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
//
//	x = (0 - c - b * (c * d / a - f) / (e - b * d / a)) / a;
//	y = (c * d / a - f) / (e - b * d / a);
//
//	printf("%d %d", x, y);
//
//
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//float t;
//int n;
//int main()
//{
//	scanf("%f %d",&t,&n);
//	printf("%.3f\n%d", t / n, n * 2);
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	printf("%c", a - 32);
//
//	return 0;
//}
//
//#include <stdio.h>
//#define PAI 3.14        
//int main()
//{
//    int r, h;
//    double v, n;
//    scanf("%d %d", &h, &r);
//    v = PAI * r * r * h;
//    n = 20000 / v;
//    if (20000 / v != (int)n)
//        n++;
//    printf("%d", (int)n);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	int i, j, k = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i; j++)
//		{
//			k++;
//			printf("%02d", k);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	
//
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[1000];
//	int j, n;
//	int i = 1;         
//	scanf("%d", &n);   
//	a[0] = n;
//	while (n > 1)
//	{
//		if (n % 2 != 0)
//		{
//			n = 3 * n + 1;
//		}
//		else
//		{
//			n = n / 2;
//		}
//		a[i] = n;
//		i++;
//	}
//	for (j = i - 1; j >= 0; j--)     
//	{
//		printf("%d ", a[j]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main() {
//    double x[3], y[3], sum;
//    for (int i = 0; i < 3; ++i) {
//        scanf("%lf%lf", &x[i], &y[i]);
//    }
//    double s1 = sqrt(pow(x[2] - x[1], 2) + pow(y[2] - y[1], 2));
//    double s2 = sqrt(pow(x[2] - x[0], 2) + pow(y[2] - y[0], 2));
//    double s3 = sqrt(pow(x[0] - x[1], 2) + pow(y[0] - y[1], 2));
//    sum = s1 + s2 + s3;
//    printf("%.2lf", sum);
//    return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}
#include<stdio.h>
int main()
{
	char string[4];
	int a, b, c, i;
	scanf("%d %d %d", &a, &b, &c);
	scanf("%s", string);
	if (a > b) {
		swap(&a, &b);
	}
	if (a > c) {
		swap(&a, &c);
	}
	if (b > c) {
		swap(&b, &c);
	}
	for (i = 0; i < 3; i++) {
		if (string[i] == 'A') {
			printf("%d ", a);
		}
		if (string[i] == 'B') {
			printf("%d ", b);
		}
		if (string[i] == 'C') {
			printf("%d ", c);
		}
	}
	return 0;
}


