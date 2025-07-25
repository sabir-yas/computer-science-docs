/********************************************
 * Car Wash Simulation Program - Implementation
 *
 * Implements the Car class and simulation functions
 *
 * Author: Yaseer Sabir
 * Version: 4/13/2025
 *********************************************/

#include "CarWash.h"
using namespace std;

// Car class implementation
Car::Car(int number, int arrival) : carNumber(number), arrivalTime(arrival), washStartTime(-1) {}

void Car::setWashStartTime(int time) { washStartTime = time; }

int Car::getCarNumber() const { return carNumber; }
int Car::getArrivalTime() const { return arrivalTime; }
int Car::getWashStartTime() const { return washStartTime; }
int Car::getDepartureTime() const { return washStartTime + WASH_TIME; }
int Car::getWaitTime() const { return (washStartTime >= 0) ? (washStartTime - arrivalTime) : 0; }
int Car::getTotalTime() const { return getDepartureTime() - arrivalTime; }

// Helper functions
void printTableHeader()
{
    cout << "| " << setw(10) << left << "Car Number" << " | "
              << setw(12) << "Arrival Time" << " | "
              << setw(18) << "Car Wash Start" << " | "
              << setw(14) << "Departure Time" << " | "
              << setw(9) << "Wait Time" << " | "
              << setw(10) << "Total Time" << " |\n";
    cout << setfill('-') << setw(90) << "" << setfill(' ') << "\n";
}

void printStatistics(const vector<Car> &servedCars, int totalWashTime)
{
    int totalWaitTime = 0;
    for (const auto &car : servedCars)
    {
        totalWaitTime += car.getWaitTime();
    }

    double avgWaitMinutes = servedCars.empty() ? 0 : static_cast<double>(totalWaitTime) / servedCars.size();
    int avgWaitSec = static_cast<int>(round((avgWaitMinutes - floor(avgWaitMinutes)) * 60));
    int avgWaitMin = static_cast<int>(floor(avgWaitMinutes));

    double percentageUsed = (static_cast<double>(totalWashTime) / SIMULATION_END_TIME) * 100;

    cout << "\nStatistics:\n";
    cout << "Total wait time: " << totalWaitTime << " minutes\n";
    cout << "Average wait time: " << avgWaitMin << " minutes and " << avgWaitSec << " seconds\n";
    cout << "Total car wash use time: " << totalWashTime << " minutes\n";
    cout << "Percentage of time car wash was in use: " << fixed << setprecision(0) << percentageUsed << "%\n";
}

void runSimulation(const string &filename)
{
    ifstream inputFile(filename);
    if (!inputFile)
    {
        cerr << "Error opening input file: " << filename << "\n";
        return;
    }

    queue<int> arrivalQueue;
    int arrival;
    while (inputFile >> arrival)
    {
        arrivalQueue.push(arrival);
    }
    inputFile.close();

    cout << "Opening Time: 8:00 AM (0 minutes)\n";
    cout << "Closing Time: 5:00 PM (" << SIMULATION_END_TIME << " minutes)\n";
    cout << "Start of Simulation\n";
    printTableHeader();

    vector<Car> servedCars;
    int currentTime = 0;
    int carNumber = 1;
    int totalWashTime = 0;

    while (!arrivalQueue.empty())
    {
        int arrivalTime = arrivalQueue.front();
        arrivalQueue.pop();

        if (arrivalTime > SIMULATION_END_TIME)
        {
            cout << "| " << setw(10) << carNumber++ << " | "
                      << setw(12) << arrivalTime << " | "
                      << "Car arrived after closing time and was not served. " << setw(22) << " |\n";
            continue;
        }

        Car car(carNumber, arrivalTime);

        if (arrivalTime >= currentTime)
        {
            car.setWashStartTime(arrivalTime);
            currentTime = arrivalTime + WASH_TIME;
        }
        else
        {
            car.setWashStartTime(currentTime);
            currentTime += WASH_TIME;
        }

        totalWashTime += WASH_TIME;
        servedCars.push_back(car);

        cout << "| " << setw(10) << car.getCarNumber() << " | "
                  << setw(12) << car.getArrivalTime() << " | "
                  << setw(18) << car.getWashStartTime() << " | "
                  << setw(14) << car.getDepartureTime() << " | "
                  << setw(9) << car.getWaitTime() << " | "
                  << setw(10) << car.getTotalTime() << " |\n";

        carNumber++;
    }

    cout << setfill('-') << setw(90) << "" << setfill(' ') << "\n";
    cout << "End of Simulation\n";

    printStatistics(servedCars, totalWashTime);
}

int main()
{
    runSimulation("arrival_time.txt");
    return 0;
}