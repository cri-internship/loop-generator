#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(170, 610, "ones");
	float *C = create_one_dim_float(580, "ones");
	float *B = create_one_dim_float(390, "ones");

	for (int d = 0; d < 606; d++)
	  for (int c = 5; c < 169; c++)
	    for (int b = 5; b < 169; b++)
	      for (int a = 5; a < 169; a++)
	      {
	        
	       C[a]=C[a+1]-0.028;
	        
	       B[a]=B[a+4]-0.626;
	        
	       A[a][b]=0.613;
	       A[a+1][b+4]=0.022;
	        
	       B[a]=0.309;
	        
	       C[a]=A[a][b]-C[a];
	       B[a]=A[a][b]+B[a];
	        
	       float var_a=C[a]*0.97;
	       float var_b=C[a-4]-0.443;
	        
	       A[a][b]=C[a]/B[a];
	       B[a]=C[a-2]*A[a][b];
	      }

    return 0;
}