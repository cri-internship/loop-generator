#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(680, 380, "random");
	float *D = create_one_dim_float(880, "random");
	float **A = create_two_dim_float(680, 480, "random");
	float **B = create_two_dim_float(360, 300, "random");

	for (int b = 1; b < 295; b++)
	  for (int a = 5; a < 355; a++)
	  {
	    
	     A[a][b]=A[a-5][b-1]+C[a][b]-0.096;
	    
	     D[a]=D[a+1]+B[a][b];
	    
	     B[a][b]=B[a+1][b+5]-A[a][b]+C[a][b]/A[a][b];
	    
	     A[a][b]=B[a][b]/C[a][b]+A[a][b];
	     C[a][b]=B[a+5][b+1]*C[a][b]-A[a][b]+D[a];
	  }

    return 0;
}