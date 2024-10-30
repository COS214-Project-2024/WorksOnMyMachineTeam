#include "SetTaxRateCommand.h"
#include <iostream>
SetTaxRateCommand::SetTaxRateCommand(Government *gov, double rate, std::string cat)
{
  this->government = gov;
  this->taxRate = rate;
  this->category = cat;
}

void SetTaxRateCommand::execute()
{
  std::cout << "executing set tax rate\n";
  this->government->setTaxRate(this->category, this->taxRate);
}