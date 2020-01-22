#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(210, 270, 530, "ones");
	float *C = create_one_dim_float(940, "ones");
	float **A = create_two_dim_float(450, 340, "ones");

	for (int b = 4; b < 270; b++)
	  for (int a = 3; a < 205; a++)
	  {
	    
	     B[a][b][a]=B[a+5][b][a+3]*0.15;
	    
	     C[a]=C[a+1]+0.911;
	    
	     A[a][b]=C[a]+B[a][b][a];
	     A[a][b-1]=C[a]*B[a][b][a];
	    
	     A[a][b]=C[a];
	    
	     float var_a=B[a][b][a]-0.974;
	     float var_b=B[a][b-4][a-3]+0.053;
	    
	     float var_c=A[a][b]*0.714;
	     float var_d=A[a][b+3]/0.067;
	  }

    return 0;
}