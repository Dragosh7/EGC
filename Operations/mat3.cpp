#include "mat3.h"
#include "vec3.h"

namespace egc {
    /*float& mat3::at(int i, int j) {
        return (this->matrixData[3 * j + i]);
    }
    mat3& mat3::operator =(const mat3& srcMatrix) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                this->at(i, j) = srcMatrix.at(i, j);
            }
        }
            
        return *this;
    }
   mat3  mat3::operator *(float scalarValue) const {
       mat3 tmp;
       for (int i = 0; i < 3; i++) {
           for (int j = 0; j < 3; j++) {
               tmp.at(i, j) = this->at(i, j) * scalarValue;
           }
       }
       return tmp;

    }
   mat3 mat3::operator *(const mat3& srcMatrix) const {
       mat3 tmp;
       for (int i = 0; i < 3; i++) {
           for (int j = 0; j < 3; j++) {
               for (int m = 0; m < 3; m++) {
                   tmp.at(i, j) += this->at(i, m) * srcMatrix.at(m, j);
               }
           }
       }
       return tmp;


    }
   vec3 mat3::operator *(const vec3& srcVector) const {
       vec3 tmp;
       for (int i = 0; i < 3; i++) {
          
               tmp.x += this->at(0, i) * srcVector.x;
               tmp.y += this->at(1, i) * srcVector.y;
               tmp.z += this->at(2, i) * srcVector.z;
           
       }
       return tmp;
    }
    mat3 mat3::operator +(const mat3& srcMatrix) const
    {
        mat3 tmp;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {

                tmp.at(i,j) += this->at(j, i) + srcMatrix.at(i,j);
                
            }
        }
        return tmp;


    }
    const float& mat3::at(int i, int j) const {
        return (this->matrixData[3 * j + i]);
    }
    float mat3::determinant() const {
        float tmp=0;
        tmp += this->at(0, 0) * (this->at(1, 1) * this->at(2, 2) - this->at(2, 1) * this->at(1, 2));
        tmp += this->at(0, 1) * (this->at(1, 0) * this->at(2, 2) - this->at(2, 0) * this->at(1, 2));
        tmp += this->at(0, 2) * (this->at(1, 0) * this->at(2, 1) - this->at(1, 1) * this->at(2, 0));
        return tmp;
    }*/

    float& mat3::at(int i, int j) {
        return this->matrixData[3 * j + i];
    }
    const float& mat3::at(int i, int j) const {
        return this->matrixData[3 * j + i];

    }
    mat3& mat3::operator =(const mat3& srcMatrix) {
        for (int i = 0; i < 9; i++)
        {
            this->matrixData[i] = srcMatrix.matrixData[i];
        }
        return *this;
    }
    mat3  mat3::operator *(float scalarValue) const {
        mat3 rez;
        for (int i = 0; i < 9; i++)
        {
            rez.matrixData[i] = this->matrixData[i] * scalarValue;
        }
        return rez;
    }
    mat3  mat3::operator *(const mat3& srcMatrix) const {
        mat3 rez;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
            {
                float sum = 0;
                for (int k = 0; k < 3; k++)
                {
                    sum = sum + this->at(i, k) * srcMatrix.at(k, j);
                }
                rez.at(i, j) = sum;
            }
        }
        return rez;
    }
    vec3  mat3::operator *(const vec3& srcVector) const {
        vec3 rez;
        for (int i = 0; i < 3; i++) {
            rez.x += this->at(0, i) * srcVector.x;
        }
        for (int i = 0; i < 3; i++) {
            rez.y += this->at(1, i) * srcVector.y;
        }
        for (int i = 0; i < 3; i++) {
            rez.z += this->at(2, i) * srcVector.z;
        }
        return rez;
    }
    mat3  mat3::operator +(const mat3& srcMatrix) const {
        mat3 rez;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                rez.at(i, j) = srcMatrix.at(i, j) + this->at(i, j);
            }
        }
        return rez;
    }
    float  mat3::determinant() const {
        return this->at(0, 0) * ((this->at(1, 1) * this->at(2, 2)) - (this->at(1, 2) * this->at(2, 1))) - this->at(0, 1) * ((this->at(1, 0) * this->at(2, 2)) - (this->at(1, 2) * this->at(2, 0))) + this->at(0, 2) * ((this->at(1, 0) * this->at(2, 1)) - (this->at(1, 1) * this->at(2, 0)));
    }

    mat3 mat3::inverse() const{
    
        mat3 tmp;
        return tmp;
    }
    mat3 mat3::transpose() const{
        mat3 tmp;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                tmp.at(i, j) = this->at(j, i);
            }
        }
        return tmp;


    }
	
}
