#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(180, 300, "random");
	float ***C = create_three_dim_float(410, 550, 730, "random");
	float **B = create_two_dim_float(150, 90, "random");
	float **A = create_two_dim_float(290, 500, "random");

	for (int c = 1; c < 730; c++)
	  for (int b = 4; b < 89; b++)
	    for (int a = 4; a < 147; a++)
	    {
	      
	      D[a][b]=D[a-3][b-4]-C[a][b][c];
	      
	      float var_a=A[a][b]*0.146;
	      A[a][b]=0.102;
	      
	      A[a][b]=D[a][b];
	      
	      B[a][b]=A[a][b];
	      B[a+3][b+1]=C[a][b][c];
	      
	      C[a][b][c]=0.417;
	      C[a-2][b][c-1]=0.849;
	    }

    return 0;
}