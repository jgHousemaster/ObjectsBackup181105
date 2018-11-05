import java.util.Arrays;

//给定数组和元素，查找指定字符的位置并替换为指定字符，输出原数组和替换数组。
public class FAE2 {
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		String strA=new String("Tom is a boy.");
		
		
		{
			System.out.println("原数组为:");
			System.out.println(strA+" ");
		}
		
		int numA=strA.indexOf("boy");
		String strB=strA.substring(numA, strA.length()-1);
		String copystrB=strB.replace("boy", "girl");
		
		{
			System.out.println("替换后数组为:");
			System.out.println(strA.substring(0, numA)+copystrB+strA.substring(numA+strB.length(), strA.length()));
		}
	}

}
