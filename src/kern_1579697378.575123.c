#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(830, 550, 50, "random");
	float ***B = create_three_dim_float(880, 1000, 690, "random");
	float *D = create_one_dim_float(820, "random");
	float *A = create_one_dim_float(540, "random");
	float ***C = create_three_dim_float(580, 640, 990, "random");

	for (int c = 0; c < 689; c++)
	  for (int b = 0; b < 998; b++)
	    for (int a = 3; a < 820; a++)
	    {
	      
	      D[a]=D[a-3]/E[a][b][c]*C[a][b][c]-B[a][b][c]+A[a];
	      
	      B[a][b][c]=B[a+3][b+2][c+1]/0.55;
	    }

    return 0;
}