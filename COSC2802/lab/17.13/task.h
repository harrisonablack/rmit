#ifndef TASK_H
#define TASK_H

class Location {
	private:
		int x;
		int y;

	public:
		Location(int x, int y);
		bool operator==(const Location& other);
		int getX();
		int getY();
		void setX(int x);
		void setY(int y);

};

#endif

