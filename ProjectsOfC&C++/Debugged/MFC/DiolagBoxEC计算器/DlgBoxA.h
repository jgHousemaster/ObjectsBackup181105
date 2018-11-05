#pragma once
#include "Resource.h"			//若不包含此文件会提示IDD_BOXA为未命名标识符


// CDlgBoxA 对话框

class CDlgBoxA : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgBoxA)

public:
	CDlgBoxA(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgBoxA();

// 对话框数据
	enum { IDD = IDD_BOXA };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
