// DlgBoxB.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "EC.h"
#include "DlgBoxB.h"
#include "BoxYin.h"
#include "afxdialogex.h"


// CDlgBoxB �Ի���

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


// CDlgBoxB ��Ϣ�������


void CDlgBoxB::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
	if(m_strBoxB == "z"||m_strBoxB == "Z")
		AfxMessageBox("�Ź�Ժ������ֳԱ�");
	else if(m_strBoxB == "y"||m_strBoxB == "Y")
		AfxMessageBox("����ƿ�Ա�");
	else if(m_strBoxB == "w"||m_strBoxB == "W")
		AfxMessageBox("�����γԱ�");
	else if(m_strBoxB == "y"||m_strBoxB == "Y")
		AfxMessageBox("����Դ�Ա�");
	else if(m_strBoxB == "b"||m_strBoxB == "B")
	{
		AfxMessageBox("�ȽϺóԱ�");
		AfxMessageBox("ף�ϱ����������úϣ���������!");
	}
	else if(m_strBoxB == "yin"||m_strBoxB == "Yin")
	{
		CBoxYin box;
		box.DoModal();
	}
}
