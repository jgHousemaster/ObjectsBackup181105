import java.util.Arrays;

//给定数组和元素，查找指定字符的位置并替换为指定字符，输出原数组和替换数组。
public class FAE1 {
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int str1[]=new int[]{11,12,13,14,15,16,17,18,19,20};
		
		{
			System.out.println("原数组为:");
			for(int i=0;i<str1.length;i++)
				System.out.print(str1[i]+" ");
			System.out.println();
		}
		
		Arrays.sort(str1);
		int index=Arrays.binarySearch(str1, 16);
		Arrays.fill(str1,index,index+1,66);
		
		{
			System.out.println("索引位置为："+index);
			System.out.println("替换后数组为:");
			for(int i=0;i<str1.length;i++)
				System.out.print(str1[i]+" ");
			System.out.println();
		}
	}

}
