package 加密解密;

import java.util.Random;
import java.util.Scanner;

public class LockUnlock{
	
	public static String lockunlock(String valueSTR,char Secret)			// 对value加密，secret密文字符  
	{
		byte[] bt=valueSTR.getBytes();     									// 将需要加密的内容转换为字节数组  
		for(int i=0;i<bt.length;i++)
			bt[i]=(byte)(bt[i]^(int)Secret);          						// 通过异或运算进行加密  
		return new String(bt,0,bt.length); 									// 返回加密后的字符串  
	}  
	
	public static String inputS()											//输入要加密内容
	{
		System.out.println("请输入要加密的内容:");
		Scanner ScanStrA=new Scanner(System.in);
		String StrA=ScanStrA.nextLine();
		return StrA;
	}
	
	public static char randomm()
	{
		Random rs=new Random();
		char R=(char)(rs.nextInt(79)+48);
		return R;
	}
	
	public static void main(String[] args) 
	{  
//		LockUnlock Rand=new LockUnlock();
		String Str=LockUnlock.inputS();          									// 需要加密的内容  
		char Secret=LockUnlock.randomm();                   						// 密文字符  
			System.out.println("\n原字符串为："+Str+"\n");  					// 加密  
		    String LockResult=LockUnlock.lockunlock(Str,Secret);  
		    System.out.println("加密后的值："+LockResult+"\n"); 				// 解密  
		    String UnlockResult =LockUnlock.lockunlock(LockResult,Secret);  
		    System.out.println("解密后的值："+UnlockResult+"\n");  
	}  
} 
