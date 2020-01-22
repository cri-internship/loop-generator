#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(520, 760, "random");
	float *B = create_one_dim_float(970, "random");

	for (int c = 0; c < 755; c++)
	  for (int b = 0; b < 515; b++)
	    for (int a = 0; a < 515; a++)
	    {
	      
	      A[a][b]=A[a][b+5]-0.144;
	      
	      B[a]=B[a+4]/0.539;
	      
	      A[a][b]=B[a];
	      
	      B[a]=A[a][b];
	      
	      float var_a=A[a][b]*0.08;
	      
	      float var_c=B[a]-0.156;
	      float var_d=B[a+1]+0.504;
	    }

    return 0;
}