#pragma once
#include "Resource.h"			//�����������ļ�����ʾIDD_BOXAΪδ������ʶ��


// CDlgBoxA �Ի���

class CDlgBoxA : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgBoxA)

public:
	CDlgBoxA(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgBoxA();

// �Ի�������
	enum { IDD = IDD_BOXA };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
