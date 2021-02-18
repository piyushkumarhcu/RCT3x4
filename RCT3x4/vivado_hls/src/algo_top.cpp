#include "algo_top.h"


ecalRegion_t initStructure(ap_uint<10> temporary[CRYSTAL_IN_ETA+4][CRYSTAL_IN_PHI+4]){

#pragma HLS ARRAY_PARTITION variable=temporary complete dim=0
#pragma HLS PIPELINE II=6

ap_uint<5> Phi = 2 ;
ap_uint<5> Eta = 2 ;

ecalRegion_t out ;

out.etaStrip0.cr0.energy=temporary[Eta+0][Phi+0]; out.etaStrip0.cr0.eta=0; out.etaStrip0.cr0.phi=0;
out.etaStrip0.cr1.energy=temporary[Eta+0][Phi+1]; out.etaStrip0.cr1.eta=0; out.etaStrip0.cr1.phi=1;
out.etaStrip0.cr2.energy=temporary[Eta+0][Phi+2]; out.etaStrip0.cr2.eta=0; out.etaStrip0.cr2.phi=2;
out.etaStrip0.cr3.energy=temporary[Eta+0][Phi+3]; out.etaStrip0.cr3.eta=0; out.etaStrip0.cr3.phi=3;
out.etaStrip0.cr4.energy=temporary[Eta+0][Phi+4]; out.etaStrip0.cr4.eta=0; out.etaStrip0.cr4.phi=4;
out.etaStrip0.cr5.energy=temporary[Eta+0][Phi+5]; out.etaStrip0.cr5.eta=0; out.etaStrip0.cr5.phi=5;
out.etaStrip0.cr6.energy=temporary[Eta+0][Phi+6]; out.etaStrip0.cr6.eta=0; out.etaStrip0.cr6.phi=6;
out.etaStrip0.cr7.energy=temporary[Eta+0][Phi+7]; out.etaStrip0.cr7.eta=0; out.etaStrip0.cr7.phi=7;
out.etaStrip0.cr8.energy=temporary[Eta+0][Phi+8]; out.etaStrip0.cr8.eta=0; out.etaStrip0.cr8.phi=8;
out.etaStrip0.cr9.energy=temporary[Eta+0][Phi+9]; out.etaStrip0.cr9.eta=0; out.etaStrip0.cr9.phi=9;
out.etaStrip0.cr10.energy=temporary[Eta+0][Phi+10]; out.etaStrip0.cr10.eta=0; out.etaStrip0.cr10.phi=10;
out.etaStrip0.cr11.energy=temporary[Eta+0][Phi+11]; out.etaStrip0.cr11.eta=0; out.etaStrip0.cr11.phi=11;
out.etaStrip0.cr12.energy=temporary[Eta+0][Phi+12]; out.etaStrip0.cr12.eta=0; out.etaStrip0.cr12.phi=12;
out.etaStrip0.cr13.energy=temporary[Eta+0][Phi+13]; out.etaStrip0.cr13.eta=0; out.etaStrip0.cr13.phi=13;
out.etaStrip0.cr14.energy=temporary[Eta+0][Phi+14]; out.etaStrip0.cr14.eta=0; out.etaStrip0.cr14.phi=14;
out.etaStrip0.cr15.energy=temporary[Eta+0][Phi+15]; out.etaStrip0.cr15.eta=0; out.etaStrip0.cr15.phi=15;
out.etaStrip0.cr16.energy=temporary[Eta+0][Phi+16]; out.etaStrip0.cr16.eta=0; out.etaStrip0.cr16.phi=16;
out.etaStrip0.cr17.energy=temporary[Eta+0][Phi+17]; out.etaStrip0.cr17.eta=0; out.etaStrip0.cr17.phi=17;
out.etaStrip0.cr18.energy=temporary[Eta+0][Phi+18]; out.etaStrip0.cr18.eta=0; out.etaStrip0.cr18.phi=18;
out.etaStrip0.cr19.energy=temporary[Eta+0][Phi+19]; out.etaStrip0.cr19.eta=0; out.etaStrip0.cr19.phi=19;

out.etaStrip1.cr0.energy=temporary[Eta+1][Phi+0]; out.etaStrip1.cr0.eta=1; out.etaStrip1.cr0.phi=0;
out.etaStrip1.cr1.energy=temporary[Eta+1][Phi+1]; out.etaStrip1.cr1.eta=1; out.etaStrip1.cr1.phi=1;
out.etaStrip1.cr2.energy=temporary[Eta+1][Phi+2]; out.etaStrip1.cr2.eta=1; out.etaStrip1.cr2.phi=2;
out.etaStrip1.cr3.energy=temporary[Eta+1][Phi+3]; out.etaStrip1.cr3.eta=1; out.etaStrip1.cr3.phi=3;
out.etaStrip1.cr4.energy=temporary[Eta+1][Phi+4]; out.etaStrip1.cr4.eta=1; out.etaStrip1.cr4.phi=4;
out.etaStrip1.cr5.energy=temporary[Eta+1][Phi+5]; out.etaStrip1.cr5.eta=1; out.etaStrip1.cr5.phi=5;
out.etaStrip1.cr6.energy=temporary[Eta+1][Phi+6]; out.etaStrip1.cr6.eta=1; out.etaStrip1.cr6.phi=6;
out.etaStrip1.cr7.energy=temporary[Eta+1][Phi+7]; out.etaStrip1.cr7.eta=1; out.etaStrip1.cr7.phi=7;
out.etaStrip1.cr8.energy=temporary[Eta+1][Phi+8]; out.etaStrip1.cr8.eta=1; out.etaStrip1.cr8.phi=8;
out.etaStrip1.cr9.energy=temporary[Eta+1][Phi+9]; out.etaStrip1.cr9.eta=1; out.etaStrip1.cr9.phi=9;
out.etaStrip1.cr10.energy=temporary[Eta+1][Phi+10]; out.etaStrip1.cr10.eta=1; out.etaStrip1.cr10.phi=10;
out.etaStrip1.cr11.energy=temporary[Eta+1][Phi+11]; out.etaStrip1.cr11.eta=1; out.etaStrip1.cr11.phi=11;
out.etaStrip1.cr12.energy=temporary[Eta+1][Phi+12]; out.etaStrip1.cr12.eta=1; out.etaStrip1.cr12.phi=12;
out.etaStrip1.cr13.energy=temporary[Eta+1][Phi+13]; out.etaStrip1.cr13.eta=1; out.etaStrip1.cr13.phi=13;
out.etaStrip1.cr14.energy=temporary[Eta+1][Phi+14]; out.etaStrip1.cr14.eta=1; out.etaStrip1.cr14.phi=14;
out.etaStrip1.cr15.energy=temporary[Eta+1][Phi+15]; out.etaStrip1.cr15.eta=1; out.etaStrip1.cr15.phi=15;
out.etaStrip1.cr16.energy=temporary[Eta+1][Phi+16]; out.etaStrip1.cr16.eta=1; out.etaStrip1.cr16.phi=16;
out.etaStrip1.cr17.energy=temporary[Eta+1][Phi+17]; out.etaStrip1.cr17.eta=1; out.etaStrip1.cr17.phi=17;
out.etaStrip1.cr18.energy=temporary[Eta+1][Phi+18]; out.etaStrip1.cr18.eta=1; out.etaStrip1.cr18.phi=18;
out.etaStrip1.cr19.energy=temporary[Eta+1][Phi+19]; out.etaStrip1.cr19.eta=1; out.etaStrip1.cr19.phi=19;

out.etaStrip2.cr0.energy=temporary[Eta+2][Phi+0]; out.etaStrip2.cr0.eta=2; out.etaStrip2.cr0.phi=0;
out.etaStrip2.cr1.energy=temporary[Eta+2][Phi+1]; out.etaStrip2.cr1.eta=2; out.etaStrip2.cr1.phi=1;
out.etaStrip2.cr2.energy=temporary[Eta+2][Phi+2]; out.etaStrip2.cr2.eta=2; out.etaStrip2.cr2.phi=2;
out.etaStrip2.cr3.energy=temporary[Eta+2][Phi+3]; out.etaStrip2.cr3.eta=2; out.etaStrip2.cr3.phi=3;
out.etaStrip2.cr4.energy=temporary[Eta+2][Phi+4]; out.etaStrip2.cr4.eta=2; out.etaStrip2.cr4.phi=4;
out.etaStrip2.cr5.energy=temporary[Eta+2][Phi+5]; out.etaStrip2.cr5.eta=2; out.etaStrip2.cr5.phi=5;
out.etaStrip2.cr6.energy=temporary[Eta+2][Phi+6]; out.etaStrip2.cr6.eta=2; out.etaStrip2.cr6.phi=6;
out.etaStrip2.cr7.energy=temporary[Eta+2][Phi+7]; out.etaStrip2.cr7.eta=2; out.etaStrip2.cr7.phi=7;
out.etaStrip2.cr8.energy=temporary[Eta+2][Phi+8]; out.etaStrip2.cr8.eta=2; out.etaStrip2.cr8.phi=8;
out.etaStrip2.cr9.energy=temporary[Eta+2][Phi+9]; out.etaStrip2.cr9.eta=2; out.etaStrip2.cr9.phi=9;
out.etaStrip2.cr10.energy=temporary[Eta+2][Phi+10]; out.etaStrip2.cr10.eta=2; out.etaStrip2.cr10.phi=10;
out.etaStrip2.cr11.energy=temporary[Eta+2][Phi+11]; out.etaStrip2.cr11.eta=2; out.etaStrip2.cr11.phi=11;
out.etaStrip2.cr12.energy=temporary[Eta+2][Phi+12]; out.etaStrip2.cr12.eta=2; out.etaStrip2.cr12.phi=12;
out.etaStrip2.cr13.energy=temporary[Eta+2][Phi+13]; out.etaStrip2.cr13.eta=2; out.etaStrip2.cr13.phi=13;
out.etaStrip2.cr14.energy=temporary[Eta+2][Phi+14]; out.etaStrip2.cr14.eta=2; out.etaStrip2.cr14.phi=14;
out.etaStrip2.cr15.energy=temporary[Eta+2][Phi+15]; out.etaStrip2.cr15.eta=2; out.etaStrip2.cr15.phi=15;
out.etaStrip2.cr16.energy=temporary[Eta+2][Phi+16]; out.etaStrip2.cr16.eta=2; out.etaStrip2.cr16.phi=16;
out.etaStrip2.cr17.energy=temporary[Eta+2][Phi+17]; out.etaStrip2.cr17.eta=2; out.etaStrip2.cr17.phi=17;
out.etaStrip2.cr18.energy=temporary[Eta+2][Phi+18]; out.etaStrip2.cr18.eta=2; out.etaStrip2.cr18.phi=18;
out.etaStrip2.cr19.energy=temporary[Eta+2][Phi+19]; out.etaStrip2.cr19.eta=2; out.etaStrip2.cr19.phi=19;

out.etaStrip3.cr0.energy=temporary[Eta+3][Phi+0]; out.etaStrip3.cr0.eta=3; out.etaStrip3.cr0.phi=0;
out.etaStrip3.cr1.energy=temporary[Eta+3][Phi+1]; out.etaStrip3.cr1.eta=3; out.etaStrip3.cr1.phi=1;
out.etaStrip3.cr2.energy=temporary[Eta+3][Phi+2]; out.etaStrip3.cr2.eta=3; out.etaStrip3.cr2.phi=2;
out.etaStrip3.cr3.energy=temporary[Eta+3][Phi+3]; out.etaStrip3.cr3.eta=3; out.etaStrip3.cr3.phi=3;
out.etaStrip3.cr4.energy=temporary[Eta+3][Phi+4]; out.etaStrip3.cr4.eta=3; out.etaStrip3.cr4.phi=4;
out.etaStrip3.cr5.energy=temporary[Eta+3][Phi+5]; out.etaStrip3.cr5.eta=3; out.etaStrip3.cr5.phi=5;
out.etaStrip3.cr6.energy=temporary[Eta+3][Phi+6]; out.etaStrip3.cr6.eta=3; out.etaStrip3.cr6.phi=6;
out.etaStrip3.cr7.energy=temporary[Eta+3][Phi+7]; out.etaStrip3.cr7.eta=3; out.etaStrip3.cr7.phi=7;
out.etaStrip3.cr8.energy=temporary[Eta+3][Phi+8]; out.etaStrip3.cr8.eta=3; out.etaStrip3.cr8.phi=8;
out.etaStrip3.cr9.energy=temporary[Eta+3][Phi+9]; out.etaStrip3.cr9.eta=3; out.etaStrip3.cr9.phi=9;
out.etaStrip3.cr10.energy=temporary[Eta+3][Phi+10]; out.etaStrip3.cr10.eta=3; out.etaStrip3.cr10.phi=10;
out.etaStrip3.cr11.energy=temporary[Eta+3][Phi+11]; out.etaStrip3.cr11.eta=3; out.etaStrip3.cr11.phi=11;
out.etaStrip3.cr12.energy=temporary[Eta+3][Phi+12]; out.etaStrip3.cr12.eta=3; out.etaStrip3.cr12.phi=12;
out.etaStrip3.cr13.energy=temporary[Eta+3][Phi+13]; out.etaStrip3.cr13.eta=3; out.etaStrip3.cr13.phi=13;
out.etaStrip3.cr14.energy=temporary[Eta+3][Phi+14]; out.etaStrip3.cr14.eta=3; out.etaStrip3.cr14.phi=14;
out.etaStrip3.cr15.energy=temporary[Eta+3][Phi+15]; out.etaStrip3.cr15.eta=3; out.etaStrip3.cr15.phi=15;
out.etaStrip3.cr16.energy=temporary[Eta+3][Phi+16]; out.etaStrip3.cr16.eta=3; out.etaStrip3.cr16.phi=16;
out.etaStrip3.cr17.energy=temporary[Eta+3][Phi+17]; out.etaStrip3.cr17.eta=3; out.etaStrip3.cr17.phi=17;
out.etaStrip3.cr18.energy=temporary[Eta+3][Phi+18]; out.etaStrip3.cr18.eta=3; out.etaStrip3.cr18.phi=18;
out.etaStrip3.cr19.energy=temporary[Eta+3][Phi+19]; out.etaStrip3.cr19.eta=3; out.etaStrip3.cr19.phi=19;


out.etaStrip4.cr0.energy=temporary[Eta+4][Phi+0]; out.etaStrip4.cr0.eta=4; out.etaStrip4.cr0.phi=0;
out.etaStrip4.cr1.energy=temporary[Eta+4][Phi+1]; out.etaStrip4.cr1.eta=4; out.etaStrip4.cr1.phi=1;
out.etaStrip4.cr2.energy=temporary[Eta+4][Phi+2]; out.etaStrip4.cr2.eta=4; out.etaStrip4.cr2.phi=2;
out.etaStrip4.cr3.energy=temporary[Eta+4][Phi+3]; out.etaStrip4.cr3.eta=4; out.etaStrip4.cr3.phi=3;
out.etaStrip4.cr4.energy=temporary[Eta+4][Phi+4]; out.etaStrip4.cr4.eta=4; out.etaStrip4.cr4.phi=4;
out.etaStrip4.cr5.energy=temporary[Eta+4][Phi+5]; out.etaStrip4.cr5.eta=4; out.etaStrip4.cr5.phi=5;
out.etaStrip4.cr6.energy=temporary[Eta+4][Phi+6]; out.etaStrip4.cr6.eta=4; out.etaStrip4.cr6.phi=6;
out.etaStrip4.cr7.energy=temporary[Eta+4][Phi+7]; out.etaStrip4.cr7.eta=4; out.etaStrip4.cr7.phi=7;
out.etaStrip4.cr8.energy=temporary[Eta+4][Phi+8]; out.etaStrip4.cr8.eta=4; out.etaStrip4.cr8.phi=8;
out.etaStrip4.cr9.energy=temporary[Eta+4][Phi+9]; out.etaStrip4.cr9.eta=4; out.etaStrip4.cr9.phi=9;
out.etaStrip4.cr10.energy=temporary[Eta+4][Phi+10]; out.etaStrip4.cr10.eta=4; out.etaStrip4.cr10.phi=10;
out.etaStrip4.cr11.energy=temporary[Eta+4][Phi+11]; out.etaStrip4.cr11.eta=4; out.etaStrip4.cr11.phi=11;
out.etaStrip4.cr12.energy=temporary[Eta+4][Phi+12]; out.etaStrip4.cr12.eta=4; out.etaStrip4.cr12.phi=12;
out.etaStrip4.cr13.energy=temporary[Eta+4][Phi+13]; out.etaStrip4.cr13.eta=4; out.etaStrip4.cr13.phi=13;
out.etaStrip4.cr14.energy=temporary[Eta+4][Phi+14]; out.etaStrip4.cr14.eta=4; out.etaStrip4.cr14.phi=14;
out.etaStrip4.cr15.energy=temporary[Eta+4][Phi+15]; out.etaStrip4.cr15.eta=4; out.etaStrip4.cr15.phi=15;
out.etaStrip4.cr16.energy=temporary[Eta+4][Phi+16]; out.etaStrip4.cr16.eta=4; out.etaStrip4.cr16.phi=16;
out.etaStrip4.cr17.energy=temporary[Eta+4][Phi+17]; out.etaStrip4.cr17.eta=4; out.etaStrip4.cr17.phi=17;
out.etaStrip4.cr18.energy=temporary[Eta+4][Phi+18]; out.etaStrip4.cr18.eta=4; out.etaStrip4.cr18.phi=18;
out.etaStrip4.cr19.energy=temporary[Eta+4][Phi+19]; out.etaStrip4.cr19.eta=4; out.etaStrip4.cr19.phi=19;

out.etaStrip5.cr0.energy=temporary[Eta+5][Phi+0]; out.etaStrip5.cr0.eta=5; out.etaStrip5.cr0.phi=0;
out.etaStrip5.cr1.energy=temporary[Eta+5][Phi+1]; out.etaStrip5.cr1.eta=5; out.etaStrip5.cr1.phi=1;
out.etaStrip5.cr2.energy=temporary[Eta+5][Phi+2]; out.etaStrip5.cr2.eta=5; out.etaStrip5.cr2.phi=2;
out.etaStrip5.cr3.energy=temporary[Eta+5][Phi+3]; out.etaStrip5.cr3.eta=5; out.etaStrip5.cr3.phi=3;
out.etaStrip5.cr4.energy=temporary[Eta+5][Phi+4]; out.etaStrip5.cr4.eta=5; out.etaStrip5.cr4.phi=4;
out.etaStrip5.cr5.energy=temporary[Eta+5][Phi+5]; out.etaStrip5.cr5.eta=5; out.etaStrip5.cr5.phi=5;
out.etaStrip5.cr6.energy=temporary[Eta+5][Phi+6]; out.etaStrip5.cr6.eta=5; out.etaStrip5.cr6.phi=6;
out.etaStrip5.cr7.energy=temporary[Eta+5][Phi+7]; out.etaStrip5.cr7.eta=5; out.etaStrip5.cr7.phi=7;
out.etaStrip5.cr8.energy=temporary[Eta+5][Phi+8]; out.etaStrip5.cr8.eta=5; out.etaStrip5.cr8.phi=8;
out.etaStrip5.cr9.energy=temporary[Eta+5][Phi+9]; out.etaStrip5.cr9.eta=5; out.etaStrip5.cr9.phi=9;
out.etaStrip5.cr10.energy=temporary[Eta+5][Phi+10]; out.etaStrip5.cr10.eta=5; out.etaStrip5.cr10.phi=10;
out.etaStrip5.cr11.energy=temporary[Eta+5][Phi+11]; out.etaStrip5.cr11.eta=5; out.etaStrip5.cr11.phi=11;
out.etaStrip5.cr12.energy=temporary[Eta+5][Phi+12]; out.etaStrip5.cr12.eta=5; out.etaStrip5.cr12.phi=12;
out.etaStrip5.cr13.energy=temporary[Eta+5][Phi+13]; out.etaStrip5.cr13.eta=5; out.etaStrip5.cr13.phi=13;
out.etaStrip5.cr14.energy=temporary[Eta+5][Phi+14]; out.etaStrip5.cr14.eta=5; out.etaStrip5.cr14.phi=14;
out.etaStrip5.cr15.energy=temporary[Eta+5][Phi+15]; out.etaStrip5.cr15.eta=5; out.etaStrip5.cr15.phi=15;
out.etaStrip5.cr16.energy=temporary[Eta+5][Phi+16]; out.etaStrip5.cr16.eta=5; out.etaStrip5.cr16.phi=16;
out.etaStrip5.cr17.energy=temporary[Eta+5][Phi+17]; out.etaStrip5.cr17.eta=5; out.etaStrip5.cr17.phi=17;
out.etaStrip5.cr18.energy=temporary[Eta+5][Phi+18]; out.etaStrip5.cr18.eta=5; out.etaStrip5.cr18.phi=18;
out.etaStrip5.cr19.energy=temporary[Eta+5][Phi+19]; out.etaStrip5.cr19.eta=5; out.etaStrip5.cr19.phi=19;

out.etaStrip6.cr0.energy=temporary[Eta+6][Phi+0]; out.etaStrip6.cr0.eta=6; out.etaStrip6.cr0.phi=0;
out.etaStrip6.cr1.energy=temporary[Eta+6][Phi+1]; out.etaStrip6.cr1.eta=6; out.etaStrip6.cr1.phi=1;
out.etaStrip6.cr2.energy=temporary[Eta+6][Phi+2]; out.etaStrip6.cr2.eta=6; out.etaStrip6.cr2.phi=2;
out.etaStrip6.cr3.energy=temporary[Eta+6][Phi+3]; out.etaStrip6.cr3.eta=6; out.etaStrip6.cr3.phi=3;
out.etaStrip6.cr4.energy=temporary[Eta+6][Phi+4]; out.etaStrip6.cr4.eta=6; out.etaStrip6.cr4.phi=4;
out.etaStrip6.cr5.energy=temporary[Eta+6][Phi+5]; out.etaStrip6.cr5.eta=6; out.etaStrip6.cr5.phi=5;
out.etaStrip6.cr6.energy=temporary[Eta+6][Phi+6]; out.etaStrip6.cr6.eta=6; out.etaStrip6.cr6.phi=6;
out.etaStrip6.cr7.energy=temporary[Eta+6][Phi+7]; out.etaStrip6.cr7.eta=6; out.etaStrip6.cr7.phi=7;
out.etaStrip6.cr8.energy=temporary[Eta+6][Phi+8]; out.etaStrip6.cr8.eta=6; out.etaStrip6.cr8.phi=8;
out.etaStrip6.cr9.energy=temporary[Eta+6][Phi+9]; out.etaStrip6.cr9.eta=6; out.etaStrip6.cr9.phi=9;
out.etaStrip6.cr10.energy=temporary[Eta+6][Phi+10]; out.etaStrip6.cr10.eta=6; out.etaStrip6.cr10.phi=10;
out.etaStrip6.cr11.energy=temporary[Eta+6][Phi+11]; out.etaStrip6.cr11.eta=6; out.etaStrip6.cr11.phi=11;
out.etaStrip6.cr12.energy=temporary[Eta+6][Phi+12]; out.etaStrip6.cr12.eta=6; out.etaStrip6.cr12.phi=12;
out.etaStrip6.cr13.energy=temporary[Eta+6][Phi+13]; out.etaStrip6.cr13.eta=6; out.etaStrip6.cr13.phi=13;
out.etaStrip6.cr14.energy=temporary[Eta+6][Phi+14]; out.etaStrip6.cr14.eta=6; out.etaStrip6.cr14.phi=14;
out.etaStrip6.cr15.energy=temporary[Eta+6][Phi+15]; out.etaStrip6.cr15.eta=6; out.etaStrip6.cr15.phi=15;
out.etaStrip6.cr16.energy=temporary[Eta+6][Phi+16]; out.etaStrip6.cr16.eta=6; out.etaStrip6.cr16.phi=16;
out.etaStrip6.cr17.energy=temporary[Eta+6][Phi+17]; out.etaStrip6.cr17.eta=6; out.etaStrip6.cr17.phi=17;
out.etaStrip6.cr18.energy=temporary[Eta+6][Phi+18]; out.etaStrip6.cr18.eta=6; out.etaStrip6.cr18.phi=18;
out.etaStrip6.cr19.energy=temporary[Eta+6][Phi+19]; out.etaStrip6.cr19.eta=6; out.etaStrip6.cr19.phi=19;

out.etaStrip7.cr0.energy=temporary[Eta+7][Phi+0]; out.etaStrip7.cr0.eta=7; out.etaStrip7.cr0.phi=0;
out.etaStrip7.cr1.energy=temporary[Eta+7][Phi+1]; out.etaStrip7.cr1.eta=7; out.etaStrip7.cr1.phi=1;
out.etaStrip7.cr2.energy=temporary[Eta+7][Phi+2]; out.etaStrip7.cr2.eta=7; out.etaStrip7.cr2.phi=2;
out.etaStrip7.cr3.energy=temporary[Eta+7][Phi+3]; out.etaStrip7.cr3.eta=7; out.etaStrip7.cr3.phi=3;
out.etaStrip7.cr4.energy=temporary[Eta+7][Phi+4]; out.etaStrip7.cr4.eta=7; out.etaStrip7.cr4.phi=4;
out.etaStrip7.cr5.energy=temporary[Eta+7][Phi+5]; out.etaStrip7.cr5.eta=7; out.etaStrip7.cr5.phi=5;
out.etaStrip7.cr6.energy=temporary[Eta+7][Phi+6]; out.etaStrip7.cr6.eta=7; out.etaStrip7.cr6.phi=6;
out.etaStrip7.cr7.energy=temporary[Eta+7][Phi+7]; out.etaStrip7.cr7.eta=7; out.etaStrip7.cr7.phi=7;
out.etaStrip7.cr8.energy=temporary[Eta+7][Phi+8]; out.etaStrip7.cr8.eta=7; out.etaStrip7.cr8.phi=8;
out.etaStrip7.cr9.energy=temporary[Eta+7][Phi+9]; out.etaStrip7.cr9.eta=7; out.etaStrip7.cr9.phi=9;
out.etaStrip7.cr10.energy=temporary[Eta+7][Phi+10]; out.etaStrip7.cr10.eta=7; out.etaStrip7.cr10.phi=10;
out.etaStrip7.cr11.energy=temporary[Eta+7][Phi+11]; out.etaStrip7.cr11.eta=7; out.etaStrip7.cr11.phi=11;
out.etaStrip7.cr12.energy=temporary[Eta+7][Phi+12]; out.etaStrip7.cr12.eta=7; out.etaStrip7.cr12.phi=12;
out.etaStrip7.cr13.energy=temporary[Eta+7][Phi+13]; out.etaStrip7.cr13.eta=7; out.etaStrip7.cr13.phi=13;
out.etaStrip7.cr14.energy=temporary[Eta+7][Phi+14]; out.etaStrip7.cr14.eta=7; out.etaStrip7.cr14.phi=14;
out.etaStrip7.cr15.energy=temporary[Eta+7][Phi+15]; out.etaStrip7.cr15.eta=7; out.etaStrip7.cr15.phi=15;
out.etaStrip7.cr16.energy=temporary[Eta+7][Phi+16]; out.etaStrip7.cr16.eta=7; out.etaStrip7.cr16.phi=16;
out.etaStrip7.cr17.energy=temporary[Eta+7][Phi+17]; out.etaStrip7.cr17.eta=7; out.etaStrip7.cr17.phi=17;
out.etaStrip7.cr18.energy=temporary[Eta+7][Phi+18]; out.etaStrip7.cr18.eta=7; out.etaStrip7.cr18.phi=18;
out.etaStrip7.cr19.energy=temporary[Eta+7][Phi+19]; out.etaStrip7.cr19.eta=7; out.etaStrip7.cr19.phi=19;

out.etaStrip8.cr0.energy=temporary[Eta+8][Phi+0]; out.etaStrip8.cr0.eta=8; out.etaStrip8.cr0.phi=0;
out.etaStrip8.cr1.energy=temporary[Eta+8][Phi+1]; out.etaStrip8.cr1.eta=8; out.etaStrip8.cr1.phi=1;
out.etaStrip8.cr2.energy=temporary[Eta+8][Phi+2]; out.etaStrip8.cr2.eta=8; out.etaStrip8.cr2.phi=2;
out.etaStrip8.cr3.energy=temporary[Eta+8][Phi+3]; out.etaStrip8.cr3.eta=8; out.etaStrip8.cr3.phi=3;
out.etaStrip8.cr4.energy=temporary[Eta+8][Phi+4]; out.etaStrip8.cr4.eta=8; out.etaStrip8.cr4.phi=4;
out.etaStrip8.cr5.energy=temporary[Eta+8][Phi+5]; out.etaStrip8.cr5.eta=8; out.etaStrip8.cr5.phi=5;
out.etaStrip8.cr6.energy=temporary[Eta+8][Phi+6]; out.etaStrip8.cr6.eta=8; out.etaStrip8.cr6.phi=6;
out.etaStrip8.cr7.energy=temporary[Eta+8][Phi+7]; out.etaStrip8.cr7.eta=8; out.etaStrip8.cr7.phi=7;
out.etaStrip8.cr8.energy=temporary[Eta+8][Phi+8]; out.etaStrip8.cr8.eta=8; out.etaStrip8.cr8.phi=8;
out.etaStrip8.cr9.energy=temporary[Eta+8][Phi+9]; out.etaStrip8.cr9.eta=8; out.etaStrip8.cr9.phi=9;
out.etaStrip8.cr10.energy=temporary[Eta+8][Phi+10]; out.etaStrip8.cr10.eta=8; out.etaStrip8.cr10.phi=10;
out.etaStrip8.cr11.energy=temporary[Eta+8][Phi+11]; out.etaStrip8.cr11.eta=8; out.etaStrip8.cr11.phi=11;
out.etaStrip8.cr12.energy=temporary[Eta+8][Phi+12]; out.etaStrip8.cr12.eta=8; out.etaStrip8.cr12.phi=12;
out.etaStrip8.cr13.energy=temporary[Eta+8][Phi+13]; out.etaStrip8.cr13.eta=8; out.etaStrip8.cr13.phi=13;
out.etaStrip8.cr14.energy=temporary[Eta+8][Phi+14]; out.etaStrip8.cr14.eta=8; out.etaStrip8.cr14.phi=14;
out.etaStrip8.cr15.energy=temporary[Eta+8][Phi+15]; out.etaStrip8.cr15.eta=8; out.etaStrip8.cr15.phi=15;
out.etaStrip8.cr16.energy=temporary[Eta+8][Phi+16]; out.etaStrip8.cr16.eta=8; out.etaStrip8.cr16.phi=16;
out.etaStrip8.cr17.energy=temporary[Eta+8][Phi+17]; out.etaStrip8.cr17.eta=8; out.etaStrip8.cr17.phi=17;
out.etaStrip8.cr18.energy=temporary[Eta+8][Phi+18]; out.etaStrip8.cr18.eta=8; out.etaStrip8.cr18.phi=18;
out.etaStrip8.cr19.energy=temporary[Eta+8][Phi+19]; out.etaStrip8.cr19.eta=8; out.etaStrip8.cr19.phi=19;

out.etaStrip9.cr0.energy=temporary[Eta+9][Phi+0]; out.etaStrip9.cr0.eta=9; out.etaStrip9.cr0.phi=0;
out.etaStrip9.cr1.energy=temporary[Eta+9][Phi+1]; out.etaStrip9.cr1.eta=9; out.etaStrip9.cr1.phi=1;
out.etaStrip9.cr2.energy=temporary[Eta+9][Phi+2]; out.etaStrip9.cr2.eta=9; out.etaStrip9.cr2.phi=2;
out.etaStrip9.cr3.energy=temporary[Eta+9][Phi+3]; out.etaStrip9.cr3.eta=9; out.etaStrip9.cr3.phi=3;
out.etaStrip9.cr4.energy=temporary[Eta+9][Phi+4]; out.etaStrip9.cr4.eta=9; out.etaStrip9.cr4.phi=4;
out.etaStrip9.cr5.energy=temporary[Eta+9][Phi+5]; out.etaStrip9.cr5.eta=9; out.etaStrip9.cr5.phi=5;
out.etaStrip9.cr6.energy=temporary[Eta+9][Phi+6]; out.etaStrip9.cr6.eta=9; out.etaStrip9.cr6.phi=6;
out.etaStrip9.cr7.energy=temporary[Eta+9][Phi+7]; out.etaStrip9.cr7.eta=9; out.etaStrip9.cr7.phi=7;
out.etaStrip9.cr8.energy=temporary[Eta+9][Phi+8]; out.etaStrip9.cr8.eta=9; out.etaStrip9.cr8.phi=8;
out.etaStrip9.cr9.energy=temporary[Eta+9][Phi+9]; out.etaStrip9.cr9.eta=9; out.etaStrip9.cr9.phi=9;
out.etaStrip9.cr10.energy=temporary[Eta+9][Phi+10]; out.etaStrip9.cr10.eta=9; out.etaStrip9.cr10.phi=10;
out.etaStrip9.cr11.energy=temporary[Eta+9][Phi+11]; out.etaStrip9.cr11.eta=9; out.etaStrip9.cr11.phi=11;
out.etaStrip9.cr12.energy=temporary[Eta+9][Phi+12]; out.etaStrip9.cr12.eta=9; out.etaStrip9.cr12.phi=12;
out.etaStrip9.cr13.energy=temporary[Eta+9][Phi+13]; out.etaStrip9.cr13.eta=9; out.etaStrip9.cr13.phi=13;
out.etaStrip9.cr14.energy=temporary[Eta+9][Phi+14]; out.etaStrip9.cr14.eta=9; out.etaStrip9.cr14.phi=14;
out.etaStrip9.cr15.energy=temporary[Eta+9][Phi+15]; out.etaStrip9.cr15.eta=9; out.etaStrip9.cr15.phi=15;
out.etaStrip9.cr16.energy=temporary[Eta+9][Phi+16]; out.etaStrip9.cr16.eta=9; out.etaStrip9.cr16.phi=16;
out.etaStrip9.cr17.energy=temporary[Eta+9][Phi+17]; out.etaStrip9.cr17.eta=9; out.etaStrip9.cr17.phi=17;
out.etaStrip9.cr18.energy=temporary[Eta+9][Phi+18]; out.etaStrip9.cr18.eta=9; out.etaStrip9.cr18.phi=18;
out.etaStrip9.cr19.energy=temporary[Eta+9][Phi+19]; out.etaStrip9.cr19.eta=9; out.etaStrip9.cr19.phi=19;

out.etaStrip10.cr0.energy=temporary[Eta+10][Phi+0]; out.etaStrip10.cr0.eta=10; out.etaStrip10.cr0.phi=0;
out.etaStrip10.cr1.energy=temporary[Eta+10][Phi+1]; out.etaStrip10.cr1.eta=10; out.etaStrip10.cr1.phi=1;
out.etaStrip10.cr2.energy=temporary[Eta+10][Phi+2]; out.etaStrip10.cr2.eta=10; out.etaStrip10.cr2.phi=2;
out.etaStrip10.cr3.energy=temporary[Eta+10][Phi+3]; out.etaStrip10.cr3.eta=10; out.etaStrip10.cr3.phi=3;
out.etaStrip10.cr4.energy=temporary[Eta+10][Phi+4]; out.etaStrip10.cr4.eta=10; out.etaStrip10.cr4.phi=4;
out.etaStrip10.cr5.energy=temporary[Eta+10][Phi+5]; out.etaStrip10.cr5.eta=10; out.etaStrip10.cr5.phi=5;
out.etaStrip10.cr6.energy=temporary[Eta+10][Phi+6]; out.etaStrip10.cr6.eta=10; out.etaStrip10.cr6.phi=6;
out.etaStrip10.cr7.energy=temporary[Eta+10][Phi+7]; out.etaStrip10.cr7.eta=10; out.etaStrip10.cr7.phi=7;
out.etaStrip10.cr8.energy=temporary[Eta+10][Phi+8]; out.etaStrip10.cr8.eta=10; out.etaStrip10.cr8.phi=8;
out.etaStrip10.cr9.energy=temporary[Eta+10][Phi+9]; out.etaStrip10.cr9.eta=10; out.etaStrip10.cr9.phi=9;
out.etaStrip10.cr10.energy=temporary[Eta+10][Phi+10]; out.etaStrip10.cr10.eta=10; out.etaStrip10.cr10.phi=10;
out.etaStrip10.cr11.energy=temporary[Eta+10][Phi+11]; out.etaStrip10.cr11.eta=10; out.etaStrip10.cr11.phi=11;
out.etaStrip10.cr12.energy=temporary[Eta+10][Phi+12]; out.etaStrip10.cr12.eta=10; out.etaStrip10.cr12.phi=12;
out.etaStrip10.cr13.energy=temporary[Eta+10][Phi+13]; out.etaStrip10.cr13.eta=10; out.etaStrip10.cr13.phi=13;
out.etaStrip10.cr14.energy=temporary[Eta+10][Phi+14]; out.etaStrip10.cr14.eta=10; out.etaStrip10.cr14.phi=14;
out.etaStrip10.cr15.energy=temporary[Eta+10][Phi+15]; out.etaStrip10.cr15.eta=10; out.etaStrip10.cr15.phi=15;
out.etaStrip10.cr16.energy=temporary[Eta+10][Phi+16]; out.etaStrip10.cr16.eta=10; out.etaStrip10.cr16.phi=16;
out.etaStrip10.cr17.energy=temporary[Eta+10][Phi+17]; out.etaStrip10.cr17.eta=10; out.etaStrip10.cr17.phi=17;
out.etaStrip10.cr18.energy=temporary[Eta+10][Phi+18]; out.etaStrip10.cr18.eta=10; out.etaStrip10.cr18.phi=18;
out.etaStrip10.cr19.energy=temporary[Eta+10][Phi+19]; out.etaStrip10.cr19.eta=10; out.etaStrip10.cr19.phi=19;

out.etaStrip11.cr0.energy=temporary[Eta+11][Phi+0]; out.etaStrip11.cr0.eta=11; out.etaStrip11.cr0.phi=0;
out.etaStrip11.cr1.energy=temporary[Eta+11][Phi+1]; out.etaStrip11.cr1.eta=11; out.etaStrip11.cr1.phi=1;
out.etaStrip11.cr2.energy=temporary[Eta+11][Phi+2]; out.etaStrip11.cr2.eta=11; out.etaStrip11.cr2.phi=2;
out.etaStrip11.cr3.energy=temporary[Eta+11][Phi+3]; out.etaStrip11.cr3.eta=11; out.etaStrip11.cr3.phi=3;
out.etaStrip11.cr4.energy=temporary[Eta+11][Phi+4]; out.etaStrip11.cr4.eta=11; out.etaStrip11.cr4.phi=4;
out.etaStrip11.cr5.energy=temporary[Eta+11][Phi+5]; out.etaStrip11.cr5.eta=11; out.etaStrip11.cr5.phi=5;
out.etaStrip11.cr6.energy=temporary[Eta+11][Phi+6]; out.etaStrip11.cr6.eta=11; out.etaStrip11.cr6.phi=6;
out.etaStrip11.cr7.energy=temporary[Eta+11][Phi+7]; out.etaStrip11.cr7.eta=11; out.etaStrip11.cr7.phi=7;
out.etaStrip11.cr8.energy=temporary[Eta+11][Phi+8]; out.etaStrip11.cr8.eta=11; out.etaStrip11.cr8.phi=8;
out.etaStrip11.cr9.energy=temporary[Eta+11][Phi+9]; out.etaStrip11.cr9.eta=11; out.etaStrip11.cr9.phi=9;
out.etaStrip11.cr10.energy=temporary[Eta+11][Phi+10]; out.etaStrip11.cr10.eta=11; out.etaStrip11.cr10.phi=10;
out.etaStrip11.cr11.energy=temporary[Eta+11][Phi+11]; out.etaStrip11.cr11.eta=11; out.etaStrip11.cr11.phi=11;
out.etaStrip11.cr12.energy=temporary[Eta+11][Phi+12]; out.etaStrip11.cr12.eta=11; out.etaStrip11.cr12.phi=12;
out.etaStrip11.cr13.energy=temporary[Eta+11][Phi+13]; out.etaStrip11.cr13.eta=11; out.etaStrip11.cr13.phi=13;
out.etaStrip11.cr14.energy=temporary[Eta+11][Phi+14]; out.etaStrip11.cr14.eta=11; out.etaStrip11.cr14.phi=14;
out.etaStrip11.cr15.energy=temporary[Eta+11][Phi+15]; out.etaStrip11.cr15.eta=11; out.etaStrip11.cr15.phi=15;
out.etaStrip11.cr16.energy=temporary[Eta+11][Phi+16]; out.etaStrip11.cr16.eta=11; out.etaStrip11.cr16.phi=16;
out.etaStrip11.cr17.energy=temporary[Eta+11][Phi+17]; out.etaStrip11.cr17.eta=11; out.etaStrip11.cr17.phi=17;
out.etaStrip11.cr18.energy=temporary[Eta+11][Phi+18]; out.etaStrip11.cr18.eta=11; out.etaStrip11.cr18.phi=18;
out.etaStrip11.cr19.energy=temporary[Eta+11][Phi+19]; out.etaStrip11.cr19.eta=11; out.etaStrip11.cr19.phi=19;

out.etaStrip12.cr0.energy=temporary[Eta+12][Phi+0]; out.etaStrip12.cr0.eta=12; out.etaStrip12.cr0.phi=0;
out.etaStrip12.cr1.energy=temporary[Eta+12][Phi+1]; out.etaStrip12.cr1.eta=12; out.etaStrip12.cr1.phi=1;
out.etaStrip12.cr2.energy=temporary[Eta+12][Phi+2]; out.etaStrip12.cr2.eta=12; out.etaStrip12.cr2.phi=2;
out.etaStrip12.cr3.energy=temporary[Eta+12][Phi+3]; out.etaStrip12.cr3.eta=12; out.etaStrip12.cr3.phi=3;
out.etaStrip12.cr4.energy=temporary[Eta+12][Phi+4]; out.etaStrip12.cr4.eta=12; out.etaStrip12.cr4.phi=4;
out.etaStrip12.cr5.energy=temporary[Eta+12][Phi+5]; out.etaStrip12.cr5.eta=12; out.etaStrip12.cr5.phi=5;
out.etaStrip12.cr6.energy=temporary[Eta+12][Phi+6]; out.etaStrip12.cr6.eta=12; out.etaStrip12.cr6.phi=6;
out.etaStrip12.cr7.energy=temporary[Eta+12][Phi+7]; out.etaStrip12.cr7.eta=12; out.etaStrip12.cr7.phi=7;
out.etaStrip12.cr8.energy=temporary[Eta+12][Phi+8]; out.etaStrip12.cr8.eta=12; out.etaStrip12.cr8.phi=8;
out.etaStrip12.cr9.energy=temporary[Eta+12][Phi+9]; out.etaStrip12.cr9.eta=12; out.etaStrip12.cr9.phi=9;
out.etaStrip12.cr10.energy=temporary[Eta+12][Phi+10]; out.etaStrip12.cr10.eta=12; out.etaStrip12.cr10.phi=10;
out.etaStrip12.cr11.energy=temporary[Eta+12][Phi+11]; out.etaStrip12.cr11.eta=12; out.etaStrip12.cr11.phi=11;
out.etaStrip12.cr12.energy=temporary[Eta+12][Phi+12]; out.etaStrip12.cr12.eta=12; out.etaStrip12.cr12.phi=12;
out.etaStrip12.cr13.energy=temporary[Eta+12][Phi+13]; out.etaStrip12.cr13.eta=12; out.etaStrip12.cr13.phi=13;
out.etaStrip12.cr14.energy=temporary[Eta+12][Phi+14]; out.etaStrip12.cr14.eta=12; out.etaStrip12.cr14.phi=14;
out.etaStrip12.cr15.energy=temporary[Eta+12][Phi+15]; out.etaStrip12.cr15.eta=12; out.etaStrip12.cr15.phi=15;
out.etaStrip12.cr16.energy=temporary[Eta+12][Phi+16]; out.etaStrip12.cr16.eta=12; out.etaStrip12.cr16.phi=16;
out.etaStrip12.cr17.energy=temporary[Eta+12][Phi+17]; out.etaStrip12.cr17.eta=12; out.etaStrip12.cr17.phi=17;
out.etaStrip12.cr18.energy=temporary[Eta+12][Phi+18]; out.etaStrip12.cr18.eta=12; out.etaStrip12.cr18.phi=18;
out.etaStrip12.cr19.energy=temporary[Eta+12][Phi+19]; out.etaStrip12.cr19.eta=12; out.etaStrip12.cr19.phi=19;

out.etaStrip13.cr0.energy=temporary[Eta+13][Phi+0]; out.etaStrip13.cr0.eta=13; out.etaStrip13.cr0.phi=0;
out.etaStrip13.cr1.energy=temporary[Eta+13][Phi+1]; out.etaStrip13.cr1.eta=13; out.etaStrip13.cr1.phi=1;
out.etaStrip13.cr2.energy=temporary[Eta+13][Phi+2]; out.etaStrip13.cr2.eta=13; out.etaStrip13.cr2.phi=2;
out.etaStrip13.cr3.energy=temporary[Eta+13][Phi+3]; out.etaStrip13.cr3.eta=13; out.etaStrip13.cr3.phi=3;
out.etaStrip13.cr4.energy=temporary[Eta+13][Phi+4]; out.etaStrip13.cr4.eta=13; out.etaStrip13.cr4.phi=4;
out.etaStrip13.cr5.energy=temporary[Eta+13][Phi+5]; out.etaStrip13.cr5.eta=13; out.etaStrip13.cr5.phi=5;
out.etaStrip13.cr6.energy=temporary[Eta+13][Phi+6]; out.etaStrip13.cr6.eta=13; out.etaStrip13.cr6.phi=6;
out.etaStrip13.cr7.energy=temporary[Eta+13][Phi+7]; out.etaStrip13.cr7.eta=13; out.etaStrip13.cr7.phi=7;
out.etaStrip13.cr8.energy=temporary[Eta+13][Phi+8]; out.etaStrip13.cr8.eta=13; out.etaStrip13.cr8.phi=8;
out.etaStrip13.cr9.energy=temporary[Eta+13][Phi+9]; out.etaStrip13.cr9.eta=13; out.etaStrip13.cr9.phi=9;
out.etaStrip13.cr10.energy=temporary[Eta+13][Phi+10]; out.etaStrip13.cr10.eta=13; out.etaStrip13.cr10.phi=10;
out.etaStrip13.cr11.energy=temporary[Eta+13][Phi+11]; out.etaStrip13.cr11.eta=13; out.etaStrip13.cr11.phi=11;
out.etaStrip13.cr12.energy=temporary[Eta+13][Phi+12]; out.etaStrip13.cr12.eta=13; out.etaStrip13.cr12.phi=12;
out.etaStrip13.cr13.energy=temporary[Eta+13][Phi+13]; out.etaStrip13.cr13.eta=13; out.etaStrip13.cr13.phi=13;
out.etaStrip13.cr14.energy=temporary[Eta+13][Phi+14]; out.etaStrip13.cr14.eta=13; out.etaStrip13.cr14.phi=14;
out.etaStrip13.cr15.energy=temporary[Eta+13][Phi+15]; out.etaStrip13.cr15.eta=13; out.etaStrip13.cr15.phi=15;
out.etaStrip13.cr16.energy=temporary[Eta+13][Phi+16]; out.etaStrip13.cr16.eta=13; out.etaStrip13.cr16.phi=16;
out.etaStrip13.cr17.energy=temporary[Eta+13][Phi+17]; out.etaStrip13.cr17.eta=13; out.etaStrip13.cr17.phi=17;
out.etaStrip13.cr18.energy=temporary[Eta+13][Phi+18]; out.etaStrip13.cr18.eta=13; out.etaStrip13.cr18.phi=18;
out.etaStrip13.cr19.energy=temporary[Eta+13][Phi+19]; out.etaStrip13.cr19.eta=13; out.etaStrip13.cr19.phi=19;

out.etaStrip14.cr0.energy=temporary[Eta+14][Phi+0]; out.etaStrip14.cr0.eta=14; out.etaStrip14.cr0.phi=0;
out.etaStrip14.cr1.energy=temporary[Eta+14][Phi+1]; out.etaStrip14.cr1.eta=14; out.etaStrip14.cr1.phi=1;
out.etaStrip14.cr2.energy=temporary[Eta+14][Phi+2]; out.etaStrip14.cr2.eta=14; out.etaStrip14.cr2.phi=2;
out.etaStrip14.cr3.energy=temporary[Eta+14][Phi+3]; out.etaStrip14.cr3.eta=14; out.etaStrip14.cr3.phi=3;
out.etaStrip14.cr4.energy=temporary[Eta+14][Phi+4]; out.etaStrip14.cr4.eta=14; out.etaStrip14.cr4.phi=4;
out.etaStrip14.cr5.energy=temporary[Eta+14][Phi+5]; out.etaStrip14.cr5.eta=14; out.etaStrip14.cr5.phi=5;
out.etaStrip14.cr6.energy=temporary[Eta+14][Phi+6]; out.etaStrip14.cr6.eta=14; out.etaStrip14.cr6.phi=6;
out.etaStrip14.cr7.energy=temporary[Eta+14][Phi+7]; out.etaStrip14.cr7.eta=14; out.etaStrip14.cr7.phi=7;
out.etaStrip14.cr8.energy=temporary[Eta+14][Phi+8]; out.etaStrip14.cr8.eta=14; out.etaStrip14.cr8.phi=8;
out.etaStrip14.cr9.energy=temporary[Eta+14][Phi+9]; out.etaStrip14.cr9.eta=14; out.etaStrip14.cr9.phi=9;
out.etaStrip14.cr10.energy=temporary[Eta+14][Phi+10]; out.etaStrip14.cr10.eta=14; out.etaStrip14.cr10.phi=10;
out.etaStrip14.cr11.energy=temporary[Eta+14][Phi+11]; out.etaStrip14.cr11.eta=14; out.etaStrip14.cr11.phi=11;
out.etaStrip14.cr12.energy=temporary[Eta+14][Phi+12]; out.etaStrip14.cr12.eta=14; out.etaStrip14.cr12.phi=12;
out.etaStrip14.cr13.energy=temporary[Eta+14][Phi+13]; out.etaStrip14.cr13.eta=14; out.etaStrip14.cr13.phi=13;
out.etaStrip14.cr14.energy=temporary[Eta+14][Phi+14]; out.etaStrip14.cr14.eta=14; out.etaStrip14.cr14.phi=14;
out.etaStrip14.cr15.energy=temporary[Eta+14][Phi+15]; out.etaStrip14.cr15.eta=14; out.etaStrip14.cr15.phi=15;
out.etaStrip14.cr16.energy=temporary[Eta+14][Phi+16]; out.etaStrip14.cr16.eta=14; out.etaStrip14.cr16.phi=16;
out.etaStrip14.cr17.energy=temporary[Eta+14][Phi+17]; out.etaStrip14.cr17.eta=14; out.etaStrip14.cr17.phi=17;
out.etaStrip14.cr18.energy=temporary[Eta+14][Phi+18]; out.etaStrip14.cr18.eta=14; out.etaStrip14.cr18.phi=18;
out.etaStrip14.cr19.energy=temporary[Eta+14][Phi+19]; out.etaStrip14.cr19.eta=14; out.etaStrip14.cr19.phi=19;

out.etaStrip15.cr0.energy=temporary[Eta+15][Phi+0]; out.etaStrip15.cr0.eta=15; out.etaStrip15.cr0.phi=0;
out.etaStrip15.cr1.energy=temporary[Eta+15][Phi+1]; out.etaStrip15.cr1.eta=15; out.etaStrip15.cr1.phi=1;
out.etaStrip15.cr2.energy=temporary[Eta+15][Phi+2]; out.etaStrip15.cr2.eta=15; out.etaStrip15.cr2.phi=2;
out.etaStrip15.cr3.energy=temporary[Eta+15][Phi+3]; out.etaStrip15.cr3.eta=15; out.etaStrip15.cr3.phi=3;
out.etaStrip15.cr4.energy=temporary[Eta+15][Phi+4]; out.etaStrip15.cr4.eta=15; out.etaStrip15.cr4.phi=4;
out.etaStrip15.cr5.energy=temporary[Eta+15][Phi+5]; out.etaStrip15.cr5.eta=15; out.etaStrip15.cr5.phi=5;
out.etaStrip15.cr6.energy=temporary[Eta+15][Phi+6]; out.etaStrip15.cr6.eta=15; out.etaStrip15.cr6.phi=6;
out.etaStrip15.cr7.energy=temporary[Eta+15][Phi+7]; out.etaStrip15.cr7.eta=15; out.etaStrip15.cr7.phi=7;
out.etaStrip15.cr8.energy=temporary[Eta+15][Phi+8]; out.etaStrip15.cr8.eta=15; out.etaStrip15.cr8.phi=8;
out.etaStrip15.cr9.energy=temporary[Eta+15][Phi+9]; out.etaStrip15.cr9.eta=15; out.etaStrip15.cr9.phi=9;
out.etaStrip15.cr10.energy=temporary[Eta+15][Phi+10]; out.etaStrip15.cr10.eta=15; out.etaStrip15.cr10.phi=10;
out.etaStrip15.cr11.energy=temporary[Eta+15][Phi+11]; out.etaStrip15.cr11.eta=15; out.etaStrip15.cr11.phi=11;
out.etaStrip15.cr12.energy=temporary[Eta+15][Phi+12]; out.etaStrip15.cr12.eta=15; out.etaStrip15.cr12.phi=12;
out.etaStrip15.cr13.energy=temporary[Eta+15][Phi+13]; out.etaStrip15.cr13.eta=15; out.etaStrip15.cr13.phi=13;
out.etaStrip15.cr14.energy=temporary[Eta+15][Phi+14]; out.etaStrip15.cr14.eta=15; out.etaStrip15.cr14.phi=14;
out.etaStrip15.cr15.energy=temporary[Eta+15][Phi+15]; out.etaStrip15.cr15.eta=15; out.etaStrip15.cr15.phi=15;
out.etaStrip15.cr16.energy=temporary[Eta+15][Phi+16]; out.etaStrip15.cr16.eta=15; out.etaStrip15.cr16.phi=16;
out.etaStrip15.cr17.energy=temporary[Eta+15][Phi+17]; out.etaStrip15.cr17.eta=15; out.etaStrip15.cr17.phi=17;
out.etaStrip15.cr18.energy=temporary[Eta+15][Phi+18]; out.etaStrip15.cr18.eta=15; out.etaStrip15.cr18.phi=18;
out.etaStrip15.cr19.energy=temporary[Eta+15][Phi+19]; out.etaStrip15.cr19.eta=15; out.etaStrip15.cr19.phi=19;

out.etaStrip16.cr0.energy=temporary[Eta+16][Phi+0]; out.etaStrip16.cr0.eta=16; out.etaStrip16.cr0.phi=0;
out.etaStrip16.cr1.energy=temporary[Eta+16][Phi+1]; out.etaStrip16.cr1.eta=16; out.etaStrip16.cr1.phi=1;
out.etaStrip16.cr2.energy=temporary[Eta+16][Phi+2]; out.etaStrip16.cr2.eta=16; out.etaStrip16.cr2.phi=2;
out.etaStrip16.cr3.energy=temporary[Eta+16][Phi+3]; out.etaStrip16.cr3.eta=16; out.etaStrip16.cr3.phi=3;
out.etaStrip16.cr4.energy=temporary[Eta+16][Phi+4]; out.etaStrip16.cr4.eta=16; out.etaStrip16.cr4.phi=4;
out.etaStrip16.cr5.energy=temporary[Eta+16][Phi+5]; out.etaStrip16.cr5.eta=16; out.etaStrip16.cr5.phi=5;
out.etaStrip16.cr6.energy=temporary[Eta+16][Phi+6]; out.etaStrip16.cr6.eta=16; out.etaStrip16.cr6.phi=6;
out.etaStrip16.cr7.energy=temporary[Eta+16][Phi+7]; out.etaStrip16.cr7.eta=16; out.etaStrip16.cr7.phi=7;
out.etaStrip16.cr8.energy=temporary[Eta+16][Phi+8]; out.etaStrip16.cr8.eta=16; out.etaStrip16.cr8.phi=8;
out.etaStrip16.cr9.energy=temporary[Eta+16][Phi+9]; out.etaStrip16.cr9.eta=16; out.etaStrip16.cr9.phi=9;
out.etaStrip16.cr10.energy=temporary[Eta+16][Phi+10]; out.etaStrip16.cr10.eta=16; out.etaStrip16.cr10.phi=10;
out.etaStrip16.cr11.energy=temporary[Eta+16][Phi+11]; out.etaStrip16.cr11.eta=16; out.etaStrip16.cr11.phi=11;
out.etaStrip16.cr12.energy=temporary[Eta+16][Phi+12]; out.etaStrip16.cr12.eta=16; out.etaStrip16.cr12.phi=12;
out.etaStrip16.cr13.energy=temporary[Eta+16][Phi+13]; out.etaStrip16.cr13.eta=16; out.etaStrip16.cr13.phi=13;
out.etaStrip16.cr14.energy=temporary[Eta+16][Phi+14]; out.etaStrip16.cr14.eta=16; out.etaStrip16.cr14.phi=14;
out.etaStrip16.cr15.energy=temporary[Eta+16][Phi+15]; out.etaStrip16.cr15.eta=16; out.etaStrip16.cr15.phi=15;
out.etaStrip16.cr16.energy=temporary[Eta+16][Phi+16]; out.etaStrip16.cr16.eta=16; out.etaStrip16.cr16.phi=16;
out.etaStrip16.cr17.energy=temporary[Eta+16][Phi+17]; out.etaStrip16.cr17.eta=16; out.etaStrip16.cr17.phi=17;
out.etaStrip16.cr18.energy=temporary[Eta+16][Phi+18]; out.etaStrip16.cr18.eta=16; out.etaStrip16.cr18.phi=18;
out.etaStrip16.cr19.energy=temporary[Eta+16][Phi+19]; out.etaStrip16.cr19.eta=16; out.etaStrip16.cr19.phi=19;

return out ;
}


