//#include <stdio.h>
//#define MAXN 1000
//int main()
//{
//    int a[MAXN];
//    int N;
//    int sum = 0 ;
//    scanf("%d",&N);
//    int i;
//    for(i=0;i<N;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(i=0;i<N;i++)
//    {
//        sum = sum + a[i];
//    }
//    double average;
//    average = sum / N;
//    printf("average = %.1f",average);
//    int cnt = 0;
//    for(i=0;i<N;i++)
//    {
//        if(a[i]>=60){
//            cnt++;
//        }
//    }
//    printf("count = %d",cnt);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a[5] = { 10,20,30,40,50 };
//	printf("%p\n", &a[0]);
//	printf("%p\n", &a[1]);
//	printf("%p\n", &a[2]);
//
//}
//include <stdio.h>
//int main()
//{
//	const int size = 3;
//	int board[size][size];
//	int i,j;
//	int num0fX;
//	int num0f0;
//	int result = -1;
//	for(i=0;i<size;i++){
//		for(j=0;j<size;j++){
//			scanf("%d",&board[i][j]);
//		}
//	}
//	for
//}



//#include<stdio.h>
//
//void f(int *p);
//void g(int k);
//int main(void)
//{
//	int i = 6;
//	printf("&i=%p\n",&i);
//	f(&i);
//	g(i);
//	
//	return 0;
//}
//
//void f(int *p)
//{
//	printf("p=%p\n",p);
//	printf("*p=%d\n",*p);
//	*p=26;
//}
//void g(int k)
//{
//	printf("k=%d\n",k);
//}

//#include<stdio.h>
//int main()
//{
//int a = 10,* p;
//p = &a;
//printf("%d %d\n",a,*p);
//*p = 10;
//printf("%d %d\n",a,*p);
//scanf_s("%d",&a);
//printf("%d %d\n",a,*p);
//(*p)++;
//printf("%d %d\n",a,*p);
//return 0;
// } 


//#include <stdio.h>
//int main()
//{
//	float x, y;
//	x = 5.2;
//	y = 4.2;
//
//	int a, b;
//	a = 2;
//	b = 3;
//	
//	b = (int)y;
//	x = a;
//	printf("b=%d,x=%f",b,x);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char ac[] = {0,1,2,3,4,5,6,7,8,9,};
//	char *p = ac;
//	char *p1 = &ac[5];
//	printf("p = %p\n",p);
//	printf("p+1 = %p\n",p+1);
//	printf("p1-p=%d\n",p1-p);
//
//	int ai[] = {0,1,2,3,4,5,6,7,8,9,};
//	int *q = ai;
//	int *q1 = &ai[6];
//	printf("q = %p\n",q);
//	printf("q+1 = %p\n",q+1);
//	printf("q1-q=%d\n",q1-q);
//		return 0;
// } 

//#include<stdio.h>
//int main()
//{
//	int i;
//  while(i<= 5){
//  	if(i!=3){
//  		printf(" ");
//	  }else{
//  	printf("*");
//  }
//  i++;
//  }
//  
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int m,n;
//    scanf("%d %d",&m,&n);
//    int sum = 0;
//    int i;
//    for(i=m+1;i<n;i++)
//    {
//        sum = sum + i;
//    }
//    printf("sum = %d",sum);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i,letter=0,blank=0,digit=0,other=0;
//    char ch;
//    for(i=1;i<=10;i++)
//    {
//        ch = getchar();
//        if ((ch>='a'&&ch<='z')||(ch>= 'A'&&ch<='Z'))
//        {
//            letter++;
//         }else if(ch==' '||ch=='\n'){
//            blank++;
//         }else if(ch>='0'&&ch<='9'){
//            digit ++;
//         }else{
//            other++;
//         }
//    }
//    printf("letter = %d,blank = %d,digit = %d,other = %d",letter,blank,digit,other);
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d",&a);
//    if(a>=90&&a<=100){
//        pritnf("A");
//    }else if(a>=80&&a<=90){
//        printf("B");
//    }else if(a>=70&&a<=80){
//        printf("C");
//    }else if(a>=60&&a<=70){
//        pritnf("D");
//    }else{
//        printf("E");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("[1] apple");
//    printf("[2] pear");
//    printf("[3] orange");
//    printf("[4] grape");
//    printf("[0] exit");
//    int i,j;
//    double price;
//    for(i=1;i<=5;i++)
//    {
//        scanf("%d",&j);
//        if(j==0)
//            break;
//        switch(j){
//            case 1:price = 3.00;break;
//            case 2:price = 2.50;break;
//            case 3:price = 4.10;break;
//            case 4:price = 10.20;break;
//            default:price = 0.00;break;
//    }
//        printf("price = %.2f\n",price);
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//  int i,j,n;
//  int arr1[] = {2,1,0,1,2};
//  int arr2[] = {1,3,5,3,1};
//  for(i=0;i<5;i++)
//  {
//  	for(j=0;j<arr1[i];j++)
//	  {
//  		printf(" ");
//  	}
//  for(n=0;n<arr2[i];n++)
//  {
//  	printf("*");
//  	 
//  }
//  printf("\n");
//
//}
//  
//  return 0;
//   } 
// 

#include <stdio.h>
int main()
{
	int age;
	scanf("%d",&age);
	if(age<=13){
		printf("you are a child");
	}else if(age>13 && age<19){
		printf("you are a teenager");
	}else if(age>20 && age<64){
		printf("you are an adult");
	}else{
		printf("you are a senior citezen");
	}
	return 0;
 } 















