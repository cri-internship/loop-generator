#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(430, 590, "ones");
	float ***D = create_three_dim_float(970, 970, 820, "ones");
	float *B = create_one_dim_float(150, "ones");
	float *A = create_one_dim_float(530, "ones");

	for (int b = 2; b < 585; b++)
	  for (int a = 2; a < 148; a++)
	  {
	    
	     D[a][b][a]=D[a-2][b-2][a-1]/0.803;
	    
	     D[a][b][a]=D[a+1][b+1][a+1]/C[a][b];
	    
	     A[a]=A[a+1]*B[a]/D[a][b][a]+D[a][b][a];
	    
	     C[a][b]=A[a]-B[a];
	     C[a+2][b+5]=A[a]-B[a]*D[a][b][a];
	    
	     A[a]=B[a]/C[a][b];
	     D[a][b][a]=B[a+2]/C[a][b];
	  }

    return 0;
}