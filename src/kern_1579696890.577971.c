#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(810, "random");
	float *B = create_one_dim_float(320, "random");
	float **A = create_two_dim_float(880, 310, "random");
	float ***E = create_three_dim_float(790, 930, 110, "random");
	float ***D = create_three_dim_float(660, 630, 550, "random");

	for (int b = 4; b < 629; b++)
	  for (int a = 3; a < 655; a++)
	  {
	    
	     C[a]=C[a+5]/0.618;
	    
	     D[a][b][a]=D[a+1][b+1][a+5]+0.361;
	    
	     D[a][b][a]=0.081;
	    
	     float var_a=D[a][b][a]-0.693;
	     float var_b=D[a-1][b-4][a-3]+0.697;
	  }

    return 0;
}