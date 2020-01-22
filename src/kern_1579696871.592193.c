#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(170, 390, "random");
	double **A = create_two_dim_double(320, 140, "random");
	double ***B = create_three_dim_double(980, 430, 420, "random");

	for (int c = 0; c < 415; c++)
	  for (int b = 1; b < 140; b++)
	    for (int a = 2; a < 320; a++)
	    {
	      
	      B[a][b][c]=B[a+4][b+1][c+5]-0.029;
	      
	      A[a][b]=B[a][b][c];
	      A[a-2][b-1]=C[a][b];
	    }

    return 0;
}