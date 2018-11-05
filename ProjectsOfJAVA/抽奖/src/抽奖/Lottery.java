package 抽奖;

import java.util.Random;

public class Lottery {
/******************************************************************/
	public static void MENU()
	{
		System.out.println("\n"+"\t\t欢迎使用ABC抽奖系统！\n");
		System.out.println("\t\t抽奖开始......\n");
	}
	
/******************************************************************/	
	public static void RANDOM()
	{
//		int R=(1+(int)Math.random()*99);
		Random rand=new Random();
		int R=rand.nextInt(99)+1;
		int WHOLE=100;
		System.out.println("\t\t"+"您抽到的号码为:"+R+"\n");
		if(R>0&&R<=0.05*WHOLE)
			System.out.println("\t\t恭喜你获得一等奖！");
		else if(R>0.05*WHOLE&&R<=(0.1+0.05)*WHOLE)
			System.out.println("\t\t恭喜你获得二等奖！");
		else if(R>(0.1+0.05)*WHOLE&&R<=(0.2+0.1+0.05)*WHOLE)
			System.out.println("\t\t恭喜你获得三等奖！");
		else
			System.out.println("\t\t感谢您的参与。");
	}	
	
/******************************************************************/	
	public static void main(String[] args) {
		Lottery LT=new Lottery();
		LT.MENU();
		LT.RANDOM();
		System.out.println("\n\n\t\t欢迎使用本抽奖系统，欢迎再次使用！\n\n\n\n\n");
	}

}
