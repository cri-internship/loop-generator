#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(730, 630, 770, "zeros");
	float ***D = create_three_dim_float(270, 430, 970, "zeros");
	float **A = create_two_dim_float(50, 250, "zeros");
	float ***C = create_three_dim_float(930, 270, 970, "zeros");

	for (int b = 1; b < 250; b++)
	  for (int a = 1; a < 50; a++)
	  {
	    
	     D[a][b][a]=C[a][b][a]/A[a][b]-0.497;
	     D[a+3][b+2][a]=C[a][b][a]+B[a][b][a]/A[a][b];
	    
	     B[a][b][a]=A[a][b]-D[a][b][a];
	     C[a][b][a]=A[a-1][b-1]*C[a][b][a]/0.03+B[a][b][a];
	  }

    return 0;
}