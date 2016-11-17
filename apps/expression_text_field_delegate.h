#ifndef APPS_EXPRESSION_TEXT_FIELD_DELEGATE_H
#define APPS_EXPRESSION_TEXT_FIELD_DELEGATE_H

#include <escher.h>
#include <poincare.h>

class ExpressionTextFieldDelegate : public TextFieldDelegate {
public:
  virtual Context * evaluateContext() = 0;
  virtual const char * XNT();
  bool textFieldDidReceiveEvent(TextField * textField, Ion::Events::Event event) override;
private:
  bool cursorInToken(TextField * textField, const char * token);
};

#endif