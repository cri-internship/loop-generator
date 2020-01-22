#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(620, "zeros");
	double ***B = create_three_dim_double(360, 840, 840, "zeros");
	double **A = create_two_dim_double(940, 160, "zeros");

	for (int c = 5; c < 837; c++)
	  for (int b = 5; b < 160; b++)
	    for (int a = 3; a < 356; a++)
	    {
	      
	      A[a][b]=A[a-1][b-4]*C[a];
	      
	      B[a][b][c]=B[a-1][b-5][c]-A[a][b]+C[a];
	      
	      B[a][b][c]=B[a+4][b+5][c+2]-0.624;
	      
	      B[a][b][c]=B[a+4][b][c+3]-C[a]*A[a][b];
	      
	      C[a]=C[a+3]/0.807;
	      
	      B[a][b][c]=B[a][b][c]-C[a];
	      A[a][b]=B[a][b-3][c-5]/A[a][b];
	    }

    return 0;
}