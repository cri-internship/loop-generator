#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(580, 670, "ones");
	float *C = create_one_dim_float(800, "ones");
	float *D = create_one_dim_float(550, "ones");
	float **B = create_two_dim_float(320, 100, "ones");

	for (int d = 2; d < 100; d++)
	  for (int c = 2; c < 320; c++)
	    for (int b = 2; b < 320; b++)
	      for (int a = 2; a < 320; a++)
	      {
	        
	       D[a]=0.852;
	       float  var_a=D[a]+0.988;
	        
	       B[a][b]=B[a-2][b-1]-D[a]/A[a][b];
	        
	       A[a][b]=A[a+2][b+1]/B[a][b]*C[a]-C[a];
	        
	       A[a][b]=A[a+5][b+5]-B[a][b];
	        
	       C[a]=C[a+2]+B[a][b]*A[a][b];
	        
	       B[a][b]=B[a][b]/D[a];
	       A[a][b]=B[a][b-2]/C[a]+D[a];
	        
	       float var_b=C[a]/0.099;
	      }

    return 0;
}