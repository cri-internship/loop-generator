#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(280, "ones");
	float *D = create_one_dim_float(140, "ones");
	float **B = create_two_dim_float(170, 160, "ones");
	float ***E = create_three_dim_float(160, 170, 970, "ones");
	float **C = create_two_dim_float(160, 780, "ones");

	for (int b = 5; b < 166; b++)
	  for (int a = 5; a < 140; a++)
	  {
	    
	     C[a][b]=C[a-3][b-5]+B[a][b];
	    
	     D[a]=D[a-5]-0.686;
	    
	     E[a][b][a]=0.881;
	     E[a+2][b+4][a+1]=0.996;
	  }

    return 0;
}