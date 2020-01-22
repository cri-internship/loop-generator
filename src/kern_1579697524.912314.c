#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(820, 750, 500, "random");
	float **C = create_two_dim_float(70, 710, "random");
	float *B = create_one_dim_float(880, "random");
	float **A = create_two_dim_float(330, 210, "random");

	for (int b = 4; b < 210; b++)
	  for (int a = 2; a < 65; a++)
	  {
	    
	     A[a][b]=A[a][b-4]*0.802;
	    
	     D[a][b][a]=D[a-2][b-1][a-1]+C[a][b];
	    
	     B[a]=B[a+1]/A[a][b]*D[a][b][a]-C[a][b];
	    
	     C[a][b]=C[a+1][b+5]/0.674;
	    
	     C[a][b]=0.9;
	    
	     C[a][b]=C[a][b]*B[a];
	  }

    return 0;
}