#pragma once
#include "Resource.h"


// CDlgBoxB �Ի���

class CDlgBoxB : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgBoxB)

public:
	CDlgBoxB(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgBoxB();

// �Ի�������
	enum { IDD = IDD_BOXB };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString m_strBoxB;
	afx_msg void OnBnClickedOk();
};
