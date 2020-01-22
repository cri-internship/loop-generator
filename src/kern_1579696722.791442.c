#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(770, 650, 300, "random");
	float **C = create_two_dim_float(480, 610, "random");
	float **D = create_two_dim_float(770, 550, "random");
	float **B = create_two_dim_float(360, 50, "random");

	for (int b = 0; b < 48; b++)
	  for (int a = 0; a < 355; a++)
	  {
	    
	     B[a][b]=D[a][b]/0.074*A[a][b][a];
	     D[a][b]=0.149/A[a][b][a]-B[a][b];
	    
	     B[a][b]=B[a][b+2]*D[a][b]+A[a][b][a]-C[a][b];
	    
	     B[a][b]=B[a+5][b+2]+0.615;
	  }

    return 0;
}