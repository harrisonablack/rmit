#ifndef FANCY_CAR_H
#define FANCY_CAR_H

#include <iostream>
#include <string>
using namespace std;

const int FULL_TANK = 14;

#include <iostream>
#include <string>

class FancyCar {
   public:
      // Default constructor
      FancyCar();
      
      // Constructor (string make, double mpg)
      FancyCar(string carMake, double carMpg);
      
      // Return car model
      string GetModel();
      
      // Return miles per gallon (MPG)
      double GetMPG();
      
      // Return miles on odometer
      int CheckOdometer();
      
      // Return amount of gas in tank
      double CheckGasGauge();
      
      // Honk horn
      void HonkHorn();
      
      // Drive car requested miles but check for enough
      // gas and check for positive value
      void Drive(int milesToDrive);
      
      // Add gas to tank. Check for positive value.
      void AddGas(double amtToAdd) ;
      
      // Set boolean variable to true
      void StartEngine();
      
      // Set boolean variable to false
      void StopEngine();

   private:
		int miles;
		double gas;
		double mpg;
		double capacity;
		string model;
		bool engine;

		
      // TODO: Declare private data members
      
};

#endif
