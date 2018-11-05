#pragma once
#include "Resource.h"


// CDlgBoxB 对话框

class CDlgBoxB : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgBoxB)

public:
	CDlgBoxB(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgBoxB();

// 对话框数据
	enum { IDD = IDD_BOXB };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_strBoxB;
	afx_msg void OnBnClickedOk();
};
