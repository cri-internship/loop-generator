#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(650, 320, 560, "zeros");
	double *C = create_one_dim_double(770, "zeros");
	double **D = create_two_dim_double(560, 320, "zeros");
	double ***B = create_three_dim_double(370, 590, 170, "zeros");
	double **A = create_two_dim_double(730, 390, "zeros");

	for (int c = 3; c < 560; c++)
	  for (int b = 5; b < 320; b++)
	    for (int a = 3; a < 650; a++)
	    {
	      
	      E[a][b][c]=E[a-2][b-3][c-3]+C[a]/B[a][b][c]*D[a][b]-A[a][b];
	      
	      A[a][b]=A[a-3][b-5]+E[a][b][c]*B[a][b][c]/E[a][b][c];
	    }

    return 0;
}