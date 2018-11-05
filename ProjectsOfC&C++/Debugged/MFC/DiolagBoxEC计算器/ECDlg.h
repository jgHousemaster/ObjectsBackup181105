// ECDlg.h : header file
//

#include "afxwin.h"
#if !defined(AFX_ECDLG_H__05B73118_C7C8_47BA_B81D_DF1AC7566845__INCLUDED_)
#define AFX_ECDLG_H__05B73118_C7C8_47BA_B81D_DF1AC7566845__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CECDlg dialog

class CECDlg : public CDialog
{
// Construction
public:
	void SaveValue1();
	CECDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CECDlg)
	enum { IDD = IDD_EC_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA
		//CEdit	m_edit;//<span style="white-space:pre">           </span>//显示使用一个编辑框  
	    //CString m_str;//<span style="white-space:pre">            </span>//编辑框内的字符串  
		
	    //输入的2个值  
	    double m_fNumber1;  
	    double m_fNumber2;  
  
	    //保存计算符号类型 0='+',1='-',2='*',3='/'  
	    int m_iSign;  
  
	   //计算  
		void Calculator();  

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CECDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CECDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnBnClickedNum1();
	afx_msg void OnBnClickedAc();
	afx_msg void OnBnClickedC();
	afx_msg void OnBnClickedResult();
	afx_msg void OnBnClickedPlus();
	afx_msg void OnBnClickedReduce();
	afx_msg void OnBnClickedRide();
	afx_msg void OnBnClickedDivide();
	afx_msg void OnBnClickedNum0();
	afx_msg void OnBnClickedNum2();
	afx_msg void OnBnClickedNum1();
	afx_msg void OnBnClickedNum3();
	afx_msg void OnBnClickedNum4();
	afx_msg void OnBnClickedNum5();
	afx_msg void OnBnClickedNum6();
	afx_msg void OnBnClickedNum7();
	afx_msg void OnBnClickedNum8();
	afx_msg void OnBnClickedNum9();
	afx_msg void OnBnClickedPoint();
	afx_msg void OnBnClickedLeft();
	CEdit m_EditIn;
	CEdit m_EditResult;
	CString m_StrResult;
	CString m_StrIn;
	CString m_StrInA;
	afx_msg void OnClickedEgg();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ECDLG_H__05B73118_C7C8_47BA_B81D_DF1AC7566845__INCLUDED_)
