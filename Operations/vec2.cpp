#include "vec2.h"

namespace egc {
	//v1=v2
	vec2& vec2::operator =(const vec2& srcVector) {

		this->x = srcVector.x;
		this->y = srcVector.y;
			//(*this).x;
		return *this;
	}
	//a+b
	//this +b
	vec2 vec2::operator +(const vec2& srcVector) const
	{
		//this->x sau se poate si x ca e union clasa si publica
		vec2 rez;
		rez.x = x + srcVector.x;
		rez.y = y + srcVector.y;
		return rez;
	
	}
	vec2& vec2::operator +=(const vec2& srcVector) {
		x += srcVector.x;
		y += srcVector.y;
		return *this;
	}
	vec2 vec2::operator *(float scalarValue) const {
		vec2 rez;
		rez.x = x * scalarValue;
		rez.y = y * scalarValue;
		return rez;

	}
	vec2 vec2::operator -(const vec2& srcVector) const {
		vec2 rez;
		rez.x = x - srcVector.x;
		rez.y = y - srcVector.y;
		return rez;
	}
	vec2& vec2::operator -=(const vec2& srcVector) {
		x -= srcVector.x;
		y -= srcVector.y;
		return *this;
	}
	vec2 vec2::operator -() const {
		vec2 rez;
		rez.x = -x; 
		rez.y = -y;
		return rez;
	}
	float vec2::length() const {
		return(sqrt(this->x * this->x + this->y * this->y));
	}
	vec2& vec2::normalize() {
		float length = vec2::length();
		this->x /= length;
		this->y /= length;
		return *this;
		//sau asa this->x/=this->length();
	}
	float dotProduct(const vec2& v1, const vec2& v2) {
		return v1.x * v2.x + v1.y * v2.y;
	}
}
