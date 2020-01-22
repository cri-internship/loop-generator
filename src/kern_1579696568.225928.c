#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(800, 240, 730, "zeros");
	double **D = create_two_dim_double(200, 530, "zeros");
	double ***C = create_three_dim_double(650, 40, 630, "zeros");
	double *A = create_one_dim_double(910, "zeros");

	for (int b = 3; b < 40; b++)
	  for (int a = 3; a < 198; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b-3][a-1]-A[a]/D[a][b]+B[a][b][a];
	    
	     A[a]=A[a-3]-0.64;
	    
	     D[a][b]=D[a][b-2]-0.319;
	    
	     A[a]=A[a+2]/0.186;
	    
	     C[a][b][a]=D[a][b]+C[a][b][a]-A[a]/B[a][b][a];
	     A[a]=D[a+2][b+3]-C[a][b][a];
	  }

    return 0;
}