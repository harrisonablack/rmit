#include <iostream>

class Location {
	public:
		int x;
		int y;

    Location(int x = 0, int y = 0) : x(x), y(y) {}
};

void add_location(Location *locArr, const Location &loc, int &logical_length, const int allocated_length);

void print_locations(Location *arr, int length);

int main()	{
   // // Test code provided for use while you develop your code  
   const int ALLOCATED_LENGTH = 20;
   Location locArr[ALLOCATED_LENGTH];
   int logical_length = 0;

   Location loc1(4, 5);
   Location loc2(0, 5);
   add_location(locArr, loc1, logical_length, ALLOCATED_LENGTH);
   add_location(locArr, loc2, logical_length, ALLOCATED_LENGTH);
   print_locations(locArr, logical_length);

    return EXIT_SUCCESS;
}

void add_location(Location *locArr, const Location &loc, int &logical_length, const int allocated_length) {

	if (logical_length < allocated_length) {
		locArr[logical_length] = loc;
		++logical_length;
	}
}

void print_locations(Location *arr, int length) {
	for (int i = 0; i < length; ++i ) {
		std::cout << arr[i].x << " " << arr[i].y << std::endl;
	}
}

