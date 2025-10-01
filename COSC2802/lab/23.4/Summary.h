#ifndef SUMMARY
#define SUMMARY

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

#include <math.h>

float calc_mean(std::vector<float> );
float calc_stddev(std::vector<float>, float );

bool makeSummary(std::string inputFilename, std::string outputFilename) ;

#endif
