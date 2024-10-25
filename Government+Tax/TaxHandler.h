#ifndef TAXHANDLER_H
#define TAXHANDLER_H

class TaxCommand;

#include "TaxCommand.h"

class TaxHandler {

protected:
	TaxHandler* nextHandler;

public:
	TaxHandler();
	void setNext(TaxHandler* next);
	virtual void handleRequest(TaxCommand* command);
  virtual ~TaxHandler() {}
};

#endif