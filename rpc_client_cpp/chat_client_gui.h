#pragma once

#include <QDialog>

class QPushButton;
class QPlainTextEdit;

class ChatClientGui : public QDialog
{
  Q_OBJECT

public:
  ChatClientGui(QWidget* parent_ = nullptr);

public:
  QPlainTextEdit* log;

signals:
  void sendAuthorizeButtonPushed();

private:
  QPushButton* sendAuthorize;
};