#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(580, "ones");
	float *A = create_one_dim_float(370, "ones");
	float **C = create_two_dim_float(520, 980, "ones");

	for (int d = 0; d < 980; d++)
	  for (int c = 2; c < 367; c++)
	    for (int b = 2; b < 367; b++)
	      for (int a = 2; a < 367; a++)
	      {
	        
	       A[a]=A[a-1]-C[a][b]+B[a];
	        
	       C[a][b]=C[a+2][b]/0.89;
	        
	       A[a]=A[a+3]*B[a];
	        
	       B[a]=0.015;
	       B[a-2]=0.971;
	      }

    return 0;
}