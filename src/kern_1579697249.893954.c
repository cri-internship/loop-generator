#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(110, 970, "random");
	float ***C = create_three_dim_float(420, 770, 50, "random");
	float *D = create_one_dim_float(650, "random");
	float ***B = create_three_dim_float(60, 550, 190, "random");

	for (int b = 5; b < 550; b++)
	  for (int a = 5; a < 60; a++)
	  {
	    
	     A[a][b]=A[a-3][b]-0.819;
	    
	     B[a][b][a]=B[a-3][b-5][a-3]+0.515;
	    
	     B[a][b][a]=B[a-5][b-5][a-4]-D[a]*A[a][b]/C[a][b][a];
	    
	     D[a]=D[a+3]-0.666;
	    
	     float var_a=D[a]/0.828;
	     float var_b=D[a-5]+0.023;
	  }

    return 0;
}