#include <QApplication>
#include <QMainWindow>
#include <QQuickView>
#include <QUrl>
#include <QWidget>

int main(int argc, char* argv[]) {
  QApplication app(argc, argv);

  QMainWindow* window = new QMainWindow();

  QQuickView* view = new QQuickView();
  QWidget* container = QWidget::createWindowContainer(view, window);
  view->setSource(QUrl::fromLocalFile("widget.qml"));
  container->setVisible(true);
  window->show();
  return app.exec();
}
