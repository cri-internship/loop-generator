#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(580, 620, "zeros");
	float **A = create_two_dim_float(570, 860, "zeros");

	for (int d = 5; d < 620; d++)
	  for (int c = 4; c < 566; c++)
	    for (int b = 4; b < 566; b++)
	      for (int a = 4; a < 566; a++)
	      {
	        
	       A[a][b]=A[a][b+1]+B[a][b];
	        
	       A[a][b]=A[a+2][b+5]-B[a][b];
	        
	       A[a][b]=A[a+4][b]-B[a][b];
	        
	       B[a][b]=B[a][b]/A[a][b];
	       A[a][b]=B[a-2][b-3]*A[a][b];
	        
	       A[a][b]=A[a][b]/B[a][b];
	       B[a][b]=A[a+4][b+3]/B[a][b];
	        
	       A[a][b]=A[a][b]*B[a][b];
	       A[a][b]=A[a-1][b-5]-B[a][b];
	        
	       float var_a=A[a][b]*0.336;
	       float var_b=A[a-4][b-2]/0.203;
	      }

    return 0;
}