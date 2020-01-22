#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(900, 220, "random");
	float **A = create_two_dim_float(360, 530, "random");
	float ***D = create_three_dim_float(60, 120, 400, "random");
	float ***C = create_three_dim_float(500, 230, 300, "random");

	for (int c = 0; c < 300; c++)
	  for (int b = 0; b < 228; b++)
	    for (int a = 0; a < 497; a++)
	    {
	      
	      C[a][b][c]=C[a+3][b+2][c]-0.204;
	    }

    return 0;
}