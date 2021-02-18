#ifndef _ALGO_TOP_H_
#define _ALGO_TOP_H_

#include <iostream>
#include "ap_int.h"
#include "ap_utils.h"

#define CRYSTAL_IN_PHI 20
#define CRYSTAL_IN_ETA 17
#define TOTAL_CLUSTER 5
typedef ap_uint<5> loop;

using namespace std;

class crystal{
    public:
    ap_uint<10> energy;
    ap_uint<5> phiMax;
    ap_uint<5> etaMax;


    crystal(){
        energy = 0;
        phiMax = 0;
        etaMax = 0;
    }
    crystal& operator=(const crystal& rhs){
    	energy = rhs.energy;
    	phiMax = rhs.phiMax;
    	etaMax = rhs.etaMax;
    	return *this;
    }
};

class cluster{
    public:
    ap_uint<10> seedEnergy;
    ap_uint<15> energy;
    ap_uint<15> et5x5;
    ap_uint<15> et2x5;
    ap_uint<5> phiMax;
    ap_uint<5> etaMax;
    ap_uint<2> brems;


    cluster(){
        seedEnergy = 0;
        energy = 0;
        et5x5 = 0;
        et2x5 = 0;
        phiMax = 0;
        etaMax = 0;
        brems = 0;
    }
    cluster& operator=(const cluster& rhs){
    	seedEnergy = rhs.seedEnergy;
    	energy = rhs.energy;
    	et5x5 = rhs.et5x5;
    	et2x5 = rhs.et2x5;
    	phiMax = rhs.phiMax;
    	etaMax = rhs.etaMax;
    	brems = rhs.brems;
    	return *this;
    }
};

void algo_top(ap_uint<10> etaStrip[CRYSTAL_IN_ETA+4][CRYSTAL_IN_PHI+4], ap_uint<15> clusterStrip[TOTAL_CLUSTER]);

typedef struct {
    ap_uint<10> energy;
    ap_uint<5> phi;
    ap_uint<5> eta;
} ecaltp_t ;

typedef struct {
ecaltp_t cr0;
ecaltp_t cr1 ;
ecaltp_t cr2 ;
ecaltp_t cr3 ;
ecaltp_t cr4 ;
ecaltp_t cr5 ;
ecaltp_t cr6 ;
ecaltp_t cr7 ;
ecaltp_t cr8 ;
ecaltp_t cr9 ;
ecaltp_t cr10 ;
ecaltp_t cr11 ;
ecaltp_t cr12 ;
ecaltp_t cr13 ;
ecaltp_t cr14 ;
ecaltp_t cr15 ;
ecaltp_t cr16 ;
ecaltp_t cr17 ;
ecaltp_t cr18 ;
ecaltp_t cr19 ;
} etaStrip_t ;

typedef struct {
etaStrip_t etaStrip0 ;
etaStrip_t etaStrip1 ;
etaStrip_t etaStrip2 ;
etaStrip_t etaStrip3 ;
etaStrip_t etaStrip4 ;
etaStrip_t etaStrip5 ;
etaStrip_t etaStrip6 ;
etaStrip_t etaStrip7 ;
etaStrip_t etaStrip8 ;
etaStrip_t etaStrip9 ;
etaStrip_t etaStrip10 ;
etaStrip_t etaStrip11 ;
etaStrip_t etaStrip12 ;
etaStrip_t etaStrip13 ;
etaStrip_t etaStrip14 ;
etaStrip_t etaStrip15 ;
etaStrip_t etaStrip16 ;
} ecalRegion_t ;

typedef struct {
ecaltp_t pk0;
ecaltp_t pk1;
ecaltp_t pk2;
ecaltp_t pk3;
ecaltp_t pk4;
ecaltp_t pk5;
ecaltp_t pk6;
ecaltp_t pk7;
ecaltp_t pk8;
ecaltp_t pk9;
ecaltp_t pk10;
ecaltp_t pk11;
ecaltp_t pk12;
ecaltp_t pk13;
ecaltp_t pk14;
ecaltp_t pk15;
ecaltp_t pk16;
} etaStripPeak_t ;

typedef struct {
ap_uint<10> et;
ap_uint<6> fb;
ap_uint<3> novere;
ap_uint<1> satur;
} tower_t ;

typedef struct {
tower_t tower0 ;
tower_t tower1 ;
tower_t tower2 ;
tower_t tower3 ;
tower_t tower4 ;
tower_t tower5 ;
tower_t tower6 ;
tower_t tower7 ;
tower_t tower8 ;
tower_t tower9 ;
tower_t tower10 ;
tower_t tower11 ;
cluster cluster0 ;
cluster cluster1 ;
cluster cluster2 ;
cluster cluster3 ;
cluster cluster4 ;
} region3x4_t ;


#endif