ecaltp_t bestOf2(const ecaltp_t& ecaltp0, const ecaltp_t& ecaltp1) {
 if (ecaltp0.energy > ecaltp1.energy)
   return ecaltp0 ;
 else
   return ecaltp1 ;
}


ecaltp_t getPeakBin20N(const etaStrip_t& etaStrip){

ecaltp_t best01 = bestOf2(etaStrip.cr0,etaStrip.cr1) ;
ecaltp_t best23 = bestOf2(etaStrip.cr2,etaStrip.cr3) ;
ecaltp_t best45 = bestOf2(etaStrip.cr4,etaStrip.cr5) ;
ecaltp_t best67 = bestOf2(etaStrip.cr6,etaStrip.cr7) ;
ecaltp_t best89 = bestOf2(etaStrip.cr8,etaStrip.cr9) ;
ecaltp_t best1011 = bestOf2(etaStrip.cr10,etaStrip.cr11) ;
ecaltp_t best1213 = bestOf2(etaStrip.cr12,etaStrip.cr13) ;
ecaltp_t best1415 = bestOf2(etaStrip.cr14,etaStrip.cr15) ;
ecaltp_t best1617 = bestOf2(etaStrip.cr16,etaStrip.cr17) ;
ecaltp_t best1819 = bestOf2(etaStrip.cr18,etaStrip.cr19) ;

ecaltp_t best0123 = bestOf2(best01,best23) ;
ecaltp_t best4567 = bestOf2(best45,best67) ;
ecaltp_t best891011 = bestOf2(best89,best1011) ;
ecaltp_t best12131415 = bestOf2(best1213,best1415) ;
ecaltp_t best16171819 = bestOf2(best1617,best1819) ;

ecaltp_t best01234567 = bestOf2(best0123,best4567) ;
ecaltp_t best89101112131415 = bestOf2(best891011,best12131415) ;

ecaltp_t best0to15 = bestOf2(best01234567,best89101112131415) ;
ecaltp_t bestOf20 = bestOf2(best0to15,best16171819) ;

return bestOf20 ;
}

