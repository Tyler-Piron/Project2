// MoveableShapes_TylerPiron.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//takes everything from header file "MoveableShapes.h"
#include "MoveableShapes.h"
#include<list>
#include<string>

//Main function of program
int main()
{
	//creates a list for each shape type created in MoveableShapes.h
	//Lists are designed to be added to with variable size.
	std::list<Square> listOfSquares = {};
	std::list<Circle> listOfCircles = {};
	std::list<Triangle> listOfTriangles = {};
	std::list<Sphere> listOfSpheres = {};
	std::list<Cube> listOfCubes = {};
	std::list<Tetrahedron> listOfTetrahedrons = {};

	//creates 2 square objects to be added to the list.
	Square listSquare(2,4);
	Square listSquare2(3, 6);

	//creates 2 Circle objects to be added to the list.
	Circle listCircle(5);
	Circle listCircle2(2);

	//creates 2 Triangle objects to be added to the list.
	Triangle listTriangle(5, 6);
	Triangle listTriangle2(1, 3);

	//creates 2 Sphere objects to be added to the list.
	Sphere listSphere(5);
	Sphere listSphere2(8);

	//creates 2 Cube objects to be added to the list.
	Cube listCube(2, 4, 6);
	Cube listCube2(1, 3, 5);

	//creates 2 Tetrahedron objects to be added to the list.
	Tetrahedron listTetrahedron(4);
	Tetrahedron listTetrahedron2(6);

	//Adds 2 previously created Squares to associated list.
	listOfSquares.push_back(listSquare);
	listOfSquares.push_back(listSquare2);

	//Adds 2 previously created Circles to associated list.
	listOfCircles.push_back(listCircle);
	listOfCircles.push_back(listCircle2);

	//Adds 2 previously created Triangles to associated list.
	listOfTriangles.push_back(listTriangle);
	listOfTriangles.push_back(listTriangle2);

	//Adds 2 previously created Spheres to associated list.
	listOfSpheres.push_back(listSphere);
	listOfSpheres.push_back(listSphere2);

	//Adds 2 previously created Cubes to associated list.
	listOfCubes.push_back(listCube);
	listOfCubes.push_back(listCube2);

	//Adds 2 previously created Tetrehedrons to associated list.
	listOfTetrahedrons.push_back(listTetrahedron);
	listOfTetrahedrons.push_back(listTetrahedron2);


	//The following for loops all read the objects from the designated lists and print information about each object.
	//For each object, its type, name, and area are all displayed to the user.
	for (Square item : listOfSquares) {
		std::cout << item.getName() << " is a " << item.getShapeName() << " with an area of " << item.getArea() << " inches";
		std::cout << "\n";
	}

	for (Circle item : listOfCircles) {
		std::cout << item.getName() << " is a " << item.getShapeName() << " with an area of " << item.getArea() << " inches";
		std::cout << "\n";
	}

	for (Triangle item : listOfTriangles) {
		std::cout << item.getName() << " is a " << item.getShapeName() << " with an area of " << item.getArea() << " inches";
		std::cout << "\n";
	}

	for (Sphere item : listOfSpheres) {
		std::cout << item.getName() << " is a " << item.getShapeName() << " with an area of " << item.getArea() << " inches";
		std::cout << "\n";
	}

	for (Cube item : listOfCubes) {
		std::cout << item.getName() << " is a " << item.getShapeName() << " with an area of " << item.getArea() << " inches";
		std::cout << "\n";
	}

	for (Tetrahedron item : listOfTetrahedrons) {
		std::cout << item.getName() << " is a " << item.getShapeName() << " with an area of " << item.getArea() << " inches";
		std::cout << "\n";
	}

	std::cout << "\n";


	//An object called particle is created using the Moveable class
	Moveable particle;

	//The current located of the particle is printed and user is told next location of the particle
	std::cout << "Particle is currently located at (" << particle.getX() << ", " << particle.getY() << ")\n";
	std::cout << "Particle is now being relocated to (15,30)\n";

	//the particle is moved by the move function
	particle.move(15, 30);

	//the new location of the particle is displayed.
	std::cout << "Particle is now located at (" << particle.getX() << ", " << particle.getY() << ")\n\n";



	//An object called moveableShape is created using the MoveableShape class
	MoveableShape moveableShape;

	//A name is set to the moveableShape
	moveableShape.setName("Square");

	//The current located of the shape is printed and user is told next location of the shape.
	std::cout << moveableShape.getName() << " is currently located at (" << moveableShape.getX() << ", " << moveableShape.getY() << ")\n";
	std::cout << moveableShape.getName() << " is now being relocated to (-30, 50)\n";

	//The shape is moved by the move function
	moveableShape.move(-30, 50);

	//The new location of the shape is displayed.
	std::cout << moveableShape.getName() << " is now located at (" << particle.getX() << ", " << particle.getY() << ")\n\n";







}

