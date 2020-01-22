#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(960, "ones");
	float **A = create_two_dim_float(160, 970, "ones");
	float **B = create_two_dim_float(680, 440, "ones");

	for (int d = 5; d < 435; d++)
	  for (int c = 3; c < 160; c++)
	    for (int b = 3; b < 160; b++)
	      for (int a = 3; a < 160; a++)
	      {
	        
	       B[a][b]=B[a+2][b+5]*0.905;
	        
	       A[a][b]=C[a];
	       A[a-3][b-5]=B[a][b]*C[a];
	        
	       C[a]=B[a][b]*0.904;
	       A[a][b]=B[a+4][b+2]+A[a][b]/C[a];
	      }

    return 0;
}