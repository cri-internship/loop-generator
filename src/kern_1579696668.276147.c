#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(1000, 280, 250, "zeros");
	float ***D = create_three_dim_float(660, 340, 970, "zeros");
	float **A = create_two_dim_float(490, 1000, "zeros");
	float *C = create_one_dim_float(560, "zeros");

	for (int b = 0; b < 335; b++)
	  for (int a = 3; a < 490; a++)
	  {
	    
	     D[a][b][a]=D[a-3][b][a-1]-0.57;
	    
	     D[a][b][a]=D[a][b][a+3]/0.179;
	    
	     A[a][b]=A[a][b]*0.835-D[a][b][a];
	     D[a][b][a]=A[a-2][b]*B[a][b][a];
	  }

    return 0;
}