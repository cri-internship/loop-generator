#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(980, 50, 600, "random");
	float ***B = create_three_dim_float(720, 970, 110, "random");
	float **A = create_two_dim_float(470, 520, "random");
	float **D = create_two_dim_float(660, 930, "random");

	for (int c = 4; c < 520; c++)
	  for (int b = 1; b < 470; b++)
	    for (int a = 1; a < 470; a++)
	    {
	      
	      D[a][b]=A[a][b]*0.43;
	      A[a][b]=A[a-1][b-4]-C[a][b][c];
	    }

    return 0;
}