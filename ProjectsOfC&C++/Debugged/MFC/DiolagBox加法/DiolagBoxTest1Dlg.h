// DiolagBoxTest1Dlg.h : header file
//

#if !defined(AFX_DIOLAGBOXTEST1DLG_H__A6B63384_3784_4E88_93B3_C3751EC56635__INCLUDED_)
#define AFX_DIOLAGBOXTEST1DLG_H__A6B63384_3784_4E88_93B3_C3751EC56635__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CDiolagBoxTest1Dlg dialog

class CDiolagBoxTest1Dlg : public CDialog
{
// Construction
public:
	CDiolagBoxTest1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CDiolagBoxTest1Dlg)
	enum { IDD = IDD_DIOLAGBOXTEST1_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDiolagBoxTest1Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CDiolagBoxTest1Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedPlus();
//	int m_Num1;
//	int m_Num2;
//	int m_Result;
	float m_Num1;
	float m_Num2;
	float m_Result;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIOLAGBOXTEST1DLG_H__A6B63384_3784_4E88_93B3_C3751EC56635__INCLUDED_)
