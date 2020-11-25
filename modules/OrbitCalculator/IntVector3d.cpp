#include "IntVector3d.h"


    void IntVector3d::_bind_methods(){

    }
    
    IntVector3d::IntVector3d(){
    x = 0;
    y = 0;
    z = 0;
    }

    IntVector3d::IntVector3d(const int& x, const int& y,const int& z ){
        this->x = x;
        this->y = y;
        this->z = z;

    }


    IntVector3d::IntVector3d(const int arr[3]){

        x = arr[0];
        x = arr[1];
        x = arr[2];
        delete[] arr;
    }

    IntVector3d::IntVector3d(const int *arr[3]){

        x = *arr[0];
        x = *arr[1];
        x = *arr[2];
        delete[] arr;
    }

    IntVector3d::IntVector3d(const int all){
        
        y = all;
        x = all;
        z = all;

        
    }

    IntVector3d::IntVector3d(const IntVector3d &vec){
        this->x = vec.x;
        this->y = vec.y;
        this->z = vec.z;
    }
    int IntVector3d::get_x(){

        return x;
    }

    int IntVector3d::get_y(){

        return y;
    }

    int IntVector3d::get_z(){

        return z;
    }

    IntVector3d IntVector3d::duplicate(){

        return IntVector3d(this->x,this->y,this->z);
    }

    IntVector3d IntVector3d::operator-(const IntVector3d &vec){

        return IntVector3d(x-vec.x,y-vec.y,z-vec.z);
    }

    IntVector3d IntVector3d::operator+(const IntVector3d &vec){
        return IntVector3d(this->x + vec.x,this->y + vec.y, this->z + vec.z);
    }

    IntVector3d IntVector3d::operator*(const IntVector3d &vec){

        return IntVector3d(x*vec.x,y*vec.y,z*vec.z);
    }

    IntVector3d IntVector3d::operator*(const int &value){
        return IntVector3d(x*value,y*value,z*value);
    }

    IntVector3d IntVector3d::operator/(const IntVector3d &vec){
        int xr,yr,zr;
        if (0 == vec.x) {
            xr = x;
            //system("Color 04");
                    //std::cout << "ILLEGAL DIVISION RETURNING ORIGINAL VALUE" << std::endl;
            //system("Color 07");
           }
        else {
           //std::cout << "LEGAL DIVISION" << std::endl;
           xr = x/vec.x;
        }


        if (0 == vec.y) {
            yr = y;
            //system("Color 04");
                    //std::cout << "ILLEGAL DIVISION RETURNING ORIGINAL VALUE" << std::endl;
            //system("Color 07");
            }
        else {
           //std::cout << "LEGAL DIVISION" << std::endl;
            yr = y/vec.y;
        }


        if (0 == vec.z) { 
            zr = z;
            //system("Color 04");
                    //std::cout << "ILLEGAL DIVISION RETURNING ORIGINAL VALUE" << std::endl;
            //system("Color 07");
        }
        else {

           //std::cout << "LEGAL DIVISION" << std::endl;
            zr = z/vec.z;
        }
        return IntVector3d(xr,yr,zr);
    }

    IntVector3d IntVector3d::operator/(const int &value){

        return IntVector3d(x/value,y/value,z/value);
    }

    IntVector3d IntVector3d::operator+=(const IntVector3d &vec){
        return IntVector3d(*this + vec);
    }

    IntVector3d IntVector3d::operator-=(const IntVector3d &vec){
        return IntVector3d(*this - vec);
    }

    IntVector3d IntVector3d::operator/=(const IntVector3d &vec){
        return IntVector3d(*this / vec);
    }

    IntVector3d IntVector3d::operator*=(const IntVector3d &vec){
        return IntVector3d(*this * vec);
    }
