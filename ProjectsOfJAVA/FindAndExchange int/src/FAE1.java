import java.util.Arrays;

//���������Ԫ�أ�����ָ���ַ���λ�ò��滻Ϊָ���ַ������ԭ������滻���顣
public class FAE1 {
	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
		int str1[]=new int[]{11,12,13,14,15,16,17,18,19,20};
		
		{
			System.out.println("ԭ����Ϊ:");
			for(int i=0;i<str1.length;i++)
				System.out.print(str1[i]+" ");
			System.out.println();
		}
		
		Arrays.sort(str1);
		int index=Arrays.binarySearch(str1, 16);
		Arrays.fill(str1,index,index+1,66);
		
		{
			System.out.println("����λ��Ϊ��"+index);
			System.out.println("�滻������Ϊ:");
			for(int i=0;i<str1.length;i++)
				System.out.print(str1[i]+" ");
			System.out.println();
		}
	}

}
