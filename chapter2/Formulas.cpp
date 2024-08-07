#include<iostream>
using namespace std;

// Functions of formulas, returning float type
float area_of_triangle(float b, float h){
	return (b * h)/2.0;
}
float area_of_circle(float r){
	return (22.0/7.0) * r * r;
}
float volume_of_cylinder(float r, float h){
	return area_of_circle(r) * h;
}
float volume_of_sphere(float r){
	return (4.0/3.0) * (22.0/7.0) * r * r * r;
}

// Main function
int main(){
	// Message
	cout << "(1) Area of triangle\t(2) Area of circle\n(3) Volume of cylinder\t(4) Volume of sphere\n";
	int option;
	cout << "Option: ";	// Prompt
	cin >> option;		// Input

	float base, height, radius;	// Initializing float type variables

	switch(option){		// Using switch case conditional statement
		case 1:			// Area of triangle
			cout << "Enter base: ";		// prompt
			cin >> base;				// Input
			cout << "Enter height: ";	// Prompt
			cin >> height;				// Input
			cout << "Area of triangle is " << area_of_triangle(base, height) << '\n';
			break;
		case 2:			// Area of circle
			cout << "Enter radius: ";	// Prompt
			cin >> radius;				// Input
			cout << "Area of circle is " << area_of_circle(radius) << '\n';
			break;
		case 3:			// Volume of cylinder
			cout << "Enter radius: ";	// Prompt
			cin >> radius;				// Input
			cout << "Enter height: ";	// Prompt
			cin >> height;				// Input
			cout << "Volume of cylinder is " << volume_of_cylinder(radius, height) << '\n';
			break;
		case 4:			// Volume of sphere
			cout << "Enter radius: ";	// Prompt
			cin >> radius;				// Input
			cout << "Volume of sphere is " << volume_of_sphere(radius) << '\n';
			break;
		default:		// In case user enters a wrong input
			cout << "Enter valid number!\n";
	}
	return 0;
}