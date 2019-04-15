/*************************************************************************
	> File Name: frenet_path.h
	> Author: TAI Lei
	> Mail: ltai@ust.hk
	> Created Time: Tue Apr  9 17:08:22 2019
 ************************************************************************/

#ifndef _FRENET_PATH_H
#define _FRENET_PATH_H

#include <iostream>
#include <vector>
#include <array>
#include <string>

using Vec_f=std::vector<float>;

class FrenetPath{
	public:
		float cd = 0.0;
		float cv = 0.0; 
		float cf = 0.0;

		Vec_f t;		 
		Vec_f d;		 
		Vec_f d_d;		 
		Vec_f d_dd;		 
		Vec_f d_ddd;		 
		Vec_f s;
		Vec_f s_d;
		Vec_f s_dd;
		Vec_f s_ddd;

		Vec_f x;
		Vec_f y;
		Vec_f yaw;
		Vec_f ds;
		Vec_f c;
};

#endif