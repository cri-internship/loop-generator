#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(790, 620, 440, "random");
	float *A = create_one_dim_float(370, "random");
	float ***C = create_three_dim_float(870, 540, 420, "random");
	float *D = create_one_dim_float(20, "random");

	for (int c = 0; c < 416; c++)
	  for (int b = 2; b < 540; b++)
	    for (int a = 0; a < 20; a++)
	    {
	      
	      C[a][b][c]=C[a][b-2][c]+0.447;
	      
	      C[a][b][c]=C[a+3][b][c+4]-0.728;
	      
	      D[a]=0.166;
	      D[a]=0.444;
	    }

    return 0;
}