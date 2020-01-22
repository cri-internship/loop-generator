#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(170, 820, "ones");
	float ***E = create_three_dim_float(430, 930, 480, "ones");
	float ***D = create_three_dim_float(530, 80, 270, "ones");
	float ***A = create_three_dim_float(970, 810, 360, "ones");
	float *B = create_one_dim_float(960, "ones");

	for (int b = 1; b < 820; b++)
	  for (int a = 2; a < 170; a++)
	  {
	    
	     E[a][b][a]=D[a][b][a];
	     E[a+4][b+4][a]=B[a];
	    
	     C[a][b]=0.344;
	     C[a-2][b-1]=0.162;
	  }

    return 0;
}