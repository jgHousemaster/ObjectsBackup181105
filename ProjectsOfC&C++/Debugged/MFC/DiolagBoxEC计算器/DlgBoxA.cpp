// DlgBoxA.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "EC.h"
#include "DlgBoxA.h"
#include "DlgBoxB.h"
#include "afxdialogex.h"


// CDlgBoxA �Ի���

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


// CDlgBoxA ��Ϣ�������


void CDlgBoxA::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//CDialogEx::OnOK();
	CDlgBoxB dlgB;
	CDialogEx::OnOK();
	dlgB.DoModal();
}
