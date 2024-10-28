#include "Citizen.h"
#include "CitizenNameGen.h"

Citizen::Citizen(CityMediator *mediator) : CityBlock(mediator)
{
	this->mediator = mediator;
	mediator->registerCitizen(this);
	this->state = Indifferent();

	name = CitizenNameGen::generateName();
}

void Citizen::setState(CitizenState newState)
{
	this->state = newState;
}

CitizenState Citizen::getState()
{
	return state;
}

void Citizen::notifyChange()
{
	// TODO - implement Citizen::notifyChange
	throw "Not yet implemented";
}

void Citizen::accept(TaxAndBudgetVisitor *visitor)
{
	// TODO - implement Citizen::accept
	throw "Not yet implemented";
}

std::string Citizen::getName()
{
	return name;
}
