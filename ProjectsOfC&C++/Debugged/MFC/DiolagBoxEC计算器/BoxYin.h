#pragma once
#include "Resource.h"
#include "afxcmn.h"


// CBoxYin �Ի���

class CBoxYin : public CDialogEx
{
	DECLARE_DYNAMIC(CBoxYin)

public:
	CBoxYin(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CBoxYin();

// �Ի�������
	enum { IDD = IDD_BOXYIN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	CProgressCtrl m_Progress;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
