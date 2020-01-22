#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(480, "zeros");
	double *D = create_one_dim_double(790, "zeros");
	double ***A = create_three_dim_double(370, 700, 760, "zeros");
	double **B = create_two_dim_double(620, 430, "zeros");

	for (int c = 2; c < 756; c++)
	  for (int b = 4; b < 428; b++)
	    for (int a = 4; a < 370; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-2][c]-D[a];
	      
	      C[a]=C[a+2]/0.575;
	      
	      B[a][b]=B[a+3][b+2]-0.512;
	      
	      A[a][b][c]=A[a][b+1][c+4]/0.917;
	      
	      B[a][b]=A[a][b][c]*B[a][b]-D[a];
	      D[a]=A[a-3][b-4][c-2]-C[a]/D[a];
	    }

    return 0;
}