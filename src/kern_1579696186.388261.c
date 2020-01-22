#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(410, 630, "random");
	float **C = create_two_dim_float(710, 430, "random");
	float *A = create_one_dim_float(710, "random");

	for (int d = 5; d < 426; d++)
	  for (int c = 0; c < 705; c++)
	    for (int b = 0; b < 705; b++)
	      for (int a = 0; a < 705; a++)
	      {
	        
	       C[a][b]=C[a][b-5]+0.656;
	        
	       A[a]=A[a+1]+0.68;
	        
	       C[a][b]=C[a+5][b+4]*0.116/B[a][b];
	        
	       A[a]=A[a]*C[a][b]-B[a][b];
	       B[a][b]=A[a+5]/B[a][b]*C[a][b];
	      }

    return 0;
}