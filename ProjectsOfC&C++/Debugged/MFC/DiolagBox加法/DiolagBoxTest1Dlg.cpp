// DiolagBoxTest1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "DiolagBoxTest1.h"
#include "DiolagBoxTest1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDiolagBoxTest1Dlg dialog

CDiolagBoxTest1Dlg::CDiolagBoxTest1Dlg(CWnd* pParent /*=NULL*/)	//构造函数
	: CDialog(CDiolagBoxTest1Dlg::IDD, pParent)
	, m_Num1(0)					//赋初值（自动生成）
	, m_Num2(0)
	, m_Result(0)
{
	//{{AFX_DATA_INIT(CDiolagBoxTest1Dlg)
		// NOTE: the ClassWizard will add member initialization here
	m_Num1=0.0;					//赋初值（手动编写）
	m_Num2=0.0;
	m_Result=0.0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDiolagBoxTest1Dlg::DoDataExchange(CDataExchange* pDX)	//对话框数据交换
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDiolagBoxTest1Dlg)
	// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
	//  DDX_Text(pDX, IDC_NUM1, m_Num1);
	//  DDX_Text(pDX, IDC_NUM2, m_Num2);
	//  DDX_Text(pDX, IDC_RESULT, m_Result);
	DDX_Text(pDX, IDC_NUM1, m_Num1);		//自动生成
	DDV_MinMaxDouble(pDX, m_Num1,-0.1,100.);//限制最值
	DDX_Text(pDX, IDC_NUM2, m_Num2);
	DDX_Text(pDX, IDC_RESULT, m_Result);
}

BEGIN_MESSAGE_MAP(CDiolagBoxTest1Dlg, CDialog)
	//{{AFX_MSG_MAP(CDiolagBoxTest1Dlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(VS_PLUS, &CDiolagBoxTest1Dlg::OnBnClickedPlus)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDiolagBoxTest1Dlg message handlers

BOOL CDiolagBoxTest1Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CDiolagBoxTest1Dlg::OnPaint() 
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
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CDiolagBoxTest1Dlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}


void CDiolagBoxTest1Dlg::OnBnClickedPlus()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	m_Result=m_Num1+m_Num2;
	UpdateData(false);
}
