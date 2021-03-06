//两者都基于桶排序
//计数排序：建立n个桶，把每个数放入a[i]桶中，再依次取出
//基数排序：先比较个位，放入桶中，取出，再比较十位，依次进行
//计数排序
class CountingSort {
public:
	int* countingSort(int* A, int n) {
		int max;//桶的最大数量
				//找出最大的桶
		for (int i = 0; i<n; i++)
		{
			if (A[i]>max)
				max = A[i];
		}
		int* B = new int[max + 1];//桶的数量
								  //初始化每一个桶
		for (int i = 0; i<max + 1; i++)
			B[i] = 0;
		for (int i = 0; i<n; i++)
			B[A[i]]++;
		int l = 0;
		for (int i = 0; i<max + 1; i++)
		{
			while (B[i]>0)
			{
				A[l] = i;
				B[i]--;
				l++;
			}
		}
		delete[] B;
		return A;
	}
};
//基数排序
class RadixSort {
public:
	int* radixSort(int* A, int n) {
		// write code here
		int h = 1;
		queue<int> save[10];
		while (h<1000)
		{
			//入桶
			for (int i = 0; i<n; i++)
			{
				int p = (A[i] / h) % 10;
				save[p].push(A[i]);
			}
			//出桶
			int m = 0;
			for (int i = 0; i<10; i++)
			{
				while (!save[i].empty())
				{
					A[m++] = save[i].front();
					save[i].pop();
				}
			}
			h = h * 10;
		}
		return A;
	}
};
