#ifndef INTVECTOR3D_H
#define INTVECTOR3D_H
#include <iostream>
#include "core/io/resource.h"


class IntVector3d : public Resource
{
    GDCLASS(IntVector3d, Resource);

protected:
    static void _bind_methods();

    public:

    int x = 0;
    int y = 0;
    int z  = 0;

    IntVector3d();
    IntVector3d(const int& x, const int& y,const int& z = 0);
    IntVector3d(const int arr[3]);
    IntVector3d(const int *arr[3]);
    IntVector3d(const int all);
    IntVector3d(const IntVector3d &vec);


    int get_x();
    int get_y();
    int get_z();

    IntVector3d duplicate();

    IntVector3d operator-(const IntVector3d &vec);
    IntVector3d operator+(const IntVector3d &vec);
    IntVector3d operator*(const IntVector3d &vec);
    IntVector3d operator*(const int &value);
    IntVector3d operator/(const IntVector3d &vec);
    IntVector3d operator/(const int &value);
    IntVector3d operator+=(const IntVector3d &vec);
    IntVector3d operator-=(const IntVector3d &vec);
    IntVector3d operator/=(const IntVector3d &vec);
    IntVector3d operator*=(const IntVector3d &vec);
    // void operator=(const IntVector3d &vec){
    //     this ->x = vec.x;
    //     this ->y = vec.y;
    //     this ->z = vec.z;

    // }
    friend std::ostream& operator<<(std::ostream& os, const IntVector3d& vec);

    friend std::ostream& operator<<(std::ostream& os, const IntVector3d& vec){

        return  os << " x : " << vec.x << " y : " << vec.y << "z : "<< vec.z;
    }
};

#endif