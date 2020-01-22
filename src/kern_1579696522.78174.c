#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(640, "random");
	double *A = create_one_dim_double(520, "random");
	double ***E = create_three_dim_double(770, 320, 240, "random");
	double *C = create_one_dim_double(310, "random");
	double ***D = create_three_dim_double(820, 940, 850, "random");

	for (int c = 0; c < 847; c++)
	  for (int b = 0; b < 936; b++)
	    for (int a = 0; a < 819; a++)
	    {
	      
	      D[a][b][c]=0.579;
	      D[a+1][b+4][c+3]=B[a]*E[a][b][c]-A[a];
	    }

    return 0;
}