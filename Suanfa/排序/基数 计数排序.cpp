//���߶�����Ͱ����
//�������򣺽���n��Ͱ����ÿ��������a[i]Ͱ�У�������ȡ��
//���������ȱȽϸ�λ������Ͱ�У�ȡ�����ٱȽ�ʮλ�����ν���
//��������
class CountingSort {
public:
	int* countingSort(int* A, int n) {
		int max;//Ͱ���������
				//�ҳ�����Ͱ
		for (int i = 0; i<n; i++)
		{
			if (A[i]>max)
				max = A[i];
		}
		int* B = new int[max + 1];//Ͱ������
								  //��ʼ��ÿһ��Ͱ
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
//��������
class RadixSort {
public:
	int* radixSort(int* A, int n) {
		// write code here
		int h = 1;
		queue<int> save[10];
		while (h<1000)
		{
			//��Ͱ
			for (int i = 0; i<n; i++)
			{
				int p = (A[i] / h) % 10;
				save[p].push(A[i]);
			}
			//��Ͱ
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
