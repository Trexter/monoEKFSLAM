/*
 * Feature.cpp
 *
 *  Created on: Aug 1, 2017
 *      Author: kevin
 */

#include "../invio/Feature.h"

Feature::Feature() {

}

Feature::~Feature() {
	// TODO Auto-generated destructor stub
}

Eigen::Vector2d Feature::getNormalizedPixel(){
	return Eigen::Vector2d(this->mu(0), this->mu(1));
}

double Feature::getDepth(){
	return mu(2);
}

cv::Point2f Feature::getPixel(Frame& f){
	return cv::Point2f(f.K(0)*this->mu(0) + f.K(2), f.K(4)*this->mu(1) + f.K(5));
}
