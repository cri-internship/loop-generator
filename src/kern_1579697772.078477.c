#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(280, 220, "ones");
	float ***A = create_three_dim_float(600, 530, 20, "ones");
	float *B = create_one_dim_float(400, "ones");

	for (int b = 0; b < 530; b++)
	  for (int a = 1; a < 395; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b][a]*0.996;
	    
	     B[a]=B[a+5]/0.716;
	    
	     B[a]=0.12;
	  }

    return 0;
}