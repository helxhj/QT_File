//#include "CCMainWindow.h"
#include <QtWidgets/QApplication>
#include "UserLogin.h"

int main(int argc, char *argv[])
{
	if (QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
		QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

	QApplication a(argc, argv);

	// 当最后一个窗口关闭时应用程序不退出 
	a.setQuitOnLastWindowClosed(false);
	UserLogin* userLogin = new UserLogin;
	userLogin->show();
	/*CCMainWindow w;
	w.show();*/
	return a.exec();
}
