��ʵ��һ����������һ���ַ����еĿո��滻�ɡ� % 20�������磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe % 20Are % 20Happy��
����Ҫ����ȷ���µ��ַ����Ĵ�С
��һ�Σ��ռ临�Ӷ�ΪO��Length����ͨ������һ�����飬�ڽ����滻
�ڶ���1
class Solution {
public:
	void replaceSpace(char *str, int length) {
		int kong = 0;//�ո�ĸ���
		int old = 0;//�ַ����ĳ���
		int m = 0;
		int k = 0;
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
				kong++;
			old++;
		}
		char a[old + 2 * kong];

		while (str[m] != '\0')
		{
			if (str[m] != ' ')
				a[k++] = str[m];
			else
			{
				a[k++] = '%';
				a[k++] = '2';
				a[k++] = '0';
			}
			m++;
		}
		for (int j = 0; j<(old + 2 * kong); j++)
			str[j] = a[j];
	}
};

����������ָOffer����
���ӣ�https ://www.nowcoder.com/questionTerminal/4060ac7e3e404ad1a894ef3e17650423?orderByHotValue=1&mutiTagIds=640&page=1&onlyReference=true
��Դ��ţ����

//˼·
//1����ǰ������룬�����ƶ����Ĵ����಻����
//2���Ӻ���ǰ����

class Solution {
public:
	void replaceSpace(char *str, int length) {
		//����һ���ַ����ҳ��ո������
		if (str == NULL || length<0)
			return;
		int i = 0;
		int oldnumber = 0;//��¼��ǰ�ĳ���
		int replacenumber = 0;//��¼�ո������
		while (str[i] != '\0')
		{
			oldnumber++;
			if (str[i] == ' ')
			{
				replacenumber++;
			}
			i++;
		}
		int newlength = oldnumber + replacenumber * 2;//�����ĳ���
		if (newlength>length)//��������ĳ��ȴ����ܳ��Ⱦ��޷�����
			return;
		int pOldlength = oldnumber; //ע�ⲻҪ��һ��Ϊ���ظ���\0��ҲҪ����
		int pNewlength = newlength;
		while (pOldlength >= 0 && pNewlength>pOldlength)//���ַ�
		{
			if (str[pOldlength] == ' ') //�����ո���滻
			{
				str[pNewlength--] = '0';
				str[pNewlength--] = '2';
				str[pNewlength--] = '%';

			}
			else //���ǿո�Ͱ�pOldlengthָ����ַ�װ��pNewlengthָ���λ��
			{
				str[pNewlength--] = str[pOldlength];

			}
			pOldlength--; //������if����elsr��Ҫ��pOldlengthǰ��

		}


	}
};
