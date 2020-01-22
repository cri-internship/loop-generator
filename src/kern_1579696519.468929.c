#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(150, 400, 270, "ones");
	float **A = create_two_dim_float(980, 200, "ones");
	float **E = create_two_dim_float(120, 670, "ones");
	float *D = create_one_dim_float(410, "ones");
	float **C = create_two_dim_float(230, 160, "ones");

	for (int c = 3; c < 270; c++)
	  for (int b = 3; b < 400; b++)
	    for (int a = 4; a < 150; a++)
	    {
	      
	      D[a]=D[a+5]+E[a][b];
	      
	      B[a][b][c]=0.565;
	      B[a-2][b-3][c]=0.291;
	      
	      B[a][b][c]=C[a][b];
	    }

    return 0;
}