crystal getPeakBin17N(const etaStripPeak_t& etaStrip){

crystal x;

ecaltp_t best01 = bestOf2(etaStrip.pk0,etaStrip.pk1) ;
ecaltp_t best23 = bestOf2(etaStrip.pk2,etaStrip.pk3) ;
ecaltp_t best45 = bestOf2(etaStrip.pk4,etaStrip.pk5) ;
ecaltp_t best67 = bestOf2(etaStrip.pk6,etaStrip.pk7) ;
ecaltp_t best89 = bestOf2(etaStrip.pk8,etaStrip.pk9) ;
ecaltp_t best1011 = bestOf2(etaStrip.pk10,etaStrip.pk11) ;
ecaltp_t best1213 = bestOf2(etaStrip.pk12,etaStrip.pk13) ;
ecaltp_t best1415 = bestOf2(etaStrip.pk14,etaStrip.pk15) ;

ecaltp_t best0123 = bestOf2(best01,best23) ;
ecaltp_t best4567 = bestOf2(best45,best67) ;
ecaltp_t best891011 = bestOf2(best89,best1011) ;
ecaltp_t best12131415 = bestOf2(best1213,best1415) ;

ecaltp_t best01234567 = bestOf2(best0123,best4567) ;
ecaltp_t best89101112131415 = bestOf2(best891011,best12131415) ;

ecaltp_t best0to15 = bestOf2(best01234567,best89101112131415) ;
ecaltp_t bestOf17 = bestOf2(best0to15,etaStrip.pk16) ;

        x.energy = bestOf17.energy ;
        x.etaMax = bestOf17.eta ;
        x.phiMax = bestOf17.phi ;

return x ;
}

