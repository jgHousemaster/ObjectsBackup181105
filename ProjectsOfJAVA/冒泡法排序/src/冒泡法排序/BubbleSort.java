package √∞≈›∑®≈≈–Ú;

public class BubbleSort {
	public static void main(String[] args) {
		int strA[]={56,23,57,90,11,43,9};
		BubbleSort BS=new BubbleSort();
/**********************************************************/		
		for(int i=0;i<strA.length;i++)
			for(int j=0;j<strA.length;j++)
			{
				if(strA[i]<strA[j])
					{
						int temp=strA[i];
						strA[i]=strA[j];
						strA[j]=temp;
					}
			}
/**********************************************************/
		System.out.println("≈≈–Ú∫ÛÀ≥–ÚŒ™:");
		for(int i=0;i<strA.length-1;i++)
			System.out.print(strA[i]+"<");
			System.out.print(strA[strA.length-1]);
	}
}
