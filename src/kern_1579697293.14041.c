#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(620, 270, 100, "ones");
	float ***D = create_three_dim_float(320, 300, 860, "ones");
	float **C = create_two_dim_float(690, 100, "ones");
	float *B = create_one_dim_float(60, "ones");
	float *A = create_one_dim_float(530, "ones");

	for (int d = 0; d < 97; d++)
	  for (int c = 0; c < 529; c++)
	    for (int b = 0; b < 529; b++)
	      for (int a = 0; a < 529; a++)
	      {
	        
	       C[a][b]=C[a][b+3]/0.104;
	        
	       A[a]=0.448;
	       A[a+1]=0.347;
	      }

    return 0;
}