// BoxYin.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "EC.h"
#include "BoxYin.h"
#include "afxdialogex.h"


// CBoxYin �Ի���

IMPLEMENT_DYNAMIC(CBoxYin, CDialogEx)

CBoxYin::CBoxYin(CWnd* pParent /*=NULL*/)
	: CDialogEx(CBoxYin::IDD, pParent)
{

}

CBoxYin::~CBoxYin()
{
}

void CBoxYin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_PROGRESS1, m_Progress);
}

BOOL CBoxYin::OnInitDialog()
{
	CDialog::OnInitDialog();
	m_Progress.SetRange(0,1000);
	m_Progress.SetStep(1);
	for(int i=0;i<1000;i++)
	{
		m_Progress.StepIt();
		m_Progress.SetTimer(1,100,NULL);
	}
	return TRUE;
}

BEGIN_MESSAGE_MAP(CBoxYin, CDialogEx)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CBoxYin ��Ϣ�������


void CBoxYin::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	//CDialogEx::OnTimer(nIDEvent);
	int position=m_Progress.OffsetPos(1);
	char s[10];
	wsprintf(s,"%d%%",position);
	CClientDC clientDC(this);
	clientDC.SetTextColor(RGB(0,0,255));
	clientDC.TextOut(200,50,s);
	CDialog::OnTimer(nIDEvent);
}
