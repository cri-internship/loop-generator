#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(640, "random");
	float *A = create_one_dim_float(270, "random");
	float ***D = create_three_dim_float(780, 800, 310, "random");
	float *E = create_one_dim_float(650, "random");
	float ***B = create_three_dim_float(430, 460, 460, "random");

	for (int d = 0; d < 306; d++)
	  for (int c = 0; c < 799; c++)
	    for (int b = 0; b < 638; b++)
	      for (int a = 0; a < 638; a++)
	      {
	        
	       C[a]=D[a][b][c]*B[a][b][c];
	       C[a+2]=A[a]+E[a];
	        
	       A[a]=D[a][b][c]-C[a]*E[a]/A[a]+0.192;
	       B[a][b][c]=D[a+1][b+1][c+4]/C[a]+E[a]*B[a][b][c];
	      }

    return 0;
}