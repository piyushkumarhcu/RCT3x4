#include "algo_top.h"
#include <cstdlib>

int main(){
    ap_uint<10> etaStrip[CRYSTAL_IN_ETA+4][CRYSTAL_IN_PHI+4];
    for(int i=0; i<CRYSTAL_IN_ETA+4; i++){
    	for(int j=0; j<CRYSTAL_IN_PHI+4; j++){
    		etaStrip[i][j] = 0;    	}
    }
    ap_uint<15> clusterStrip[TOTAL_CLUSTER];

    srand((unsigned)time(0));


    for(int i=1; i<CRYSTAL_IN_ETA+3; i++){
        for(int j=2; j<CRYSTAL_IN_PHI+2; j++){
//            etaStrip[i][j] = (rand() % 400)+1;
            etaStrip[i][j] = i*23+j;
 
        }
    }

    algo_top(etaStrip, clusterStrip);

    for(int i=0; i<TOTAL_CLUSTER; i++){
        cout << clusterStrip[i] << endl;
    }

    return 0;
}
