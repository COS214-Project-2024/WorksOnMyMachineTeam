#ifndef RESFLAT_H
#define RESFLAT_H

#include "Residential.h"

class ResFlat : public Residential {
public:
    ResFlat();

    void displayBuildingInfo() override;

    int getCapacity() const override;
    void setCapacity(int capacity) override;

    //Observer
	void callUtilities();//call Utilities in Buildings
	bool getState();
	void setState(bool state);
	// int getTotalCapacity();
	// int getCurrentStorage();
	// int setCurrentStorage(int storage);
	std::string getBuildingType();

    // virtual bool checkBuildRequirements() override;
	// virtual int increasePopulation() override;
	// virtual void affectEmotionalState() override;

private:
    int capacity;
    string type="Residential Flat";
    bool operational;//CS State

    // Resources
    int cost = 1000;

    int woodCost = 10;
    int steelCost = 5;
    int concreteCost = 5;

    int electricityUsage = 5;
    int waterUsage = 5;

    int popIncrease = 5;
};

#endif // RESFLAT_H
