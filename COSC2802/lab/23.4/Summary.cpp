#include "Summary.h"

bool makeSummary(std::string inputFilename, std::string outputFilename) {
	std::ifstream inFs;
	std::ofstream outFs;
	std::string in;
	int i = 0;
	std::vector<std::vector<float>> nums;

	inFs.open(inputFilename);

	if (!inFs.is_open()) {
		return false;
	}

	while(std::getline(inFs, in)) {
		std::string ins;
    std::istringstream iss(in);
		std::vector<float> vals;	

		while (iss >> ins) {
			vals.push_back(std::stof(ins));
		}
		nums.push_back(vals);
	}

	outFs.open(outputFilename);

	if (!outFs.is_open()) {
		return false;
	}



	for (std::vector<float> v : nums) {
		float mean = calc_mean(v);
		float stddev = calc_stddev(v, mean);

		outFs << i << ": " << mean << " +- " << stddev << std::endl;
		++i;
	}

	outFs.close();
	return true;
}


float calc_mean(std::vector<float> v) {
    float mean = 0.0;

    float sum = 0.0;
    int num = 0;

    for(auto n : v) {
        sum += n;
        num ++;
    }
    if(num > 0){ mean = sum/num; }
    return mean;
}

float calc_stddev(std::vector<float> v, float mean ){
    float stddev = 0.0;

    float sum = 0.0;
    int num = 0;

    for(auto n : v) {
        sum += (n-mean)*(n-mean);
        num ++;
    }
    if(num > 0){ stddev = sqrt(sum/num); }
    return stddev;
}
