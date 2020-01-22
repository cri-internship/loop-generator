#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(590, "zeros");
	double ***D = create_three_dim_double(840, 760, 40, "zeros");
	double *B = create_one_dim_double(270, "zeros");
	double **C = create_two_dim_double(530, 880, "zeros");

	for (int c = 0; c < 875; c++)
	  for (int b = 0; b < 530; b++)
	    for (int a = 0; a < 530; a++)
	    {
	      
	      D[a][b][c]=A[a]/B[a];
	      B[a]=A[a+4]*D[a][b][c]-C[a][b]/0.993;
	      
	      C[a][b]=C[a][b]-0.884;
	      A[a]=C[a][b+5]-A[a]/B[a]*D[a][b][c];
	      
	      C[a][b]=C[a][b]*A[a];
	      C[a][b]=C[a][b+4]*D[a][b][c]/A[a];
	    }

    return 0;
}