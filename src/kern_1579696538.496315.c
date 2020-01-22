#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(460, 370, 90, "zeros");
	float *B = create_one_dim_float(810, "zeros");
	float *C = create_one_dim_float(960, "zeros");

	for (int b = 0; b < 367; b++)
	  for (int a = 5; a < 457; a++)
	  {
	    
	     B[a]=B[a-1]*0.656;
	    
	     A[a][b][a]=A[a+3][b+3][a]-B[a];
	    
	     B[a]=A[a][b][a];
	    
	     float var_a=B[a]*0.188;
	  }

    return 0;
}