#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(670, 170, "random");
	float ***B = create_three_dim_float(560, 860, 440, "random");
	float ***C = create_three_dim_float(350, 60, 640, "random");
	float ***A = create_three_dim_float(630, 810, 870, "random");
	float **E = create_two_dim_float(780, 760, "random");

	for (int b = 5; b < 55; b++)
	  for (int a = 3; a < 347; a++)
	  {
	    
	     E[a][b]=E[a-1][b-1]-D[a][b]+A[a][b][a];
	    
	     C[a][b][a]=C[a+1][b+4][a]*0.265;
	    
	     B[a][b][a]=B[a+4][b][a+4]/0.358;
	    
	     C[a][b][a]=C[a+3][b+5][a+1]/0.076;
	    
	     float var_a=C[a][b][a]-0.022;
	     float var_b=C[a-1][b-5][a-3]-0.018;
	  }

    return 0;
}