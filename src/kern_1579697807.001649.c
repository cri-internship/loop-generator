#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(20, 930, "random");
	float *A = create_one_dim_float(70, "random");
	float ***D = create_three_dim_float(660, 660, 840, "random");
	float **B = create_two_dim_float(930, 540, "random");

	for (int c = 0; c < 836; c++)
	  for (int b = 0; b < 657; b++)
	    for (int a = 2; a < 70; a++)
	    {
	      
	      A[a]=A[a-2]+0.971;
	      
	      D[a][b][c]=D[a+3][b+3][c+4]+A[a]-0.332;
	      
	      float var_a=A[a]/0.395;
	      A[a]=0.444;
	    }

    return 0;
}