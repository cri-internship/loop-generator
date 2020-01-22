#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(920, "ones");
	double ***A = create_three_dim_double(580, 850, 470, "ones");
	double **E = create_two_dim_double(970, 380, "ones");
	double *B = create_one_dim_double(840, "ones");
	double ***D = create_three_dim_double(370, 910, 990, "ones");

	for (int c = 4; c < 470; c++)
	  for (int b = 5; b < 850; b++)
	    for (int a = 5; a < 580; a++)
	    {
	      
	      C[a]=C[a-3]*A[a][b][c]/0.064+D[a][b][c];
	      
	      B[a]=C[a]+A[a][b][c];
	      B[a-5]=A[a][b][c]-C[a]/D[a][b][c];
	      
	      double var_a=A[a][b][c]-0.451;
	      double var_b=A[a-2][b-5][c-4]/0.688;
	    }

    return 0;
}