#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(130, "random");
	float ***B = create_three_dim_float(470, 380, 710, "random");
	float **A = create_two_dim_float(800, 360, "random");
	float **C = create_two_dim_float(140, 390, "random");

	for (int b = 4; b < 360; b++)
	  for (int a = 4; a < 128; a++)
	  {
	    
	     A[a][b]=A[a][b-4]-0.119;
	    
	     A[a][b]=A[a-4][b]+0.357;
	    
	     float var_a=D[a]/0.616;
	     float var_b=D[a+1]*0.539;
	    
	     B[a][b][a]=D[a]*B[a][b][a]/C[a][b];
	     D[a]=D[a-1]-A[a][b];
	    
	     A[a][b]=D[a]+B[a][b][a]-C[a][b];
	     C[a][b]=D[a+2]+B[a][b][a]-C[a][b]*0.507;
	  }

    return 0;
}