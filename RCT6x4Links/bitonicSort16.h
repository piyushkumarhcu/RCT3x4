#ifndef _BITONICSORT16_H_
#define _BITONICSORT16_H_

#include <iostream>
#include "ap_int.h"
#include "algo_top.h"
#define N 16

using namespace std;

typedef ap_uint<6> dloop_t;

class GreaterSmaller{
public:
    Cluster greater, smaller;
};

void bitonicSort16(Cluster in[N], Cluster out[N]);

#endif

