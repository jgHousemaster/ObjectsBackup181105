#pragma once
#include "Resource.h"
#include "afxcmn.h"


// CBoxYin 对话框

class CBoxYin : public CDialogEx
{
	DECLARE_DYNAMIC(CBoxYin)

public:
	CBoxYin(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CBoxYin();

// 对话框数据
	enum { IDD = IDD_BOXYIN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	CProgressCtrl m_Progress;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
