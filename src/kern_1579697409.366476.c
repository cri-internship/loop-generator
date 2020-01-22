#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(110, 530, "zeros");
	float **C = create_two_dim_float(440, 680, "zeros");
	float *B = create_one_dim_float(280, "zeros");
	float *D = create_one_dim_float(580, "zeros");

	for (int d = 5; d < 527; d++)
	  for (int c = 5; c < 107; c++)
	    for (int b = 5; b < 107; b++)
	      for (int a = 5; a < 107; a++)
	      {
	        
	       C[a][b]=C[a][b-1]+0.252;
	        
	       A[a][b]=A[a+3][b+3]*0.766;
	        
	       A[a][b]=A[a+3][b]*0.883;
	        
	       C[a][b]=0.114;
	      }

    return 0;
}