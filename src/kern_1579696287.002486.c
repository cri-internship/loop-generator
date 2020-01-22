#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(290, 400, 140, "random");
	double *A = create_one_dim_double(280, "random");
	double **C = create_two_dim_double(450, 290, "random");

	for (int c = 2; c < 136; c++)
	  for (int b = 5; b < 287; b++)
	    for (int a = 4; a < 280; a++)
	    {
	      
	      A[a]=A[a-4]-C[a][b];
	      
	      C[a][b]=C[a][b-5]/0.843;
	      
	      C[a][b]=C[a-3][b]-B[a][b][c];
	      
	      B[a][b][c]=B[a+3][b+3][c+4]/1.0;
	      
	      B[a][b][c]=0.796;
	      
	      A[a]=C[a][b]+A[a]/A[a];
	      B[a][b][c]=C[a+3][b+3]+A[a]*B[a][b][c];
	    }

    return 0;
}