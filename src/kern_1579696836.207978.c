#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(470, "ones");
	float **A = create_two_dim_float(290, 430, "ones");

	for (int d = 5; d < 427; d++)
	  for (int c = 5; c < 287; c++)
	    for (int b = 5; b < 287; b++)
	      for (int a = 5; a < 287; a++)
	      {
	        
	       float var_a=B[a]/0.417;
	       B[a]=0.262;
	        
	       B[a]=0.973;
	        
	       A[a][b]=B[a];
	       A[a-5][b-5]=B[a];
	        
	       B[a]=A[a][b]+B[a];
	       A[a][b]=A[a+3][b+1]/B[a];
	        
	       float var_b=A[a][b]*0.291;
	       float var_c=A[a+1][b+3]+0.949;
	      }

    return 0;
}