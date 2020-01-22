#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(920, "random");
	float **C = create_two_dim_float(410, 240, "random");
	float ***E = create_three_dim_float(510, 570, 760, "random");
	float *A = create_one_dim_float(430, "random");
	float *B = create_one_dim_float(800, "random");

	for (int b = 3; b < 570; b++)
	  for (int a = 3; a < 430; a++)
	  {
	    
	     A[a]=A[a-1]-D[a]/C[a][b];
	    
	     E[a][b][a]=E[a-2][b-3][a-3]-0.698;
	    
	     E[a][b][a]=0.525;
	    
	     B[a]=0.845;
	     B[a+1]=0.179;
	    
	     B[a]=D[a]/A[a]*B[a]-E[a][b][a]+A[a];
	     C[a][b]=D[a+2]-E[a][b][a]/B[a]*A[a]+C[a][b];
	  }

    return 0;
}