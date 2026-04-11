//链表的模拟实现
////头插操作
//
//#include <iostream>
//using namespace std;
//const int N=1e5+10;
//
////创建
//int e[N],ne[N],h,id; 
//
////头插
//void push_front(int x)
//{
//	id++;
//	e[id]=x;
//	//先让新节点指向头结点的下一个位置
//	ne[id]=ne[h];
//	//然后让头结点指向新节点的位置
//	ne[h]=id;
//	
//}
//
////遍历链表 
//void print()
//{
//	for(int i=ne[h];i;i=ne[i])
//	{
//		cout<<e[i];
//		
//	}
//	cout<<endl;
//}
// 
//int main()
//{
//	for(int i=1;i<5;i++)
//	{
//		push_front(i);
//		print();
//	}
//	return 0;
// } 


//双链表实现尾插法 
//#include <iostream>
//using namespace std;
//
//int n;
//const int N=1e5+10;
//
//int id,e[N],ne[N],head,tail;
//
//void init()
//{
//	head=-1;
//	tail=0;
//	id=0;
//	
//}
//
//void Insert(int a)
//{
//
//	e[id]=a;
//	ne[id]=-1;
//	if(head==-1)
//	{
//		head=id;
//		tail=id;
//	}
//	else
//	{
//		ne[tail]=id;
//		tail=id;//更新尾指针 
//	}
//	
//	id++;
//}
//
//void Print()
//{
//	int link=head;
//	while(link!=-1)
//	{
//		cout<<e[link]<<" ";
//		link=ne[link];
//	}
//	cout<<endl;
//}
//int main()
//{	
//    init();
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		int x;
//		cin>>x;
//		Insert(x);
//		Print();
//	}
//	return 0;
//}


//DFS深度优先搜索 


////用链式前向星存储
//#include <iostream>
//using namespace std;
//
//
//const int N = 1e5 +10;
//
////存图
//int h[N],e[N*2],ne[N*2],id;
//int n;
//bool st[N];//标记哪些点已经访问
//void add(int a,int b)
//{
//	id++;
//	e[id]=b;
//	ne[id]=h[a];
//	h[a]=id;
//	
//	
//}
//
//void dfs(int u)
//{
//	cout<<u<<" ";
//	st[u]=true;
//	
//	//标记哪些点已经访问过
//	for(int i=h[u];i;i=ne[i])
//	{
//		int v=e[i];//孩子
//		if(!st[v])
//		{
//			dfs(v);
//		 } 
//	}
//}
//int main()
//{
//	cin>>n;
//	for(int i=1;i<n;i++)
//	{
//		int a,b;
//		cin>>a>>b;
//		add(a,b);
//		add(b,a);
//	}
//	
//	//深度优先遍历
//	dfs(1); 
//	return 0;
// } 



//用vector数组存储树

//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int N=1e5+10;
//vector<int>edges[N];
//bool st[N];
//
//void dfs(int u)
//{
//	cout<<u<<" ";
//	st[u]=true;//这个点已经访问过了
//	
//	//访问所有的孩子
//	for(auto v: edges[u])
//	{
//		if(!st[v])
//		{
//			dfs(v);
//		}
//	 } 
//}
//
//int main()
//{
//	cin>>n;
//	for(int i=1;i<n;i++)
//	{
//		int a,b;
//		cin>>a>>b;
//		edges[a].push_back(b);
//		edges[b].push_back(a);
//	}
//	return 0;
//}


//BFS宽度优先搜索

//用vector数组存树

//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//const int N =1e5+10;
//int n;
//vector<int> edges[N];//存树 
//bool st[N];//标记哪些节点被访问过了
//
// 
//void bfs()
//{
//	queue<int> q;
//	q.push(1);
//    st[1]=true;//1号节点已经被放入队列里面了 
//	
//	while(q.size())//当队列不为空时 
//	{
//		int u=q.front();//拿出队头元素
//		q.pop();//把队头元素删掉
//		cout<<u<<" ";//被访问时将这个点输出
//		
//		//把这个点的孩子全部加入到队列里面
//		for(auto v:edges[u])
//		{
//			if(!st[v])
//			{
//				//还没有进队的，将他放进队列里
//				q.push(v); 
//				//点入队之后，要把它标记为true
//				st[v]=true; 
//			}
//		 } 
//		}	
//}
//
//int main()
//{
//	//建树 
//	cin>>n;
//	for(int i=1;i<n;i++)
//	{
//		int a,b;
//		cin>>a>>b;
//	    edges[a].push_back(b);
//	    edges[b].push_back(a);
//	}
//	
//	bfs();//不需要传参，在逻辑中就可以完成遍历 
//	
//	return 0;
// } 