cluster getClusterPosition(const ecalRegion_t& ecalRegion){
#pragma HLS PIPELINE II=6

        etaStripPeak_t etaStripPeak;
        cluster cluster ;

                etaStripPeak.pk0 = getPeakBin20N(ecalRegion.etaStrip0);
                etaStripPeak.pk1 = getPeakBin20N(ecalRegion.etaStrip1);
                etaStripPeak.pk2 = getPeakBin20N(ecalRegion.etaStrip2);
                etaStripPeak.pk3 = getPeakBin20N(ecalRegion.etaStrip3);
                etaStripPeak.pk4 = getPeakBin20N(ecalRegion.etaStrip4);
                etaStripPeak.pk5 = getPeakBin20N(ecalRegion.etaStrip5);
                etaStripPeak.pk6 = getPeakBin20N(ecalRegion.etaStrip6);
                etaStripPeak.pk7 = getPeakBin20N(ecalRegion.etaStrip7);
                etaStripPeak.pk8 = getPeakBin20N(ecalRegion.etaStrip8);
                etaStripPeak.pk9 = getPeakBin20N(ecalRegion.etaStrip9);
                etaStripPeak.pk10 = getPeakBin20N(ecalRegion.etaStrip10);
                etaStripPeak.pk11 = getPeakBin20N(ecalRegion.etaStrip11);
                etaStripPeak.pk12 = getPeakBin20N(ecalRegion.etaStrip12);
                etaStripPeak.pk13 = getPeakBin20N(ecalRegion.etaStrip13);
                etaStripPeak.pk14 = getPeakBin20N(ecalRegion.etaStrip14);
                etaStripPeak.pk15 = getPeakBin20N(ecalRegion.etaStrip15);
                etaStripPeak.pk16 = getPeakBin20N(ecalRegion.etaStrip16);


        crystal peakIn17;
        peakIn17 = getPeakBin17N(etaStripPeak);


        cluster.seedEnergy = peakIn17.energy ;
        cluster.energy = 0 ;
        cluster.etaMax = peakIn17.etaMax ;
        cluster.phiMax = peakIn17.phiMax ;
        cluster.brems = 0 ;
        cluster.et5x5 = 0 ;
        cluster.et2x5 = 0 ;

return cluster ;

}

