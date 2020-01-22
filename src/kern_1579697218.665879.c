#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(100, 740, "ones");
	float **B = create_two_dim_float(180, 120, "ones");
	float *A = create_one_dim_float(300, "ones");

	for (int b = 0; b < 115; b++)
	  for (int a = 0; a < 177; a++)
	  {
	    
	     B[a][b]=B[a+3][b]/0.164;
	    
	     A[a]=A[a+5]/0.219;
	    
	     A[a]=A[a+2]*0.794;
	    
	     A[a]=A[a]-B[a][b];
	     B[a][b]=A[a]+C[a][b];
	    
	     C[a][b]=B[a][b]-A[a]+A[a];
	     C[a][b]=B[a][b+5]+C[a][b]*A[a];
	  }

    return 0;
}