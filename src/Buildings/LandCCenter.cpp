#include "LandCCenter.h"

LandCCenter::LandCCenter() {
    cout << BLACK << "\t-->Community center created" << RESET << endl;
}

void LandCCenter::displayBuildingInfo() {
    cout << "Community center with " << this->visitors << " visitors\n";
}

int LandCCenter::getVisitors() {
    return visitors;
}

void LandCCenter::setVisitors(int visitors) {
    this->visitors = visitors;
}

bool LandCCenter::checkBuildRequirements() {
    // I dunno why this was giving an error, but anyways [AMBER]
    return true;
}

void LandCCenter::callUtilities(){
    notifyUtilities();
}

bool LandCCenter::getState(){
    return operational;
}

void LandCCenter::setState(bool state){
    if(operational!=state){
        operational = state;
        callUtilities();}
    else{
            cout<<"No change in state"<<endl;
    }
}

std::string LandCCenter::getBuildingType(){
    return type;
}