region3x4_t getRegion3x4(ap_uint<10> temp[CRYSTAL_IN_ETA+4][CRYSTAL_IN_PHI+4]){
#pragma HLS ARRAY_PARTITION variable=temp complete dim=0
//#pragma HLS PIPELINE II=6

region3x4_t region3x4 ; 
ecalRegion_t ecalRegion ;
ecalRegion_t ecalRegion1 ;
cluster cluster_tmp ;

ap_uint<2> brems ;


        ap_uint<15> et[5][5], bremset1[5][5], bremset2[5][5] ;
#pragma HLS ARRAY_PARTITION variable=et complete dim=0
#pragma HLS ARRAY_PARTITION variable=bremset1 complete dim=0
#pragma HLS ARRAY_PARTITION variable=bremset2 complete dim=0

        ap_uint<15> etSum[5], etSumB1[5], etSumB2[5] ;
#pragma HLS ARRAY_PARTITION variable=etSum complete dim=0
#pragma HLS ARRAY_PARTITION variable=etSumB1 complete dim=0
#pragma HLS ARRAY_PARTITION variable=etSumB2 complete dim=0

        ap_uint<15> etSum5x5[5], etSum2x5_1[5], etSum2x5_2[5] ;
#pragma HLS ARRAY_PARTITION variable=etSum5x5 complete dim=0
#pragma HLS ARRAY_PARTITION variable=etSum2x5_1 complete dim=0
#pragma HLS ARRAY_PARTITION variable=etSum2x5_2 complete dim=0

        ap_uint<15> BremsE1, BremsE2 ;
        ap_uint<15> et2x5_1Tot, et2x5_2Tot, etSum2x5 ;
        ap_uint<15> et5x5Tot ;

        
        for(loop j=0; j<5; j++){

        ecalRegion = initStructure(temp) ;

        cluster_tmp = getClusterPosition(ecalRegion) ;



//        ap_uint<5> seed_phiRegion = cluster_tmp.phiMax ;
//        we need to add 2 since we have position in 17x20 but 21x24 in array
        ap_uint<5> seed_phi = cluster_tmp.phiMax+2 ;

//        ap_uint<5> seed_etaRegion = cluster_tmp.etaMax ;
        ap_uint<5> seed_eta = cluster_tmp.etaMax+2 ;


        for(loop i=0; i<5; i++){
                        #pragma HLS UNROLL
           for(loop k=0; k<5; k++){
                        #pragma HLS UNROLL
           et[i][k] = temp[seed_eta+i-2][seed_phi+k-2];
           ap_uint<5> seedPhi1 = seed_phi+k-2-5 ;
           ap_uint<5> seedPhi2 = seed_phi+k-2+5 ;
           if( seedPhi1 >= 0 && seedPhi1 < CRYSTAL_IN_PHI+4) bremset1[i][k]=temp[seed_eta+i-2][seedPhi1] ;
           else bremset1[i][k] = 0 ;
           if( seedPhi2 >= 0 && seedPhi2 < CRYSTAL_IN_PHI+4) bremset1[i][k]=temp[seed_eta+i-2][seedPhi2] ;
           else bremset2[i][k] = 0 ;

        }}

        for(loop k=0; k<5; k++){
                        #pragma HLS UNROLL
           etSum[k] = 0 ; etSumB1[k]=0 ; etSumB2[k]=0;
           for(loop i=1; i<4; i++){
           etSum[k]=etSum[k]+et[i][k] ;
           etSumB1[k]=etSumB1[k]+bremset1[i][k] ;
           etSumB2[k]=etSumB2[k]+bremset2[i][k] ;
        }}

         cluster_tmp.energy=etSum[0]+etSum[1]+etSum[2]+etSum[3]+etSum[4] ;
         BremsE1=etSumB1[0]+etSumB1[1]+etSumB1[2]+etSumB1[3]+etSumB1[4] ;
         BremsE2=etSumB2[0]+etSumB2[1]+etSumB2[2]+etSumB2[3]+etSumB2[4] ;


         if(BremsE1 > cluster_tmp.energy/8 && BremsE1 > BremsE2) {
            cluster_tmp.energy = cluster_tmp.energy + BremsE1 ; cluster_tmp.brems = 1 ;}
         else if(BremsE2 > cluster_tmp.energy/8){
            cluster_tmp.energy = cluster_tmp.energy + BremsE2 ; cluster_tmp.brems = 2 ;}

        for(loop k=0; k<5; k++){
                        #pragma HLS UNROLL
           etSum5x5[k] = 0 ; etSum2x5_1[k]=0 ; etSum2x5_2[k]=0;
           for(loop i=0; i<5; i++){
           etSum5x5[k]=etSum5x5[k]+et[i][k] ;}
           for(loop i=1; i<3; i++){
           etSum2x5_1[k]=etSum2x5_1[k]+et[i][k] ;}
           for(loop i=2; i<4; i++){
           etSum2x5_2[k]=etSum2x5_2[k]+et[i][k] ;}
         }

          et5x5Tot = etSum5x5[0]+etSum5x5[1]+etSum5x5[2]+etSum5x5[3]+etSum5x5[4] ;
          et2x5_1Tot = etSum2x5_1[1]+etSum2x5_1[2] ;
          et2x5_2Tot = etSum2x5_2[2]+etSum2x5_2[3] ;

          if(et2x5_1Tot >= et2x5_2Tot) etSum2x5 = et2x5_1Tot ;
          else etSum2x5 = et2x5_2Tot ;

          cluster_tmp.et5x5 = et5x5Tot ;
          cluster_tmp.et2x5 = etSum2x5 ;

// here we start to reset temp and this is the problem
// when we try to call it next time to create cluster
// it says too complicated tor me to pipeline
//
/*
        for(loop i=0; i<3; i++){
                        #pragma HLS UNROLL
           for(loop k=0; k<5; k++){
                        #pragma HLS UNROLL
              temp[seed_eta+i-1][seed_phi+k-2] = 0 ;
         }}
*/
        for(loop i=0; i<CRYSTAL_IN_ETA+4; i++){
                        #pragma HLS UNROLL
           for(loop k=0; k<CRYSTAL_IN_PHI+4; k++){
                        #pragma HLS UNROLL
            if(i>=seed_eta-1 && i<=seed_eta+1 && k>=seed_phi-2 && k<=seed_phi+2)  temp[i][k] = 0 ;
         }}


        if(cluster_tmp.brems == 1){
        for(loop i=0; i<CRYSTAL_IN_ETA+4; i++){
                        #pragma HLS UNROLL
           for(loop k=0; k<<CRYSTAL_IN_PHI+4; k++){
                        #pragma HLS UNROLL
            if(i>=seed_eta-1 && i<=seed_eta+1 && k>=seed_phi-2-5 && k<=seed_phi+2-5)  temp[i][k] = 0 ;
         }}}

        if(cluster_tmp.brems == 2){
        for(loop i=0; i<CRYSTAL_IN_ETA+4; i++){
                        #pragma HLS UNROLL
           for(loop k=0; k<<CRYSTAL_IN_PHI+4; k++){
                        #pragma HLS UNROLL
            if(i>=seed_eta-1 && i<=seed_eta+1 && k>=seed_phi-2+5 && k<=seed_phi+2+5)  temp[i][k] = 0 ;
         }}}

          if( j== 0) region3x4.cluster0.energy = cluster_tmp.seedEnergy ;
          if( j== 1) region3x4.cluster1.energy = cluster_tmp.seedEnergy ;
          if( j== 2) region3x4.cluster2.energy = cluster_tmp.seedEnergy ;
          if( j== 3) region3x4.cluster3.energy = cluster_tmp.seedEnergy ;
          if( j== 4) region3x4.cluster4.energy = cluster_tmp.seedEnergy ;


//        ecalRegion = initStructure(temp) ; // this is the issue we try to reset array temp

//        cluster_tmp = getClusterPosition(ecalRegion) ; // this is the issue

//        region3x4.cluster1.energy = cluster_tmp.seedEnergy ;

    }

return region3x4 ;

}