//用链式前向星存储树
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//const int N=1e5+10;
//
//int n;
//int h[N],e[N*2],ne[N*2],id;
//bool st[N];
//
//void add(int a,int b)
//{
//	id++;
//	e[id]=b;
//	ne[id]=h[a];
//	h[a]=id;
//}
//
//void bfs()
//{
//	queue<int>q;
//	q.push(1);
//	st[1]=true;
//	while(q.size())
//	{
//		int u=q.front();
//		q.pop();
//		cout<<u<<" ";
//		for(int i=h[u];i;i=ne[i])
//		{
//			int v=e[i];
//			if(!st[v])
//			{
//				q.push(v);
//				st[v]=true;
//			}
//		}
//	}
//	
//}
//int main()
//{
//	cin>>n;
//	for(int i=1;i<n;i++)
//	{
//		int a,b;
//		cin>>a>>b;
//		add(a,b);
//		add(b,a);
//	}
//	return 0;
// } 
//
//

//#include <iostream>
//using namespace std;
//
//const int N=1e5+10;
//int n;
//int a[N];
//
//void insert_sort()
//{
//	//依次枚举待排序的元素 
//	for(int i=2;i<=n;i++)//第一个位置默认就是有序的 
//	{
//		int key=a[i];//前面的数移动时是会覆盖a[i]，因此要提前保存
//		
//		//前面比key大的统一右移 
//		int j=i-1;
//		
//		while(j>=1&&a[j]>key) //当前面还有元素且前面的值大于key
//		{
//		a[j+1]=a[j];
//		j--; 
//	}
//	 a[j+1]=key;
//	} 
//}
//
//int main()
//{
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		cin>>a[i];
//	}
//	
//	insert_sort();
//	
//	for(int i=1;i<=n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//	return 0;
//}


//选择排序
//每次找出未排序序列中最小的元素 
//#include <iostream>
//using namespace std;
//
//const int N= 1e5+10;
//
//int n;
//int a[N];
//
//void selection_sort()
//{
//	for(int i=1;i<n;i++)//待排序区间的首位置 
//	{
//		//[i,n]的区间就是待排序的区间
//		int pos = i;
//		for(int j=i+1;j<=n;j++)//查找待排序区间最小的元素的下标 
//		{
//			if(a[j]<a[pos])
//			{
//				pos=j;
//			}
//		 } 
//		 
//		 swap(a[i],a[pos]);
//	}
//}
//
//int main()
//{
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		cin>>a[i];
//	}
//	
//	selection_sort();
//	
//	for(int i=1;i<=n;i++)
//	{
//		cout<<a[i];
//	}
//	return 0;
//}

//冒泡排序
//从前往后检查排序中的序列中相邻的两个元素
//如果前面的元素与后面的元素满足给定的排序条件，就将相邻两个元素交换

//#include <iostream>
//using namespace std;
//
//const int N =1e5+10;
//int a[N];
//int n;
//
//void Bubble_sort()
//{
//	//依次枚举待排序区间的最后一个元素
//	for(int i=n;i>1;i--)
//	{
//		//[1,i]就是待排序区间
//		//扫描待排序区间，如果逆序那就交换
//		for(int j=1;j<i;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				swap(a[j],a[j+1]);
//			}
//		 } 
//	 } 
//}
//
//int main()
//{
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		cin>>a[i];
//	}
//	
//	Bubble_sort();
//	
//	for(int i=1;i<=n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//	return 0;
// } 


//优化版
//当某一趟冒泡操作中，没有执行元素的交换操作时，整个序列就是有序的了
//没有必要再进行冒泡排序算法了
 
