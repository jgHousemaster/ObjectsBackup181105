// EC.h : main header file for the EC application
//

#if !defined(AFX_EC_H__6417445E_F100_4C72_8761_DA695771524B__INCLUDED_)
#define AFX_EC_H__6417445E_F100_4C72_8761_DA695771524B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CECApp:
// See EC.cpp for the implementation of this class
//

class CECApp : public CWinApp
{
public:
	CECApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CECApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CECApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EC_H__6417445E_F100_4C72_8761_DA695771524B__INCLUDED_)
