#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(200, 260, "random");
	float **C = create_two_dim_float(20, 800, "random");
	float **B = create_two_dim_float(350, 610, "random");

	for (int c = 4; c < 260; c++)
	  for (int b = 0; b < 20; b++)
	    for (int a = 0; a < 20; a++)
	    {
	      
	      C[a][b]=C[a][b-4]/0.041;
	      
	      A[a][b]=A[a][b-3]+0.88;
	      
	      B[a][b]=0.595;
	      B[a+4][b+5]=0.197;
	      
	      B[a][b]=B[a][b]*A[a][b];
	      A[a][b]=B[a+1][b+1]*C[a][b]/A[a][b];
	    }

    return 0;
}