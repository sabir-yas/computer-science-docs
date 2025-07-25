/********************************************
* Car Wash Simulation Program - Header File
* 
* Declares the Car class and simulation functions
*
* Author: Yaseer Sabir
* Version: 4/13/2025
*********************************************/

#ifndef CARWASH_H
#define CARWASH_H

#include <iostream>
#include <fstream>
#include <queue>
#include <iomanip>
#include <vector>
#include <cmath>
#include <string>

const int SIMULATION_END_TIME = 540; // 9 hours in minutes
const int WASH_TIME = 3; // Each car takes 3 minutes to wash

class Car {
private:
    int carNumber;
    int arrivalTime;
    int washStartTime;

public:
    Car(int number, int arrival);
    void setWashStartTime(int time);
    int getCarNumber() const;
    int getArrivalTime() const;
    int getWashStartTime() const;
    int getDepartureTime() const;
    int getWaitTime() const;
    int getTotalTime() const;
};

void printTableHeader();
void printStatistics(const std::vector<Car>& servedCars, int totalWashTime);
void runSimulation(const std::string& filename);

#endif // CARWASH_H