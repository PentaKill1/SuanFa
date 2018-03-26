class MergeSort {
public:
	int* mergeSort(int* A, int n)//�տ�ʼ�ĺ��� 
	{
		int *p = new int[n];  //����һ����Aһ����С��p��ʱ�����mergeArray�л��õ�
		if (!p) return NULL;
		mergeSort(A, 0, n - 1, p);  //���
		delete[] p;
		return A;

	}
private:
	void mergeSort(int *A, int begin, int end, int *temp)    //������ֳ�����
	{
		if (begin<end)
		{
			int middle = (begin + end) / 2; //����м��λ��
			mergeSort(A, begin, middle, temp);
			mergeSort(A, middle + 1, end, temp);  //�ֱ�������ֿ��������ٷ�
			mergeArray(A, begin, end, middle, temp);//�ϲ���������
		}

	}
	void mergeArray(int *A, int begin, int end, int mid, int *temp)
	{
		int i = begin;  //������a[0,10]�е�a[0,4]��a[5,9]�ϲ�����������һ��Ԫ���±��i,j
		int j = mid + 1;
		int end1 = mid;  //�����һ��Ԫ�ظ�ֵ��end1,end2
		int end2 = end;
		int k = 0;
		while (i <= end1 && j <= end2)   //��������Ԫ�ؽ��бȽϣ�����ֵ��temp��
		{
			if (A[i]<A[j])
				temp[k++] = A[i++];
			else
				temp[k++] = A[j++];
		}
		while (i <= end1) temp[k++] = A[i++];   //�������һ��Ԫ����ʣ�࣬��˵��ʣ�µĶ��Ǵ���ˣ�ֱ�Ӹ�ֵ��temp��
		while (j <= end2) temp[k++] = A[j++];
		for (i = 0; i<k; i++) A[begin + i] = temp[i];//��temp�е����ݸ�A
	}
};
