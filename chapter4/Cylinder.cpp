#include<iostream>
using namespace std;

class cylinder{
	private:
		float pie = 22/7;	// Pie is private as it is used internally
	public:
		float height, radius, area, volume;		// All basic properties
		cylinder(float radius, float height){	// Constructor with radius, height
			this->radius = radius;	// Assigning radius
			this->height = height;	// Assigning height
			this->area = find_area(radius);			// Calculating area of cross section
			this->find_volume(this->area, height);	// Calculating volume
		}
		float find_area(float r){	// Function for finding area
			return pie * r * r;
		}
		float find_volume(float a, float h){	// Function for finding volume
			return a * h;
		}
};

int main(){
	cylinder myClinder(7, 2.5);		// Initializing cylinder object
	cout << "Area = " << myClinder.area << '\n';		// Printing area
	cout << "Volume = " << myClinder.volume << '\n';	// Printing volume
	return 0;
}