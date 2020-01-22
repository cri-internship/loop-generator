#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(490, 60, "zeros");
	float *B = create_one_dim_float(190, "zeros");
	float ***A = create_three_dim_float(60, 160, 290, "zeros");
	float **C = create_two_dim_float(660, 590, "zeros");

	for (int b = 5; b < 58; b++)
	  for (int a = 4; a < 55; a++)
	  {
	    
	     B[a]=B[a-2]+0.305;
	    
	     A[a][b][a]=A[a+1][b+4][a+3]-0.949;
	    
	     A[a][b][a]=A[a][b+4][a]-0.964;
	    
	     C[a][b]=0.673;
	     C[a-4][b]=0.88;
	    
	     float var_a=D[a][b]/0.577;
	     float var_b=D[a+3][b+2]*0.209;
	    
	     C[a][b]=A[a][b][a]/C[a][b];
	     A[a][b][a]=A[a+5][b+4][a+5]*D[a][b]-B[a]/C[a][b];
	  }

    return 0;
}