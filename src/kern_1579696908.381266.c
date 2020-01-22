#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(700, "ones");
	float ***C = create_three_dim_float(810, 240, 640, "ones");
	float **A = create_two_dim_float(300, 720, "ones");
	float ***E = create_three_dim_float(210, 630, 740, "ones");
	float *D = create_one_dim_float(980, "ones");

	for (int b = 5; b < 626; b++)
	  for (int a = 5; a < 205; a++)
	  {
	    
	     E[a][b][a]=E[a][b-1][a-5]*A[a][b]+C[a][b][a]/D[a];
	    
	     E[a][b][a]=E[a-4][b-5][a-4]-0.525;
	    
	     B[a]=0.617;
	     B[a]=0.242;
	    
	     float var_a=E[a][b][a]*0.321;
	     float var_b=E[a+5][b+4][a+2]*0.315;
	  }

    return 0;
}