#include "Rectangle.h"

double Rectangle2D::getX() const {
	return x;//Return the value in x
}

double Rectangle2D::getY() const {
	return y;//Return the value in y
}

void Rectangle2D::setX(double x1){
	x = x1;//Set x equal to the newly entered value
}

void Rectangle2D::setY(double y1){
	y = y1;//Set y equal to the newly entered value
}

double Rectangle2D::getWidth() const {
	return width;//Return the value in width
}

double Rectangle2D::getHeight() const {
	return height;//Return the value in height
}

void Rectangle2D::setWidth(double wid){
	width = wid;//Set width equal to the newly entered value
}

void Rectangle2D::setHeight(double heig){
	height = heig;//Set height equal to the newly entered value
}

Rectangle2D::Rectangle2D(){//Defualt constructor for the class
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}

Rectangle2D::Rectangle2D(double x1, double y1, double wid, double heig){//Constructor that sets the data fields in Rectangle2D equal to the entered values 
	x = x1;
	y = y1;
	width = wid;
	height = heig;
}

double Rectangle2D::getArea() const {
	double area = width*height;//Returns width x height, which is area
	return area;
}

double Rectangle2D::getPerimeter() const {
	double perim = ((2 * width) + (2 * height));//Return the perimeter of the rectangle
	return perim;
}

bool Rectangle2D::contains(double x, double y) const {
	if ((x <= this->x + (width / 2) && x >= this->x - (width / 2)) &&//Use the this pointer to distinguish between the variables x and y parameters, and the x and y data fields in the Rectangle2D class
	 (y <= this->y + (height / 2) && y >= this->y - (height / 2)))//An if-statement to determine if the entered point lies inside the rectangle
		return true;
	else
		return false;
}

bool Rectangle2D::contains(const Rectangle2D &r) const {
	if (((x + (width / 2)) >= (r.getX() + (r.getWidth() / 2)) && (x - (width / 2)) <= (r.getX() - (r.getWidth() / 2))) &&//An if-statement to determine if the rectangle passed lies completely within
       (y + (height / 2)) >= (r.getY() + (r.getHeight() / 2)) && (y - (height / 2)) <= (r.getY() - (r.getHeight() / 2)))//the rectangle in question, the this pointer could be used like before, but it is not necessary
		return true;                                                                                                     //because, there are no parameter variables named x or y.
	
	else
		return false;
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const {
	if (((x + (width / 2)) <= (r.getX() + (r.getWidth() / 2)) && (x - (width / 2)) >= (r.getX() - (r.getWidth() / 2))) &&//An if-statement to determine if the rectangle passed overlaps the rectangle
	   ((y + (height / 2)) <= (r.getY() + (r.getHeight() / 2)) && (y - (height / 2)) >= (r.getY() - (r.getHeight() / 2))))//in question, the this pointer could be used like before, but it is not necessary
		return true;                                                                                                      //because, there are no parameter variables named x or y.
	
	if ((x + (width / 2)) >= (r.getX() + (r.getWidth() / 2)) && (x - (width / 2)) <= (r.getX() + (r.getWidth() / 2)))
		return true;
	
	if ((x + (width / 2)) >= (r.getX() - (r.getWidth() / 2)) && (x - (width / 2)) <= (r.getX() - (r.getWidth() / 2)))
		return true;
	
	if ((y + (height / 2)) >= (r.getY() + (r.getHeight() / 2)) && (y - (height / 2)) <= (r.getY() - (r.getHeight() / 2)))
		return true;
	
	if ((y + (height / 2)) >= (r.getY() - (r.getHeight() / 2)) && (y - (height / 2)) <= (r.getY() - (r.getHeight() / 2)))
		return true;
	
	return false;
}