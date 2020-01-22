#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(1000, 460, 450, "ones");
	float **D = create_two_dim_float(880, 870, "ones");
	float **A = create_two_dim_float(60, 880, "ones");
	float *B = create_one_dim_float(110, "ones");

	for (int b = 3; b < 867; b++)
	  for (int a = 4; a < 55; a++)
	  {
	    
	     A[a][b]=A[a-4][b-3]-0.578;
	    
	     A[a][b]=A[a-2][b-2]/C[a][b][a]-B[a]*D[a][b];
	    
	     A[a][b]=A[a+1][b+1]*0.41;
	    
	     D[a][b]=A[a][b]*A[a][b]-C[a][b][a];
	     D[a+3][b+3]=B[a]/C[a][b][a]+A[a][b];
	    
	     float var_a=D[a][b]-0.392;
	     float var_b=D[a+2][b]/0.202;
	    
	     D[a][b]=D[a][b]-C[a][b][a];
	     B[a]=D[a][b+3]*B[a]/C[a][b][a];
	    
	     float var_c=A[a][b]/0.788;
	     float var_d=A[a+5][b+2]+0.726;
	  }

    return 0;
}