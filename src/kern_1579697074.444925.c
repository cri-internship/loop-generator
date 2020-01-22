#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(970, "zeros");
	double **C = create_two_dim_double(100, 200, "zeros");
	double **A = create_two_dim_double(290, 920, "zeros");

	for (int c = 4; c < 195; c++)
	  for (int b = 1; b < 97; b++)
	    for (int a = 1; a < 97; a++)
	    {
	      
	      C[a][b]=C[a-1][b-4]*0.441;
	      
	      B[a]=B[a+1]+A[a][b]*C[a][b];
	      
	      C[a][b]=C[a+3][b+5]/B[a];
	      
	      A[a][b]=B[a]-C[a][b];
	      A[a+5][b+5]=B[a];
	    }

    return 0;
}