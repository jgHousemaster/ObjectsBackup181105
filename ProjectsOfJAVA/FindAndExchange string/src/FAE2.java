import java.util.Arrays;

//���������Ԫ�أ�����ָ���ַ���λ�ò��滻Ϊָ���ַ������ԭ������滻���顣
public class FAE2 {
	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
		String strA=new String("Tom is a boy.");
		
		
		{
			System.out.println("ԭ����Ϊ:");
			System.out.println(strA+" ");
		}
		
		int numA=strA.indexOf("boy");
		String strB=strA.substring(numA, strA.length()-1);
		String copystrB=strB.replace("boy", "girl");
		
		{
			System.out.println("�滻������Ϊ:");
			System.out.println(strA.substring(0, numA)+copystrB+strA.substring(numA+strB.length(), strA.length()));
		}
	}

}
