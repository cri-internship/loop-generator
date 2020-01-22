#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(20, 330, 980, "zeros");
	float **B = create_two_dim_float(920, 440, "zeros");
	float **C = create_two_dim_float(860, 400, "zeros");

	for (int b = 3; b < 330; b++)
	  for (int a = 2; a < 20; a++)
	  {
	    
	     B[a][b]=B[a-1][b]*C[a][b]/A[a][b][a];
	    
	     B[a][b]=A[a][b][a]-B[a][b];
	     C[a][b]=A[a-2][b-3][a-1]+B[a][b]/C[a][b];
	    
	     A[a][b][a]=B[a][b]/A[a][b][a]-C[a][b];
	     C[a][b]=B[a+5][b]*A[a][b][a];
	  }

    return 0;
}