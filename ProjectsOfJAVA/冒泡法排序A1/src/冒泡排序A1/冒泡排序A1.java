package 冒泡排序A1;

public class 冒泡排序A1 {
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int t=0;
		int arr[]=new int[]{23,42,12,8};
		for(int i=0;i<arr.length;i++)
			for(int j=i;j<arr.length;j++)
				if(arr[i]>arr[j])
					{t=arr[i];arr[i]=arr[j];arr[j]=t;}
		for(int x=0;x<arr.length;x++)
			System.out.println(arr[x]);
	}

}