//void Bubble_sort()
//{
//	//依次枚举待排序区间的最后一个元素
//	for(int i=n;i>1;i--)
//	{
//		bool flag=false;
//		//[1,i]就是待排序区间
//		//扫描待排序区间，如果逆序那就交换
//		for(int j=1;j<i;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				swap(a[j],a[j+1]);
//				flag=true;
//				
//			}
//		 } 
//		 if(flag==false)
//		 {
//		 	return;//没有进入if中执行交换操作说明整个区间就已经有序了 
//		 }
//	 } 
//}


//推排序
//是指利用堆这种数据结构所设计的一种排序算法。本质上上是优化了选择排序算法
//如果将数据放入堆中，能够快速找到待排序元素中的最大值或最小值

//建堆：（升序建大根堆，降序建小更堆）
//从倒数第一个非叶子节点开始，执行向下调整的算法，直到根节点

//排序：每次将堆顶元素与堆中最后一个元素交换，堆的大小减一，然后将堆顶元素向下调整
//重复上述过程，直到堆中最后一个元素

//#include <iostream>
//using namespace std;
//
//const int N=1e5+10;
//int n;
//int a[N];
//
//void down(int parent,int len)
//{
//	int child=parent*2;//左孩子 
//    while(child<=len)//其他孩子 
//    {
//    	//找出最大的孩子 
//    	if(child+1<=len&&a[child+1]>a[child])
//    	{
//    		child++;//右孩子更大，选择右孩子 
//		}
//		
//		//如果父亲已经比孩子大，满足堆性质，停止 
//		if(a[parent]>=a[child])return;
//		
//		//否则交换父亲和孩子 
//		swap(a[parent],a[child]);
//		//继续向下调整 
//		parent=child;
//		child=parent*2;
//	}
//}
//
//void heap_sort()
//{
//	//1.建堆
//	for(int i=n/2;i>=1;i--)
//	{
//		down(i,n);//让每一个i位置的值执行向下调整算法 
//	 } 
//	 
//	 //2、排序
//	 for(int i=n;i>1;i--)//枚举堆里面最后一个元素的位置 
//	 {
//	 	swap(a[1],a[i]);//每次拿堆顶和最后一个元素交换 
//	 	down(1,i-1);//交换完后让堆顶元素减一 
//	  } 
//}
//
//int main()
//{
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		cin>>a[i];
//	}
//	
//	heap_sort();
//	
//	for(int i=1;i<=n;i++)
//	{
//		cout<<a[i];
//	}
//	return 0;
// } 



//归并排序
//无论数据有什么特性，时间复杂度都能稳定再N*logN的排序算法
//核心思想：分治思想
//主要过程：只要能分，就将整个区间从中间一分为二，先将左区间和右区间排序
//然后将两个区间合并在一起 

//void Merge(int a[],int l,int mid,int r)
//{
//	//归并a[l..mid]和a[mid+1...r] 
//	//先合并到临时数组里，再覆盖回去
//	
//	//每次归并的长度都是不固定的，所有要用malloc动态申请数组
//	int *temp=(int*)malloc((r-l+1)*sizeof(int)); 
//	//tmep=数组名=数组首元素地址=数组首字节地址
//	
//	//不断比较两个区间最小的数，把更小的放入temp数组，直到某一区间全部放完
//	
//	int i=l,j=mid+1,k=0;//i和j分别指向两个区间的开头,k变量表示数组目前放到了下标几 
//	while(i<=mid&&j<=r)//只有在两个区间都没放完时循环 
//	{
//		//每次比较两区间最小的数，把更小者放入temp 
//		if(a[i]<a[j])
//		{
//			//把a[i]放入temp
//			temp[k]=a[i];
//			i++; 
//			k++;
//		}
//		else
//		{
//			//把[j]放入temp 
//			temp[k]=a[j];
//			j++;
//			k++;
//		}
//		
//	 } 
//	 //一个区间放完后，另一区间剩余元素放到temp末尾即可 
//		while(i<=mid)//右区间放完，左区间还没放完 
//		{
//			temp[k]=a[i]; 
//			i++;
//			k++;
//		}
//		
//		while(j<=r)//右区间没放完，左区间放完 
//		{
//			temp[k]=a[j];
//			j++;
//			k++;
//		}
//	 //把数据覆盖回原来的数组
//	 for(i=l,k=0;i<=r;i++,k++)
//	 {
//	 	a[i]=temp[k];
//	 	 
//	  } 
//	  free(temp);//把放走后的空间释放掉
//}
//
//
//void MergeSort(int a[],int l,int r)
//{
//	if(l<r)//当递归只用处理一个元素时，也就是l=r，相当于递归的终止条件了 
//	{
//		int mid=(l+r)/2;//中间位置 
//		MergeSort(a,l,mid);//左区间 ，先对左区间进行排序 
//		MergeSort(a,mid+1,r);//右区间 ，再对右区间进行排序 
//		Merge(a,l,mid,r);//如果左右区间已经有序了，那只用归并他们总区间就会有序 
//		//merge的任务就是归并左右两个区间，把要操作的量传递给他，l，mid，r用来标记两个区间的左右端点 
//		
//	}
//	
// } 



