#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray{
public:
    ray(const point3& origin, const point3& dir): orig(origin), dir(dir) {}

    const point3& origin() const { return this->orig; }
    const vec3& direction() const { return this->dir; }

    point3 at(double t) const {
        return orig + t*dir;
    }

private:
    point3 orig;
    vec3 dir;
};

#endif