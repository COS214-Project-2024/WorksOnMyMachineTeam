#ifndef RESIDENTIALSTREETS_H
#define RESIDENTIALSTREETS_H

#include "../RoadComponent.h"

class ResidentialStreets : public RoadComponent
{

public:
	ResidentialStreets(CityMediator *mediator);

	void displayInfo();

	void calculateTraffic();

	float getDistance();

	~ResidentialStreets() {}
};

#endif