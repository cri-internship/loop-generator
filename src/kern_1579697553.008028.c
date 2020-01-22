#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(530, 80, "ones");
	double ***C = create_three_dim_double(130, 140, 620, "ones");
	double *A = create_one_dim_double(540, "ones");
	double *B = create_one_dim_double(460, "ones");
	double ***D = create_three_dim_double(460, 910, 100, "ones");

	for (int c = 1; c < 96; c++)
	  for (int b = 5; b < 80; b++)
	    for (int a = 4; a < 125; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b-4][c-1]+0.82;
	      
	      A[a]=A[a-4]-C[a][b][c];
	      
	      E[a][b]=E[a-2][b-5]+B[a]/D[a][b][c]*A[a]-D[a][b][c];
	      
	      C[a][b][c]=C[a+5][b+5][c+5]/0.63;
	      
	      D[a][b][c]=D[a+3][b+5][c+4]/0.303;
	    }

    return 0;
}