void algo_top(ap_uint<10> etaStrip[CRYSTAL_IN_ETA+4][CRYSTAL_IN_PHI+4], ap_uint<15> clusterEnergy[TOTAL_CLUSTER]){

#pragma HLS ARRAY_PARTITION variable=etaStrip complete dim=0
#pragma HLS ARRAY_PARTITION variable=clusterEnergy complete dim=0
#pragma HLS PIPELINE II=6

        ap_uint<10> temporary[CRYSTAL_IN_ETA+4][CRYSTAL_IN_PHI+4] ;
#pragma HLS ARRAY_PARTITION variable=temporary complete dim=0
        ap_uint<10> temporary1[CRYSTAL_IN_ETA+4][CRYSTAL_IN_PHI+4] ;
#pragma HLS ARRAY_PARTITION variable=temporary1 complete dim=0


region3x4_t region3x4_1 ;

        for(loop i=0; i<CRYSTAL_IN_ETA+4; i++){
                        #pragma HLS UNROLL
             for(loop k=0; k<CRYSTAL_IN_PHI+4; k++){
                        #pragma HLS UNROLL
                temporary[i][k]= etaStrip[i][k] ;
             }
        }


//P1:{
//#pragma HLS protocol floating
        region3x4_1 =  getRegion3x4(temporary) ;
        clusterEnergy[0]=region3x4_1.cluster0.energy ;

//        ap_wait() ;

        clusterEnergy[1]=region3x4_1.cluster1.energy ;
        clusterEnergy[2]=region3x4_1.cluster2.energy ;
        clusterEnergy[3]=region3x4_1.cluster3.energy ;
        clusterEnergy[4]=region3x4_1.cluster4.energy ;
//  }

}

