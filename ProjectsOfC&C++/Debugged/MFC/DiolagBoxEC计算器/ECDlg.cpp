// ECDlg.cpp : implementation file
//

#include "stdafx.h"
#include "DlgBoxA.h"
#include "EC.h"
#include "ECDlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CECDlg dialog

CECDlg::CECDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CECDlg::IDD, pParent)
	, m_StrIn(_T(""))
	, m_StrResult(_T(""))
{
	//{{AFX_DATA_INIT(CECDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDI_ICONSYS32);
}

void CECDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CECDlg)
	// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
	DDX_Control(pDX, IDC_EDIT_IN, m_EditIn);
	//  DDX_Text(pDX, IDC_EDIT_IN, m_StrIn);
	DDX_Control(pDX, IDC_EDIT_RESULT, m_EditResult);
	DDX_Text(pDX, IDC_EDIT_RESULT, m_StrResult);
	//  DDX_Text(pDX, IDC_EDIT_IN, m_StrInA);
	DDX_Text(pDX, IDC_EDIT_IN, m_StrIn);
}

BEGIN_MESSAGE_MAP(CECDlg, CDialog)
	//{{AFX_MSG_MAP(CECDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
//	ON_BN_CLICKED(ID_NUM1, &CECDlg::OnBnClickedNum1)
	ON_BN_CLICKED(ID_AC, &CECDlg::OnBnClickedAc)
	ON_BN_CLICKED(ID_C, &CECDlg::OnBnClickedC)
	ON_BN_CLICKED(ID_RESULT, &CECDlg::OnBnClickedResult)
	ON_BN_CLICKED(ID_PLUS, &CECDlg::OnBnClickedPlus)
	ON_BN_CLICKED(ID_REDUCE, &CECDlg::OnBnClickedReduce)
	ON_BN_CLICKED(ID_RIDE, &CECDlg::OnBnClickedRide)
	ON_BN_CLICKED(ID_DIVIDE, &CECDlg::OnBnClickedDivide)
	ON_BN_CLICKED(ID_NUM0, &CECDlg::OnBnClickedNum0)
	ON_BN_CLICKED(ID_NUM2, &CECDlg::OnBnClickedNum2)
//	ON_NOTIFY(BCN_DROPDOWN, ID_NUM1, &CECDlg::OnDropdownNum1)
ON_BN_CLICKED(ID_NUM1, &CECDlg::OnBnClickedNum1)
ON_BN_CLICKED(ID_NUM3, &CECDlg::OnBnClickedNum3)
ON_BN_CLICKED(ID_NUM4, &CECDlg::OnBnClickedNum4)
ON_BN_CLICKED(ID_NUM5, &CECDlg::OnBnClickedNum5)
ON_BN_CLICKED(ID_NUM6, &CECDlg::OnBnClickedNum6)
ON_BN_CLICKED(ID_NUM7, &CECDlg::OnBnClickedNum7)
ON_BN_CLICKED(ID_NUM8, &CECDlg::OnBnClickedNum8)
ON_BN_CLICKED(ID_NUM9, &CECDlg::OnBnClickedNum9)
ON_BN_CLICKED(ID_Point, &CECDlg::OnBnClickedPoint)
ON_BN_CLICKED(ID_EGG, &CECDlg::OnClickedEgg)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CECDlg message handlers

BOOL CECDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CECDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CECDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		//CDialog::OnPaint();把这个注释掉，不调用基类的OnPaint()
       CPaintDC dc(this);
       CDC memdc;
       memdc.CreateCompatibleDC(&dc);//创建兼容DC
       CBitmap bkg;
	   bkg.LoadBitmap(IDB_BACKGROUND);//载入位图
       BITMAP bkginfo;
       bkg.GetBitmap(&bkginfo);//获取位图信息
       memdc.SelectObject(&bkg);
       RECT rect;
       GetWindowRect(&rect);//获取对话框信息
       dc.StretchBlt(0,0,rect.right-rect.left,rect.bottom-rect.top,&memdc,0,0,bkginfo.bmWidth,bkginfo.bmHeight,SRCCOPY);
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CECDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}


void CECDlg::OnBnClickedAc()
{
	// TODO: 在此添加控件通知处理程序代码
    UpdateData(TRUE); 
	m_StrIn = "";
	m_StrInA = "";
    m_StrResult = "";  
    m_fNumber1 = 0.0f;  
    m_fNumber2 = 0.0f;  
    m_iSign = 0;  
    UpdateData(FALSE); 
}


void CECDlg::OnBnClickedC()
{
	// TODO: 在此添加控件通知处理程序代码
	    UpdateData(TRUE);  
    //移除最右边一个字符  
    if (!m_StrIn.IsEmpty())  
    {  
        m_StrIn = m_StrIn.Left(m_StrIn.GetLength()-1);  
    }  
    UpdateData(FALSE);
}


void CECDlg::OnBnClickedResult()
{
	// TODO: 在此添加控件通知处理程序代码
	Calculator();
}


void CECDlg::OnBnClickedPlus()
{
	// TODO: 在此添加控件通知处理程序代码
	m_iSign = 0;
	SaveValue1();   
}


