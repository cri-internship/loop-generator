#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(1000, 240, "random");
	float **D = create_two_dim_float(970, 330, "random");
	float **E = create_two_dim_float(230, 640, "random");
	float *C = create_one_dim_float(760, "random");
	float *B = create_one_dim_float(700, "random");

	for (int b = 3; b < 237; b++)
	  for (int a = 4; a < 226; a++)
	  {
	    
	     C[a]=E[a][b]*A[a][b];
	     B[a]=C[a]+B[a]-D[a][b];
	    
	     C[a]=C[a-1]*0.509;
	    
	     B[a]=B[a-2]*C[a]-0.259/A[a][b];
	    
	     A[a][b]=A[a+2][b+3]-E[a][b]*C[a]+D[a][b]/B[a];
	    
	     E[a][b]=E[a+4][b+2]-0.056+C[a]*D[a][b];
	    
	     D[a][b]=0.357;
	     D[a+1][b+1]=0.56;
	    
	     D[a][b]=0.836;
	  }

    return 0;
}