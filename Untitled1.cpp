//#include<iostream>
//using namespace std;
//
////范围for语法
////for（类型 变量名 ： 数组名） 
////语句：多条语句需要加大括号 
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	//范围for无法改变初始内容 
////    for(int a: arr)
////    {
////    	e=-1;
////	}
//
//	for(int a:arr)
//	{
//		cout<<a<<" ";
//	}
//	cout<<endl;
//	return 0;
// } 

//auto关键字 
//#include <iostream>
//using namespace std;
//int main()
//{
//	auto a =3.14;
//	auto b =100;
//	auto c ='x';
//	
//	cout<<a<<endl;
//	cout<<b<<endl;
//	cout<<c<<endl;
//	return 0;
//}


//memset（内存设置） 设置数组内容 
//memset是用来设置内存的，将内存中的值以字节为单位设置成想要的内容，需要头文件<cstring> 
//#include <iostream>
//#include <cstring>
//using namespace std;
//int main()
//{
//	char arr[]="hello world";
//	
//	memset(arr+2,'x',5);
//	cout<<arr<<endl;
//	return 0;
//}


//#include <iostream>
//#include <cstring>
//using namespace std;
//int main()
//{
//	int arr[5]={1,2,3,4,5};
//	memset(arr,0,20);
//	for(int e:arr)
//	{
//		cout<<e<<" ";
//	}
//	cout<<endl;
//	return 0;
//}

//memcpy(memory copy内存拷贝)拷贝数组内容
// #include <iostream>
//#include <cstring>
//using namespace std;
//int main()
//{
//	
//	int a[10]={1,2,3,4,5,6,7,8,9,10};
//	int b[10]={0};
//	
//		for(int e: b)
//	{
//		cout<<e<<" ";
//	}
//	cout<<endl;
//	
//	memcpy(b,a,10*sizeof(int));
//	
//	for(int e: b)
//	{
//		cout<<e<<" ";
//	}
//	cout<<endl;
//	//b=a;//数组名是地址，地址是常量的值
//	 
//		return 0;
// } 

//字符数组 
// #include <iostream>
//#include <cstring>
//using namespace std;
//int main()
//{
//	char ch1[10]="abcdef";
//	return 0;
// } 














































