void CECDlg::OnBnClickedReduce()
{
	// TODO: 在此添加控件通知处理程序代码
	m_iSign = 1;
	SaveValue1();  
}


void CECDlg::OnBnClickedRide()
{
	// TODO: 在此添加控件通知处理程序代码
	m_iSign = 2;
	SaveValue1();
}


void CECDlg::OnBnClickedDivide()
{
	// TODO: 在此添加控件通知处理程序代码
	m_iSign = 3;
	SaveValue1();  
}


void CECDlg::OnBnClickedNum0()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(FALSE);
	UpdateData(TRUE);  
    m_StrIn = m_StrIn + "0"; 
	m_StrInA = m_StrInA + "0";
    UpdateData(FALSE); 
}

void CECDlg::OnBnClickedNum1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(FALSE);
	UpdateData(TRUE);  
    m_StrIn = m_StrIn + "1"; 
	m_StrInA = m_StrInA + "1";
    UpdateData(FALSE); 
}

void CECDlg::OnBnClickedNum2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(FALSE);
	UpdateData(TRUE);  
    m_StrIn = m_StrIn + "2";
	m_StrInA = m_StrInA + "2";
    UpdateData(FALSE); 
}

void CECDlg::OnBnClickedNum3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(FALSE);
	UpdateData(TRUE);  
    m_StrIn = m_StrIn + "3"; 
	m_StrInA = m_StrInA + "3";
    UpdateData(FALSE); 
}


void CECDlg::OnBnClickedNum4()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(FALSE);
	UpdateData(TRUE);  
    m_StrIn = m_StrIn + "4";
	m_StrInA = m_StrInA + "4";
    UpdateData(FALSE); 
}


void CECDlg::OnBnClickedNum5()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(FALSE);
	UpdateData(TRUE);  
    m_StrIn = m_StrIn + "5"; 
	m_StrInA = m_StrInA + "5";
    UpdateData(FALSE); 
}


void CECDlg::OnBnClickedNum6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(FALSE);
	UpdateData(TRUE);  
	m_StrIn = m_StrIn + "6"; 
	m_StrInA = m_StrInA + "6";
    UpdateData(FALSE); 
}


void CECDlg::OnBnClickedNum7()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(FALSE);
	UpdateData(TRUE);  
	m_StrIn = m_StrIn + "7";
	m_StrInA = m_StrInA + "7";
    UpdateData(FALSE); 
}


void CECDlg::OnBnClickedNum8()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(FALSE);
	UpdateData(TRUE);  
	m_StrIn = m_StrIn + "8"; 
	m_StrInA = m_StrInA + "8";
    UpdateData(FALSE); 
}


void CECDlg::OnBnClickedNum9()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(FALSE);
	UpdateData(TRUE);  
	m_StrIn = m_StrIn + "9"; 
	m_StrInA = m_StrInA + "9";
    UpdateData(FALSE); 
}


//小数点按钮
void CECDlg::OnBnClickedPoint()
{
	// TODO: 在此添加控件通知处理程序代码
    UpdateData(TRUE);  
    //如果没有小数点，则加上一个小数点，如果已有小数点就忽略此次的小数点，保证最多只有1个  
	if (-1 == m_StrIn.Find('.'))  
    {  
		m_StrIn = m_StrIn + "."; 
		m_StrInA = m_StrInA + ".";
    }  
    UpdateData(FALSE);
}

void CECDlg::SaveValue1()  
{  
    UpdateData(TRUE);  
	m_fNumber1 = atof(m_StrIn);  
	m_StrInA = "";
	switch(m_iSign)
	{
	case 0:
		m_StrIn = m_StrIn + " + ";break;
	case 1:
		m_StrIn = m_StrIn + " - ";break;
	case 2:
		m_StrIn = m_StrIn + " * ";break;
	case 3:
		m_StrIn = m_StrIn + " / ";break;
	}
	UpdateData(FALSE);
}

void CECDlg::Calculator()  
{  
    UpdateData(TRUE);  
	m_fNumber2 = atof(m_StrInA);  
    double f = 0.0f;  
    switch (m_iSign)  
    {  
        //加  
    case 0:  
        f = m_fNumber1 + m_fNumber2;  
        break;  
        //减  
    case 1:  
        f = m_fNumber1 - m_fNumber2;  
        break;  
        //乘  
    case 2:  
        f = m_fNumber1 * m_fNumber2;  
        break;  
        //除  
    case 3:  
       if (m_fNumber2 == 0.0f)  
        {  
            f = m_fNumber1;  
        }  
        else  
        {  
            f = m_fNumber1 / m_fNumber2;  
        }  
        break;   
    default:  
        break;  
    }  
    //如果浮点数其实是个整数  
    if(f - int(f) <= 1e-5)  
    {  
		m_StrResult.Format("%d",(int)f);  
    }  
    else  
    {  
		m_StrResult.Format("%.2f",f);  
    }  
    UpdateData(FALSE);  
  
    m_fNumber1 = f;  
    m_fNumber2 = 0.0f; 
	m_StrIn = "";
	m_StrInA = "";
}  


void CECDlg::OnClickedEgg()
{
	// TODO: 在此添加控件通知处理程序代码
	CDlgBoxA dlgA;
	dlgA.DoModal();
}
