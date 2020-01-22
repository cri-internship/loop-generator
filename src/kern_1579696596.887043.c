#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(910, 900, 440, "random");
	float *A = create_one_dim_float(580, "random");
	float **E = create_two_dim_float(990, 620, "random");
	float **C = create_two_dim_float(960, 420, "random");
	float ***D = create_three_dim_float(300, 130, 960, "random");

	for (int c = 0; c < 415; c++)
	  for (int b = 0; b < 960; b++)
	    for (int a = 0; a < 960; a++)
	    {
	      
	      E[a][b]=E[a][b+3]-0.301;
	      
	      C[a][b]=C[a][b+2]-0.871;
	      
	      C[a][b]=0.327/D[a][b][c];
	    }

    return 0;
}