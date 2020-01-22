#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(520, 820, "random");
	float **B = create_two_dim_float(590, 170, "random");

	for (int d = 5; d < 170; d++)
	  for (int c = 5; c < 520; c++)
	    for (int b = 5; b < 520; b++)
	      for (int a = 5; a < 520; a++)
	      {
	        
	       B[a][b]=B[a-4][b-1]+0.149;
	        
	       A[a][b]=A[a-4][b]+0.767;
	        
	       B[a][b]=B[a-5][b-3]-A[a][b];
	        
	       B[a][b]=B[a-1][b]-0.145;
	        
	       A[a][b]=A[a-4][b-2]*B[a][b];
	        
	       A[a][b]=A[a][b-5]/0.114;
	        
	       float var_a=B[a][b]/0.28;
	       float var_b=B[a+4][b]*0.716;
	      }

    return 0;
}