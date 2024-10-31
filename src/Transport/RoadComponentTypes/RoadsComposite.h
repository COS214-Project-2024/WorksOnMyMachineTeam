#ifndef ROADSCOMPOSITE_H
#define ROADSCOMPOSITE_H

#include "../RoadComponent.h"
#include <vector>

class RoadsComposite : public RoadComponent
{
private:
	std::vector<RoadComponent *> components;

public:
	/*
	 * @brief Constructor for RoadsComposite
	 * @param sX - start x coordinate
	 * @param sY - start y coordinate
	 * @param eX - end x coordinate
	 * @param eY - end y coordinate
	 * @param type - type of road (highway, main, residential)
	 */
	RoadsComposite(int sX, int sY, int eX, int eY, std::string type);

	void displayInfo();

	void calculateTraffic();

	void add(RoadComponent *component);

	void remove(RoadComponent *component);

	float getDistance();

	void notifyChange(std::string message);

	void addConnection(RoadComponent *connection, float distance);

	const std::vector<RoadComponent *> &getComponents() const
	{
		return components;
	}

	~RoadsComposite() {}
};

#endif
