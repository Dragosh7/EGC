#include "vec2.h"

namespace egc {
	//v1=v2
	vec4& vec4::operator =(const vec4& srcVector) {

		this->x = srcVector.x;
		this->y = srcVector.y;
		this->z = srcVector.z;
		this->w = srcVector.w;
		//(*this).x;
		return *this;
	}
	//a+b
	//this +b
	vec4 vec4::operator +(const vec4& srcVector) const
	{
		//this->x sau se poate si x ca e union clasa si publica
		vec4 rez;
		rez.x = x + srcVector.x;
		rez.y = y + srcVector.y;
		rez.z = z + srcVector.z;
		rez.w = w + srcVector.w;
		return rez;

	}
	vec4& vec4::operator +=(const vec4& srcVector) {
		x += srcVector.x;
		y += srcVector.y;
		z += srcVector.z;
		w += srcVector.w;
		return *this;
	}
	vec4 vec4::operator *(float scalarValue) const {
		vec4 rez;
		rez.x = x * scalarValue;
		rez.y = y * scalarValue;
		rez.z = z * scalarValue;
		rez.w = w * scalarValue;
		return rez;

	}
	vec4 vec4::operator -(const vec4& srcVector) const {
		vec4 rez;
		rez.x = x - srcVector.x;
		rez.y = y - srcVector.y;
		rez.z = z - srcVector.z;
		rez.w = w - srcVector.w;
		return rez;
	}
	vec4& vec4::operator -=(const vec4& srcVector) {
		x -= srcVector.x;
		y -= srcVector.y;
		z -= srcVector.z;
		w -= srcVector.w;
		return *this;
	}
	vec4 vec4::operator -() const {
		vec4 rez;
		rez.x = -x;
		rez.y = -y;
		rez.z = -z;
		rez.w = -w;
		return rez;
	}
	float vec4::length() const {
		return(sqrt(this->x * this->x + this->y * this->y + this->z * this->z + this->w * this->w));
	}
	vec4& vec4::normalize() {
		float length = vec4::length();
		this->x /= length;
		this->y /= length;
		this->z /= length;
		this->w /= length;
		return *this;
		//sau asa this->x/=this->length();
	}
}
