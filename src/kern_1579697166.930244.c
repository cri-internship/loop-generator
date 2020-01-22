#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(920, 590, "random");
	float **B = create_two_dim_float(830, 310, "random");
	float *C = create_one_dim_float(920, "random");
	float *D = create_one_dim_float(570, "random");

	for (int d = 4; d < 305; d++)
	  for (int c = 5; c < 826; c++)
	    for (int b = 5; b < 826; b++)
	      for (int a = 5; a < 826; a++)
	      {
	        
	       C[a]=C[a-5]/B[a][b]*D[a]-A[a][b];
	        
	       B[a][b]=B[a-4][b-4]-0.26;
	        
	       B[a][b]=B[a+3][b+1]*C[a]-C[a]+D[a];
	        
	       B[a][b]=B[a+4][b+5]*0.476;
	        
	       float var_a=A[a][b]/0.467;
	       float var_b=A[a-1][b-4]-0.902;
	      }

    return 0;
}