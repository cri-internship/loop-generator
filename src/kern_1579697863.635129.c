#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(420, "zeros");
	float **B = create_two_dim_float(880, 140, "zeros");
	float ***A = create_three_dim_float(800, 930, 910, "zeros");

	for (int b = 0; b < 138; b++)
	  for (int a = 1; a < 420; a++)
	  {
	    
	     C[a]=C[a-1]+0.414;
	    
	     B[a][b]=B[a+5][b]+0.895;
	    
	     B[a][b]=0.585;
	    
	     float var_a=A[a][b][a]-0.368;
	     float var_b=A[a+5][b][a+2]/0.662;
	    
	     float var_c=A[a][b][a]/0.345;
	     float var_d=A[a+3][b+3][a+5]*0.723;
	    
	     C[a]=A[a][b][a]-B[a][b]*C[a];
	     B[a][b]=A[a][b+3][a+2]*B[a][b]+C[a];
	  }

    return 0;
}