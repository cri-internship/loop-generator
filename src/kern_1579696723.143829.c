#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(370, "random");
	double *C = create_one_dim_double(730, "random");
	double ***D = create_three_dim_double(450, 790, 740, "random");
	double **A = create_two_dim_double(10, 140, "random");

	for (int b = 5; b < 140; b++)
	  for (int a = 4; a < 10; a++)
	  {
	    
	     A[a][b]=A[a][b-3]/0.024;
	    
	     A[a][b]=A[a-3][b-5]/D[a][b][a];
	    
	     C[a]=0.498;
	     C[a-4]=D[a][b][a]-A[a][b];
	    
	     B[a]=0.007;
	     B[a-3]=0.674;
	  }

    return 0;
}