// DlgBoxB.cpp : 实现文件
//

#include "stdafx.h"
#include "EC.h"
#include "DlgBoxB.h"
#include "BoxYin.h"
#include "afxdialogex.h"


// CDlgBoxB 对话框

IMPLEMENT_DYNAMIC(CDlgBoxB, CDialogEx)

CDlgBoxB::CDlgBoxB(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgBoxB::IDD, pParent)
	, m_strBoxB(_T(""))
{

}

CDlgBoxB::~CDlgBoxB()
{
}

void CDlgBoxB::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_BOXEDIT, m_strBoxB);
}


BEGIN_MESSAGE_MAP(CDlgBoxB, CDialogEx)
	ON_BN_CLICKED(IDOK, &CDlgBoxB::OnBnClickedOk)
END_MESSAGE_MAP()


// CDlgBoxB 消息处理程序


void CDlgBoxB::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
	if(m_strBoxB == "z"||m_strBoxB == "Z")
		AfxMessageBox("张广辉和赵延林吃瘪。");
	else if(m_strBoxB == "y"||m_strBoxB == "Y")
		AfxMessageBox("羊心瓶吃瘪。");
	else if(m_strBoxB == "w"||m_strBoxB == "W")
		AfxMessageBox("王海涛吃瘪。");
	else if(m_strBoxB == "y"||m_strBoxB == "Y")
		AfxMessageBox("于立源吃瘪。");
	else if(m_strBoxB == "b"||m_strBoxB == "B")
	{
		AfxMessageBox("比较好吃瘪。");
		AfxMessageBox("祝老毕与心雨百年好合，万事如意!");
	}
	else if(m_strBoxB == "yin"||m_strBoxB == "Yin")
	{
		CBoxYin box;
		box.DoModal();
	}
}
