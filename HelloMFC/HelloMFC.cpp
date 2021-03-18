#include <afxwin.h>

//응용 프로그램 클래스를 선언한다.
class CHelloApp :public CWinApp
{
public:
	virtual BOOL InitIntance();
};

//메인 윈도우 클래스를 선언한다.
class CMainFrame :public CFrameWnd
{
public:
	CMainFrame();

protected:
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINt nFlags, CPoint point);
	DECLEARE_MESSAGE_MAP()
};

//응용 프로그램 객체를 선언한다.
CHelloApp theApp;

//응용 프로그램 클래스를 정의한다.
BOOL CHelloApp::InitInstance()
{
	m_pMainWnd = new CMainFrame;
	m_pMainWnd->ShowWindow(m_nCmdShow);
	return TRUE;
}

//메인 윈도우 클래스를 정의한다.
CMainFrame::CMainFrame() {

}