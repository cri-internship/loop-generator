#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(520, 70, "zeros");
	double *A = create_one_dim_double(760, "zeros");
	double ***B = create_three_dim_double(360, 640, 770, "zeros");

	for (int c = 5; c < 70; c++)
	  for (int b = 5; b < 517; b++)
	    for (int a = 5; a < 517; a++)
	    {
	      
	      C[a][b]=0.212;
	      C[a-3][b-5]=0.435;
	      
	      C[a][b]=B[a][b][c]/0.69;
	      
	      A[a]=C[a][b]/B[a][b][c];
	      A[a-5]=C[a][b]*B[a][b][c];
	    }

    return 0;
}