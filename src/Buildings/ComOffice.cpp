#include "ComOffice.h"

ComOffice::ComOffice() {
    cout << BLACK << "\t-->Office created" << RESET << endl;
    Resources::removeMoney(woodCost);
    Resources::removeWood(woodCost);
    Resources::removeSteel(steelCost);
    Resources::removeConcrete(concreteCost);
    Resources::addElectricityUsage(electricityUsage);
    Resources::addWaterUsage(waterUsage);
    Resources::addIncome(income);
}

void ComOffice::displayBuildingInfo() {
    cout << "Office with " << this->jobCapacity << " jobs\n";
}

int ComOffice::getJobCapacity() {
    return jobCapacity;
}

void ComOffice::setJobCapacity(int capacity) {
    this->jobCapacity = capacity;
}

// Observer
void ComOffice::callUtilities(){
    notifyUtilities();
}

bool ComOffice::getState(){
    return operational;
}

void ComOffice::setState(bool state){
    if(operational!=state){
        operational = state;
        callUtilities();}
    else {
            cout<<"No change in state"<<endl;
    }
}

string ComOffice::getBuildingType(){
    return type;
}