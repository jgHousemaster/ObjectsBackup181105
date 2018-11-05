// DlgBoxA.cpp : 实现文件
//

#include "stdafx.h"
#include "EC.h"
#include "DlgBoxA.h"
#include "DlgBoxB.h"
#include "afxdialogex.h"


// CDlgBoxA 对话框

IMPLEMENT_DYNAMIC(CDlgBoxA, CDialogEx)

CDlgBoxA::CDlgBoxA(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgBoxA::IDD, pParent)
{

}

CDlgBoxA::~CDlgBoxA()
{
}

void CDlgBoxA::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgBoxA, CDialogEx)
	ON_BN_CLICKED(IDOK, &CDlgBoxA::OnBnClickedOk)
END_MESSAGE_MAP()


// CDlgBoxA 消息处理程序


void CDlgBoxA::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	//CDialogEx::OnOK();
	CDlgBoxB dlgB;
	CDialogEx::OnOK();
	dlgB.DoModal();
}