//#include <iostream>
//using namespace std;
//
//const int N=1e5+10;
//int n;
//
//int a[N];
//int temp[N];
//
//void mergesort(int left,int right)
//{
//	if(left>=right) return;
//	//先一分为二
//	int mid=(left+right)>>1;
//	//[left,mid][mid+1,right]
//	//2.先让左右区间有序
//	mergesort(left,mid);
//	mergesort(mid+1,right);
//	
//	//合并两个有序数组
//	int cur1=left,cur2=mid+1,i=left;
//	//[left,mid] [mid+1,right]
//	while(cur1<=mid&&cur2<=right)
//	{
//		if(a[cur1]<=a[cur2]) temp[i++]=a[cur1++];
//		else temp[i++]=a[cur2++];
//	 } 
//	 while(cur1<=mid)temp[i++]=a[cur1++];
//	 while(cur2<=right)temp[i++]=a[cur2++];
//	 
//	 for(int j=left;j<=right;j++)
//	 {
//	 	a[j]=temp[j];
//	 }
// } 
// 
// int main()
// {
// 	cin>>n;
// 	for(int i=1;i<=n;i++) cin>>a[i];
// 	
// 	mergesort(1,n);
// 	
// 	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
// 	return 0;
// }

//快速排序


//#include <iostream>
//using namespace std;
//
//const int N=1e5+10;
//int n;
//
//int a[N];
//
////划分：任取一元素作为枢轴，将区间划分成两部分，使得左<=枢轴，右>=枢轴 // 然后递归处理左右，直到空或只剩一个
//int Partition(int a[],int left,int right)
//{
//	int pivot=a[left];//pivot变量暂存枢轴元素 
//	
//	while(left<right)//不断填坑挖坑直到l==r 
//	{
//		while(left<right&&a[right]>=pivot) right--;
//		a[left]=a[right];//找到第一个<枢轴的移动到a[1] 
//		
//		while(left<right&&a[left]<=pivot) left++;
//		a[right]=a[left];//找到第一个>枢轴的移动到a[r] 
//	}
//	a[left]=pivot;//枢轴归位，a[r]=pivot也可以 
//	return left;//返回枢轴最终位置 
//}
//
//
//
////a表示要排序的数组  l和r区间的左右端点 
//void QuickSort(int a[],int left,int right)
//                       //标记正在处理的区间（用左右端点标记） 
//{
//	if(left<right) //区间只有一个元素或为空的时候无需任何操作,区间长度大于1才需要划分和递归 
//	{
//		int i=Partition(a,left,right);//划分 
//		QuickSort(a,left,i-1);//递归左区间 
//		QuickSort(a,i+1,right);//递归右区间 
//	}
// } 
//
//
// int main()
// {
// 	cin>>n;
// 	for(int i=1;i<=n;i++) cin>>a[i];
// 	
// 	
// 	
// 	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
// 	return 0;
// }




//算法基础

//1.1 多项式输出
 



