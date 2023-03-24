#include "vec2.h"

namespace egc {
	//v1=v2
	vec3& vec3::operator =(const vec3& srcVector) {

		this->x = srcVector.x;
		this->y = srcVector.y;
		this->z = srcVector.z;
		//(*this).x;
		return *this;
	}
	//a+b
	//this +b
	vec3 vec3::operator +(const vec3& srcVector) const
	{
		//this->x sau se poate si x ca e union clasa si publica
		vec3 rez;
		rez.x = x + srcVector.x;
		rez.y = y + srcVector.y;
		rez.z = z + srcVector.z;
		return rez;

	}
	vec3& vec3::operator +=(const vec3& srcVector) {
		x += srcVector.x;
		y += srcVector.y;
		z += srcVector.z;
		return *this;
	}
	vec3 vec3::operator *(float scalarValue) const {
		vec3 rez;
		rez.x = x * scalarValue;
		rez.y = y * scalarValue;
		rez.z = z * scalarValue;
		return rez;

	}
	vec3 vec3::operator -(const vec3& srcVector) const {
		vec3 rez;
		rez.x = x - srcVector.x;
		rez.y = y - srcVector.y;
		rez.z = z - srcVector.z;
		return rez;
	}
	vec3& vec3::operator -=(const vec3& srcVector) {
		x -= srcVector.x;
		y -= srcVector.y;
		z -= srcVector.z;
		return *this;
	}
	vec3 vec3::operator -() const {
		vec3 rez;
		rez.x = -x;
		rez.y = -y;
		rez.z = -z;
		return rez;
	}
	float vec3::length() const {
		return(sqrt(this->x * this->x + this->y * this->y + this->z * this->z));
	}
	vec3& vec3::normalize() {
		float length = vec3::length();
		this->x /= length;
		this->y /= length;
		this->z /= length;
		return *this;
		//sau asa this->x/=this->length();
	}
	float dotProduct(const vec3& v1, const vec3& v2) {
		return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
	}
	vec3 crossProduct(const vec3& v1, const vec3& v2) {
		vec3 tmp;
		tmp.x = v1.y * v2.z - v1.z * v2.y;
		tmp.y = v1.z * v2.x - v1.x * v2.z;
		tmp.z = v1.x * v2.y - v1.y * v2.x;
		return tmp;
	}
}
