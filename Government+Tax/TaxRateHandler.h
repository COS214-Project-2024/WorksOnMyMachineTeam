#ifndef TAXRATEHANDLER_H
#define TAXRATEHANDLER_H

#include "TaxHandler.h"

class TaxRateHandler : public TaxHandler {
public:
	void handleRequest(TaxCommand* command) override;
};

#endif