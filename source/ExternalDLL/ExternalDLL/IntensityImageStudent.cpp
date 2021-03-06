#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
	//int throwError = 0, e = 1 / throwError; //Throws error without the need to include a header
	//TODO: Nothing
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {

	this->intensity = new Intensity[getHeight() * getWidth()];
	for(int i = 0; i < getWidth() * getHeight(); i++){
		intensity[i] = other.intensity[i];	
	}
	//int throwError = 0, e = 1 / throwError;
	//TODO: Create a copy from the other object
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {

	this->intensity = new Intensity[getHeight() * getWidth()];
	for (int i = 0; i < getWidth() * getHeight(); i++) {
		intensity[i] =  0;
	}
	//int throwError = 0, e = 1 / throwError;
	//TODO: Initialize pixel storage
}

IntensityImageStudent::~IntensityImageStudent() {

	delete[] intensity;
	
	//int throwError = 0, e = 1 / throwError;
	//TODO: delete allocated objects
}

void IntensityImageStudent::set(const int width, const int height) {
	IntensityImage::set(width, height);

	delete[] intensity;
	this->intensity = new Intensity[getHeight() * getWidth()];
	
	//int throwError = 0, e = 1 / throwError;
	//TODO: resize or create a new pixel storage (Don't forget to delete the old storage)
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	IntensityImage::set(other.getWidth(), other.getHeight());
	set(other.getWidth(), other.getHeight());

	//int throwError = 0, e = 1 / throwError;
	//TODO: resize or create a new pixel storage and copy the object (Don't forget to delete the old storage)
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {

	if(x < getWidth() &&  y < getHeight() && x > -1 && y > -1)
		intensity[y * getWidth() + x] = pixel;
	
	//int throwError = 0, e = 1 / throwError;
	//TODO: no comment needed :)
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	//int throwError = 0, e = 1 / throwError;
	/*
	* TODO: set pixel i in "Row-Major Order"
	*
	*
	* Original 2d image (values):
	* 9 1 2
	* 4 3 5
	* 8 7 8
	*
	* 1d representation (i, value):
	* i		value
	* 0		9
	* 1		1
	* 2		2
	* 3		4
	* 4		3
	* 5		5
	* 6		8
	* 7		7
	* 8		8
	*/
	if (i < getWidth() * getHeight() & i > -1)
		intensity[i] = pixel;
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	//int throwError = 0, e = 1 / throwError;
	//TODO: no comment needed :)
	if (x < getWidth() && y < getHeight() && x > -1 && y > -1)
		return intensity[y * getWidth() + x];
	else
		return 0;
}

Intensity IntensityImageStudent::getPixel(int i) const {
	//int throwError = 0, e = 1 / throwError;
	//TODO: see setPixel(int i, RGB pixel)
	if (i < getWidth() * getHeight() & i > -1)
		return intensity[i];
	else
		return 0;
}