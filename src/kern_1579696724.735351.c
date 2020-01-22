#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(610, 100, "ones");
	float **A = create_two_dim_float(520, 660, "ones");
	float **D = create_two_dim_float(890, 870, "ones");
	float *C = create_one_dim_float(410, "ones");

	for (int d = 4; d < 100; d++)
	  for (int c = 5; c < 410; c++)
	    for (int b = 5; b < 410; b++)
	      for (int a = 5; a < 410; a++)
	      {
	        
	       A[a][b]=A[a-5][b-1]-D[a][b]+C[a]/B[a][b];
	        
	       C[a]=0.052;
	       C[a-4]=D[a][b]-A[a][b];
	        
	       C[a]=D[a][b]+A[a][b];
	        
	       float var_a=C[a]*0.437;
	       float var_b=C[a]*0.364;
	        
	       float var_c=B[a][b]/0.726;
	       float var_d=B[a+3][b]-0.88;
	        
	       float var_e=B[a][b]*0.655;
	       float var_f=B[a-3][b-4]-0.937;
	        
	       float var_g=D[a][b]-0.37;
	       float var_h=D[a-1][b-2]+0.43;
	      }

    return 0;
}