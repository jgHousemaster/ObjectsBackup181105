package �齱;

import java.util.Random;

public class Lottery {
/******************************************************************/
	public static void MENU()
	{
		System.out.println("\n"+"\t\t��ӭʹ��ABC�齱ϵͳ��\n");
		System.out.println("\t\t�齱��ʼ......\n");
	}
	
/******************************************************************/	
	public static void RANDOM()
	{
//		int R=(1+(int)Math.random()*99);
		Random rand=new Random();
		int R=rand.nextInt(99)+1;
		int WHOLE=100;
		System.out.println("\t\t"+"���鵽�ĺ���Ϊ:"+R+"\n");
		if(R>0&&R<=0.05*WHOLE)
			System.out.println("\t\t��ϲ����һ�Ƚ���");
		else if(R>0.05*WHOLE&&R<=(0.1+0.05)*WHOLE)
			System.out.println("\t\t��ϲ���ö��Ƚ���");
		else if(R>(0.1+0.05)*WHOLE&&R<=(0.2+0.1+0.05)*WHOLE)
			System.out.println("\t\t��ϲ�������Ƚ���");
		else
			System.out.println("\t\t��л���Ĳ��롣");
	}	
	
/******************************************************************/	
	public static void main(String[] args) {
		Lottery LT=new Lottery();
		LT.MENU();
		LT.RANDOM();
		System.out.println("\n\n\t\t��ӭʹ�ñ��齱ϵͳ����ӭ�ٴ�ʹ�ã�\n\n\n\n\n");
	}

}