//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N,x;
//	cin>>N>>x;
//	vector<int>arr(N);
//	for(int i=0;i<N;i++)
//	{
//		cin>>arr[i];
//	}
//	
//	int l=0;
//	for(int i=0;i<N;i++)
//	{
//		if(arr[i]!=x)
//		{
//			arr[l]=arr[i];
//			l++;
//		}
//	}
//	
//	for(int i=0;i<l;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	return 0;
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N,k;
//	cin>>N>>k;
//	
//	vector<int>arr(N);
//	for(int i=0;i<N;i++)
//	{
//		cin>>arr[i];
//	}
//	
//	sort(arr.begin(),arr.end());
//	int count=0;
//	
//	for(int i=0;i<N;i++)
//	{
//		for(int j=i;j<N;j++)
//		{
//			if(arr[j]-arr[i]==k)
//			{
//			count++; 
//			}
//		}
//	}
//	
//	cout<<count;
//	return 0;
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N,k;
//	cin>>N>>k;
//	vector<int>arr(N);
//	for(int i=0;i<N;i++)
//	{
//		cin>>arr[i];
//	}
//	
//	sort(arr.begin(),arr.end());
//	
//	int l=0;
//	int r=1;
//	int ans=0;
//	
//	while(r<N)
//	{
//		int diff=arr[r]-arr[l];
//		if(diff>k)
//		{
//			l++;
//		}
//		else if(diff<k)
//		{
//			r++;
//		}
//		else 
//		{
//			ans++;
//			r++;
//			l++;
//		}
//		
//		if(l==r) r++;
//		
//	}
//	
//	cout<<ans<<endl;
//	return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin>>N;
//	
//	vector<long long>dp(N+1);
//	dp[1]=1;
//	dp[2]=2;
//	
//	for(int i=3;i<=N;i++)
//	{
//		dp[i]=dp[i-1]+dp[i-2];
//	}
//	
//	cout<<dp[N];
//	return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	int q;
//	cin>>n>>q;
//	
//	vector<int>a(n+1);
//	vector<int>pre(n+1);
//	
//	for(int i=1;i<=n;i++)
//	{
//		cin>>a[i];
//		pre[i]=pre[i-1]+a[i];
//	}
//	
//	while(q--){
//		int l,r;
//		cin>>l>>r;
//		
//		cout<<pre[r]-pre[l-1]<<endl;
//	}
//	
//	
//	return 0;
//}


//#include <iostream>
//#include <vector> 
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n,k;
//	cin>>n>>k;
//	vector<int>arr(n);
//	int mx=0; //记录可切除木块的最大长度
//	for(int i=0;i<n;i++)
//	{
//		cin>>arr[i];
//		mx=max(mx,arr[i]);
//	}
//	
//	
//	
//	int l=1;
//	int r=mx;
//	int ans=0;
//	
//	while(l<=r)
//	{
//		int mid=(l+r)/2;
//		long long sum=0;
//		
//		for(int i=0;i<n;i++)
//		{
//			sum+=arr[i]/mid;
//		}
//		
//		if(sum>=k){
//			ans=mid;
//			l=mid+1;
//		}else{
//			r=mid-1;
//		}
//	}
//	
//	cout<<ans;
//	
//	
//	return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N,q;
//	cin>>N>>q;
//	vector<long long>arr(N+1);
//	vector<long long>pre(N+1);
//	for(int i=1;i<=N;i++)
//	{
//		cin>>arr[i];
//		pre[i]=pre[i-1]+arr[i];
//	}
//	
//	
//	
//	while(q--){
//		int l,r;
//		cin>>l,r;
//		cout<<pre[r]-pre[l-1]<<endl;
//	}
//	return 0;
// } 


#include <iostream>
#include <vector>
using namespace std;

struct Node{
	int start;
	int end;
};

bool cmp(Node a,Node b)
{
	return a.end<b.end;
}

int main()
{
	int n;
	cin>>n;
	vector<Node>arr(N);
	for(int i=0;i<N;i++)
	{
		cin>>arr[i].start>>arr[i].end;
	}
	
	sort(a.begin(),b.begin(),cmp);
	
	int ans=0;
	int last_end=0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i].start>=last_end){
			ans++;
			last_end=arr[i].end;
		}
	}
	
	cout<<ans;
	
	return 0;
}







