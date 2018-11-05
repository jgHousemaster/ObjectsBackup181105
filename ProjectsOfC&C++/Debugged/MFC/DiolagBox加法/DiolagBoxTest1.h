// DiolagBoxTest1.h : main header file for the DIOLAGBOXTEST1 application
//

#if !defined(AFX_DIOLAGBOXTEST1_H__B6F05635_A590_4828_90A9_8F3CC768833F__INCLUDED_)
#define AFX_DIOLAGBOXTEST1_H__B6F05635_A590_4828_90A9_8F3CC768833F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CDiolagBoxTest1App:
// See DiolagBoxTest1.cpp for the implementation of this class
//

class CDiolagBoxTest1App : public CWinApp
{
public:
	CDiolagBoxTest1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDiolagBoxTest1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CDiolagBoxTest1App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIOLAGBOXTEST1_H__B6F05635_A590_4828_90A9_8F3CC768833F__INCLUDED_)
