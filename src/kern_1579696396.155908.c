#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(930, 120, "random");
	float *C = create_one_dim_float(850, "random");
	float **A = create_two_dim_float(710, 160, "random");
	float *D = create_one_dim_float(240, "random");
	float **E = create_two_dim_float(560, 340, "random");

	for (int c = 0; c < 336; c++)
	  for (int b = 4; b < 240; b++)
	    for (int a = 4; a < 240; a++)
	    {
	      
	      D[a]=D[a-4]*0.792+C[a];
	      
	      D[a]=0.602;
	      
	      E[a][b]=A[a][b]*D[a];
	      E[a+3][b+4]=B[a][b]-A[a][b];
	      
	      float var_b=C[a]/0.946;
	      float var_c=C[a+2]+0.715;
	    }

    return 0;
}