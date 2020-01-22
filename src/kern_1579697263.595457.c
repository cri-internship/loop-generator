#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(330, 390, 410, "random");
	float **B = create_two_dim_float(740, 270, "random");
	float **A = create_two_dim_float(230, 600, "random");
	float **C = create_two_dim_float(110, 910, "random");

	for (int c = 0; c < 409; c++)
	  for (int b = 3; b < 387; b++)
	    for (int a = 5; a < 110; a++)
	    {
	      
	      C[a][b]=0.398;
	      C[a-5][b-3]=0.903;
	      
	      float var_a=D[a][b][c]+0.762;
	      float var_b=D[a][b+2][c+1]-0.659;
	      
	      B[a][b]=D[a][b][c]/0.849;
	      D[a][b][c]=D[a][b+3][c]-0.771;
	    }

    return 0;
}