#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(580, 760, 960, "ones");
	float **D = create_two_dim_float(100, 940, "ones");
	float ***A = create_three_dim_float(370, 630, 650, "ones");
	float **C = create_two_dim_float(290, 140, "ones");
	float *E = create_one_dim_float(600, "ones");

	for (int c = 3; c < 935; c++)
	  for (int b = 5; b < 95; b++)
	    for (int a = 5; a < 95; a++)
	    {
	      
	      D[a][b]=D[a+5][b+5]*0.384;
	      
	      E[a]=D[a][b]+C[a][b]/B[a][b][c]*A[a][b][c];
	      E[a-5]=C[a][b]-D[a][b]/A[a][b][c]+B[a][b][c];
	      
	      D[a][b]=E[a]+B[a][b][c]*E[a];
	    }

    return 0;
}