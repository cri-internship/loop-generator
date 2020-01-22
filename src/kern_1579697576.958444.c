#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(840, 930, 590, "ones");
	float ***B = create_three_dim_float(430, 80, 150, "ones");
	float *E = create_one_dim_float(810, "ones");
	float ***C = create_three_dim_float(700, 840, 640, "ones");
	float **A = create_two_dim_float(630, 940, "ones");

	for (int b = 0; b < 807; b++)
	  for (int a = 0; a < 807; a++)
	  {
	    
	     E[a]=E[a]*D[a][b][a]-A[a][b]+B[a][b][a];
	     D[a][b][a]=E[a+3]-C[a][b][a]+D[a][b][a]/C[a][b][a];
	  }

    return 0;
}