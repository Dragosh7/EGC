#include "mat3.h"
#include "mat4.h"
#include "vec2.h"
#include "vec3.h"
#include "vec4.h"
#include "transform.h"
namespace egc {

    //transformation matrices in 2D
    mat3 translate(const vec2 translateArray) {
        mat3 x;
        x.at(0, 0) = 1;
        x.at(0, 1) = 0;
        x.at(0, 2) = translateArray.x;
        x.at(1, 0) = 0;
        x.at(1, 1) = 1;
        x.at(1, 2) = translateArray.y;
        x.at(2, 0) = 0;
        x.at(2, 1) = 0;
        x.at(2, 2) = 1;
        return x;

    }
    mat3 translate(float tx, float ty) {
        mat3 x;
        x.at(0, 0) = 1;
        x.at(0, 1) = 0;
        x.at(0, 2) = tx;
        x.at(1, 0) = 0;
        x.at(1, 1) = 1;
        x.at(1, 2) = ty;
        x.at(2, 0) = 0;
        x.at(2, 1) = 0;
        x.at(2, 2) = 1;
        return x;
    }

    mat3 scale(const vec2 scaleArray) {
        mat3 x;
        x.at(0, 0) = scaleArray.x;
        x.at(0, 1) = 0;
        x.at(0, 2) = 0;
        x.at(1, 0) = 0;
        x.at(1, 1) = scaleArray.y;
        x.at(1, 2) = 0;
        x.at(2, 0) = 0;
        x.at(2, 1) = 0;
        x.at(2, 2) = 1;
        return x;
    }
    mat3 scale(float sx, float sy) {
        mat3 x;
        x.at(0, 0) = sx;
        x.at(0, 1) = 0;
        x.at(0, 2) = 0;
        x.at(1, 0) = 0;
        x.at(1, 1) = sy;
        x.at(1, 2) = 0;
        x.at(2, 0) = 0;
        x.at(2, 1) = 0;
        x.at(2, 2) = 1;
        return x;
    }

    mat3 rotate(float angle) {
        mat3 x;
        float degree = angle *( PI/180 );
        x.at(0, 0) = cos(degree);
        x.at(0, 1) = -sin(degree);
        x.at(0, 2) = 0;
        x.at(1, 0) = sin(degree);
        x.at(1, 1) = cos(degree);
        x.at(1, 2) = 0;
        x.at(2, 0) = 0;
        x.at(2, 1) = 0;
        x.at(2, 2) = 1;
        return x;
    }

    //transformation matrices in 3D
    mat4 translate(const vec3 translateArray) {
        mat4 x=mat4();
        x.at(0, 3) = translateArray.x;
        x.at(1, 3) = translateArray.y;
        x.at(2, 3) = translateArray.z;
        return x;
        
    }
    mat4 translate(float tx, float ty, float tz)
    {
        mat4 x = mat4();
        x.at(0, 3) = tx;
        x.at(1, 3) = ty;
        x.at(2, 3) = tz;
        return x;
    }

    mat4 scale(const vec3 scaleArray) {
        mat4 x = mat4();
        x.at(0, 0) = scaleArray.x;
        x.at(1, 1) = scaleArray.y;
        x.at(2, 2) = scaleArray.z;
        return x;
    }
    mat4 scale(float sx, float sy, float sz) {
        mat4 x = mat4();
        x.at(0, 0) = sx;
        x.at(1, 1) = sy;
        x.at(2, 2) = sz;
        return x;
    }

    mat4 rotateX(float angle) {
        mat4 x = mat4();
        float degree = angle * (PI / 180);
        x.at(1, 1) = cos(degree);
        x.at(1, 2) = -sin(degree);
        x.at(2, 1) = sin(degree);
        x.at(2, 2) = cos(degree);
        return x;
    }
    mat4 rotateY(float angle) {
        mat4 x = mat4();
        float degree = angle * (PI / 180);
        x.at(0, 0) = cos(degree);
        x.at(0, 2) = sin(degree);
        x.at(2, 0) = -sin(degree);
        x.at(2, 2) = cos(degree);
        return x;
    }
    mat4 rotateZ(float angle) {
        mat4 x = mat4();
        float degree = angle * (PI / 180);
        x.at(0, 0) = cos(degree);
        x.at(0, 1) = -sin(degree);
        x.at(1, 0) = sin(degree);
        x.at(1, 1) = cos(degree);
        return x;
    }
}