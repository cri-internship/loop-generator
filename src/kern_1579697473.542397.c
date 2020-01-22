#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(530, 380, "ones");
	float *B = create_one_dim_float(920, "ones");
	float ***D = create_three_dim_float(590, 630, 560, "ones");
	float *A = create_one_dim_float(430, "ones");

	for (int b = 0; b < 375; b++)
	  for (int a = 5; a < 430; a++)
	  {
	    
	     D[a][b][a]=D[a+3][b+3][a+3]/0.915;
	    
	     C[a][b]=C[a+1][b+5]/A[a];
	    
	     D[a][b][a]=D[a+3][b][a+1]*0.125;
	    
	     A[a]=0.644;
	     A[a]=0.118;
	    
	     A[a]=A[a]/C[a][b];
	    
	     C[a][b]=B[a]+D[a][b][a]-0.262;
	     D[a][b][a]=B[a-5]*A[a];
	    
	     C[a][b]=C[a][b]+D[a][b][a]/B[a]*A[a];
	     D[a][b][a]=C[a+3][b+2]-B[a]+A[a];
	  }

    return 0;
}