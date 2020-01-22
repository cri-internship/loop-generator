#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(580, 470, "zeros");
	float **C = create_two_dim_float(190, 860, "zeros");
	float *D = create_one_dim_float(500, "zeros");
	float *B = create_one_dim_float(750, "zeros");
	float **E = create_two_dim_float(830, 800, "zeros");

	for (int c = 2; c < 470; c++)
	  for (int b = 1; b < 185; b++)
	    for (int a = 1; a < 185; a++)
	    {
	      
	      A[a][b]=A[a][b-2]/0.08;
	      
	      D[a]=D[a-1]*B[a]-A[a][b];
	      
	      C[a][b]=C[a+5][b+4]/0.998;
	      
	      D[a]=D[a+4]*E[a][b]/C[a][b];
	      
	      D[a]=D[a+5]/A[a][b]*C[a][b]+E[a][b]-B[a];
	      
	      E[a][b]=0.112;
	      E[a+5][b+3]=0.233;
	      
	      D[a]=D[a]/C[a][b]-E[a][b]+A[a][b];
	    }

    return 0;
}