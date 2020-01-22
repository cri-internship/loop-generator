#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(790, 630, 60, "random");
	double *A = create_one_dim_double(680, "random");
	double *B = create_one_dim_double(450, "random");
	double **D = create_two_dim_double(930, 350, "random");

	for (int c = 1; c < 60; c++)
	  for (int b = 2; b < 350; b++)
	    for (int a = 3; a < 445; a++)
	    {
	      
	      C[a][b][c]=C[a][b-2][c-1]-A[a]/0.898+D[a][b];
	      
	      D[a][b]=D[a][b-1]+0.885;
	      
	      A[a]=A[a-3]+0.656;
	      
	      B[a]=B[a+5]-0.482;
	      
	      D[a][b]=D[a+4][b]*0.005;
	      
	      B[a]=0.642;
	    }

    return 0;
}