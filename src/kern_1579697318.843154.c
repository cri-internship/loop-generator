#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(90, 250, "zeros");
	float *B = create_one_dim_float(190, "zeros");
	float *C = create_one_dim_float(620, "zeros");

	for (int b = 0; b < 247; b++)
	  for (int a = 3; a < 85; a++)
	  {
	    
	     B[a]=C[a];
	     B[a+3]=A[a][b];
	    
	     B[a]=0.167;
	    
	     A[a][b]=A[a][b]*B[a];
	     B[a]=A[a+5][b]-C[a]+0.292;
	    
	     float var_a=A[a][b]/0.781;
	     float var_b=A[a+1][b+3]-0.512;
	    
	     float var_c=B[a]-0.031;
	  }

    return 0;
}