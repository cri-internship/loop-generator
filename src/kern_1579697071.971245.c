#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(270, 110, "random");
	float *A = create_one_dim_float(810, "random");
	float ***D = create_three_dim_float(10, 460, 430, "random");
	float ***B = create_three_dim_float(840, 850, 190, "random");

	for (int b = 4; b < 110; b++)
	  for (int a = 5; a < 10; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-3][a-4]*0.276;
	    
	     B[a][b][a]=B[a][b-1][a-1]/0.317;
	    
	     B[a][b][a]=B[a+3][b+4][a]/D[a][b][a]+C[a][b];
	    
	     D[a][b][a]=B[a][b][a]*A[a]/0.495;
	     D[a-2][b-4][a]=C[a][b];
	    
	     A[a]=D[a][b][a]*B[a][b][a]+A[a]-C[a][b];
	     C[a][b]=D[a-2][b-3][a-1]+A[a]/C[a][b]*B[a][b][a];
	    
	     B[a][b][a]=A[a]-B[a][b][a]+C[a][b];
	     D[a][b][a]=A[a+3]*B[a][b][a]+D[a][b][a]-0.594;
	    
	     C[a][b]=C[a][b]+B[a][b][a]*A[a];
	     C[a][b]=C[a-5][b]*A[a];
	  }

    return 0;
}