#ifndef SERVEDUCATION_H
#define SERVEDUCATION_H

#include "Services.h"

/**
 * @class ServEducation
 * @brief Represents an education service in the city.
 *
 * The ServEducation class manages educational operations, employee management,
 * and visitor information, inheriting from the Services base class.
 */
class ServEducation : public Services
{
public:
    /**
     * @brief Constructs a ServEducation object.
     */
    ServEducation();

    /**
     * @brief Destroys the ServEducation object.
     */
    ~ServEducation();

    /**
     * @brief Displays information about the education building.
     */
    void displayBuildingInfo() override;

    /**
     * @brief Gets the number of visitors currently in the education facility.
     * @return The number of visitors.
     */
    int getVisitors() override;

    /**
     * @brief Sets the number of visitors in the education facility.
     * @param visitors The number of visitors to set.
     */
    void setVisitors(int visitors) override;

    // Observer methods

    /**
     * @brief Calls utilities in the building.
     */
    void callUtilities(); ///< Notify utilities of changes in the education service

    /**
     * @brief Gets the operational state of the education service.
     * @return True if the education service is operational, false otherwise.
     */
    bool getState();

    /**
     * @brief Sets the operational state of the education service.
     * @param state The state to set.
     */
    void setState(bool state);

    /**
     * @brief Gets the type of building.
     * @return A string representing the type of building.
     */
    string getBuildingType();

    // Resources management

    /**
     * @brief Adds an employee to the education service.
     * @param employee Pointer to the Citizen to be added as an employee.
     * @return True if the employee was added successfully, false otherwise.
     */
    bool addEmployee(Citizen *employee);

    /**
     * @brief Removes an employee from the education service.
     * @param employee Pointer to the Citizen to be removed.
     */
    void removeEmployee(Citizen *employee);

    /**
     * @brief Notifies the education service that an employee has left.
     * @param employee Pointer to the Citizen who has left.
     */
    void notifyEmployeeLeft(Citizen *employee);

    /**
     * @brief Checks if there are job openings in the education service.
     * @return True if there are job openings, false otherwise.
     */
    bool hasJob();

	int getElectricityUsage();
    int getWaterUsage();
    int getCurCitizenCount();

private:
    int visitors; ///< Current number of visitors in the education facility
    string type = "Service Education"; ///< Type of service building
    bool operational; ///< Operational state of the education service

    // Resources
    vector<Citizen *> employees; ///< List of employees working at the education service
    int cost = 1500; ///< Construction cost of the education facility

    int woodCost = 5; ///< Cost of wood for construction
    int steelCost = 10; ///< Cost of steel for construction
    int concreteCost = 15; ///< Cost of concrete for construction

    int electricityUsage = 10; ///< Electricity usage per unit time
    int waterUsage = 10; ///< Water usage per unit time

    int happinessIncrease = 5; ///< Increase in citizen happiness
    int jobCapacity = 20; ///< Maximum number of employees the education service can hire
    int cityIncome = 50; ///< Income generated by the education service
};

#endif
