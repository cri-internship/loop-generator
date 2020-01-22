#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(20, 650, "random");
	float *C = create_one_dim_float(230, "random");
	float **B = create_two_dim_float(170, 700, "random");
	float **A = create_two_dim_float(180, 640, "random");
	float ***E = create_three_dim_float(840, 220, 450, "random");

	for (int b = 3; b < 220; b++)
	  for (int a = 5; a < 20; a++)
	  {
	    
	     B[a][b]=B[a-3][b-3]-0.263;
	    
	     E[a][b][a]=E[a-5][b-1][a-2]/0.477;
	    
	     A[a][b]=B[a][b]+E[a][b][a]-D[a][b]/C[a];
	     A[a+2][b+4]=C[a]-E[a][b][a];
	    
	     A[a][b]=0.355;
	    
	     D[a][b]=0.868;
	     D[a][b+2]=0.047;
	  }

    return 0;
}