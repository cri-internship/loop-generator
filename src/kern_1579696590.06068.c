#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(140, 850, "ones");
	float ***E = create_three_dim_float(650, 280, 120, "ones");
	float **C = create_two_dim_float(300, 180, "ones");
	float **A = create_two_dim_float(340, 510, "ones");
	float ***B = create_three_dim_float(940, 540, 830, "ones");

	for (int c = 0; c < 830; c++)
	  for (int b = 3; b < 540; b++)
	    for (int a = 4; a < 940; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-3][c]*D[a][b]-0.819/E[a][b][c]+C[a][b];
	    }

    return 0;
}