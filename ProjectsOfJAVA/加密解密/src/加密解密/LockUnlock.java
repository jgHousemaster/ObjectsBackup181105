package ���ܽ���;

import java.util.Random;
import java.util.Scanner;

public class LockUnlock{
	
	public static String lockunlock(String valueSTR,char Secret)			// ��value���ܣ�secret�����ַ�  
	{
		byte[] bt=valueSTR.getBytes();     									// ����Ҫ���ܵ�����ת��Ϊ�ֽ�����  
		for(int i=0;i<bt.length;i++)
			bt[i]=(byte)(bt[i]^(int)Secret);          						// ͨ�����������м���  
		return new String(bt,0,bt.length); 									// ���ؼ��ܺ���ַ���  
	}  
	
	public static String inputS()											//����Ҫ��������
	{
		System.out.println("������Ҫ���ܵ�����:");
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
		String Str=LockUnlock.inputS();          									// ��Ҫ���ܵ�����  
		char Secret=LockUnlock.randomm();                   						// �����ַ�  
			System.out.println("\nԭ�ַ���Ϊ��"+Str+"\n");  					// ����  
		    String LockResult=LockUnlock.lockunlock(Str,Secret);  
		    System.out.println("���ܺ��ֵ��"+LockResult+"\n"); 				// ����  
		    String UnlockResult =LockUnlock.lockunlock(LockResult,Secret);  
		    System.out.println("���ܺ��ֵ��"+UnlockResult+"\n");  
	}  
} 
