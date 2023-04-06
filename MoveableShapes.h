#pragma once

#include<string>

//Initializes all functions being defined throughout program
std::string getShapeName();
int getArea();
std::string getName();
void move(int x, int y);
int getX();
int getY();
void setName(std::string inputShapeName);
std::string getName();
void moveShape(int x, int y);


//Class defined to be inherited by other shapes tpes
class Shape {
public:
	//creatng an area variable to be used when calculating the area of all shapes
	int area;

	//creates a string variable to be used in naming all shapes and shape types
	std::string name;

};

//Class that inherits from Shape Class designed to be inherited by all 2 Dimensional Shapes.
class TwoDimensionalShape : public Shape {
public:
	//function that returns a string confirming the current shape associated with this class is two dimensional
	std::string getShapeName() {
		name = "Two Dimensional Shape";
		return name;
	}
	
};

//Class that inherits from Shape Class designed to be inherited by all 3 Dimensional Shapes.
class ThreeDimensionalShape : public Shape {
public:
	//function that returns a string confirming the current shape associated with this class is three dimensional
	std::string getShapeName() {
		name = "Three Dimensional Shape";
		return name;
	}
};

//Class that inherits from Shape and TwoDimensionalShape to create a Square object
class Square : public TwoDimensionalShape {

private:
	//variables that represent the squares width and height.
	int height;
	int width;

public:

	//function that takes and sets and input width and height
	Square(int inputWidth, int inputHeight) {
		height = inputHeight;
		width = inputWidth;
	}

	//function that finds the area of a square object using its previously defined width and height.
	int getArea(){
		area = width * height;
		return area;
	}

	//function that returns the name of the object. for this object is will always be Square.
	std::string getName() {
		name = "Square";
		return name;
	}
};

//Class that inherits from Shape and TwoDimensionalShape to create a Circle object
class Circle : public TwoDimensionalShape {

private:
	//variable that represent the Circles radius
	int radius;

public:

	//function that takes and sets the circles radius
	Circle(int inputRadius) {
		radius = inputRadius;
	}

	//function that finds and returns the area of the circle using the pre-set radius
	int getArea() {
		area = radius * radius * (3.14);
		return area;
	}

	//function that returns the name of the object. for this object it will always be circle.
	std::string getName() {
		name = "Circle";
		return name;
	}
};

//Class that inherits from Shape and TwoDimensionalShape to create a Triangle object
class Triangle : public TwoDimensionalShape {

private:
	//variable that represent the height and width.
	int height;
	int width;

public:
	//function that takes and sets the triangles height and width
	Triangle(int inputWidth, int inputHeight) {
		height = inputHeight;
		width = inputWidth;
	}

	//function that finds and returns the area of the triangle using pre-set width and height.
	int getArea() {
		area = width * height * (.5);
		return area;
	}

	//function that returns the name of the object. for this object it will always be Triangle
	std::string getName() {
		name = "Triangle";
		return name;
	}

};

//Class that inherits from Shape and ThreeDimensionalShape to create a Sphere object
class Sphere : public ThreeDimensionalShape {

private:
	//variable that represents the spheres rdius
	int radius;

public:

	//function that takes an input and sets the radius based upon it.
	Sphere(int inputRadius) {
		radius = inputRadius;
	}

	//function that finds the area of the sphere based on the input radius
	int getArea() {
		area = radius * radius * (3.14) * 4;
		return area;
	}

	//function that returns the name of the object. For this object it will always be Sphere.
	std::string getName() {
		name = "Sphere";
		return name;
	}


};

//Class that inherits from Shape and ThreeDimensionalShape to create a Cube object
class Cube : public ThreeDimensionalShape {

private:
	//variables that represent the cubes height, width, and length
	int height;
	int width;
	int length;

public:

	//function that takes in an input and uses it to set the cubes height, width, and length
	Cube(int inputWidth, int inputHeight, int inputLength) {
		height = inputHeight;
		width = inputWidth;
		length = inputLength;
	}

	//function that takes previously defined variables and uses them to find the area of the cube.
	int getArea() {
		area = (2 * height * width) + (2 * width * length) + (2 * length * height);
		return area;
	}

	//function that returns the name of the object. for this object it will always be cube
	std::string getName() {
		name = "Cube";
		return name;
	}

};

//Class that inherits from Shape and ThreeDimensionalShape to create a Tetrehedron object
class Tetrahedron : public ThreeDimensionalShape {

private:
	//variable defined to stand for the edge length of a tetrahedron. In tetrahedrons, all edges have the same length.
	int edgeLength;

public:

	//function that takes an input and uses it to define edge length.
	Tetrahedron(int inputEdgeLength) {
		edgeLength = inputEdgeLength;

	}

	//function that uses the edgelength to find the area of the tetrahedron
	int getArea() {
		area = sqrt(3) *edgeLength * edgeLength;
		return area;
	}

	//function that returns the name of the object. For this object it will always be tetrahedron.
	std::string getName() {
		name = "Tetrehedron";
		return name;
	}

};



//Class Moveable desinged to hold, change, and return coordinate locations.
class Moveable {
public:
	//variables designed to hold coordinates in an X-Y Plane
	int x_Coordinate;
	int y_Coordinate;

public:
	//Constructor that sets the X and Y Coordinates to 0.
	Moveable() {
		x_Coordinate = 0;
		y_Coordinate = 0;
	}

	//Function that allows for the coordinates to change on an X-Y Plane by allowing inputs then adding them to current coordinates.
	void move(int x, int y) {
		x_Coordinate += x;
		y_Coordinate += y;
	}

	//function that returns the X coordinate.
	int getX(){
		return x_Coordinate;
	}

	//function that returns the Y coordinate
	int getY(){
		return y_Coordinate;
	}
};


//Class that inherits from Moveable and Shape to make a moveable shape.
//Its main purpose is to take the name variable from Shape and take the coordinate functions from Moveable.
class MoveableShape : public Moveable, public Shape {
public:
	
	//Setter that allows an input to decide the name of the shape.
	void setName(std::string inputShapeName) {
		name = inputShapeName;
	}

	//Getter that returns the name of the shape.
	std::string getName() {
		return name;
	}

};

//End of header file.



