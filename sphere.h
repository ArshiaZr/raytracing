#ifndef SPHERE_H
#define SPHERE_H

#include "hittable.h"
#include "vec3.h"

class sphere : public hittable{
public:
    sphere(const point3& center, double radius) : center(center), radius(fmax(0,radius)) {}

    bool hit(const ray& r, interval ray_t, hit_record& rec) const override{
        vec3 oc = center - r.origin();
        auto a = r.direction().length_squared();
        auto h = dot(r.direction(), oc);
        auto c = oc.length_squared() - radius*radius;

        auto discriminant = h*h - a*c;
        if (discriminant < 0)
            return false;

        auto sqrtd = sqrt(discriminant);

        auto root = (h - sqrtd) / a;
        if(root <= ray_t.min || ray_t.max <= root){
            root = (h + sqrtd) / a;
            if(root <= ray_t.min || ray_t.max <= root){
                return false;
            }
        }

        rec.t = root;
        rec.p = r.at(root);
        rec.set_face_normal(r, (rec.p - center) / radius);

        return true;
    }

private:
    point3 center;
    double radius;
};

#endif