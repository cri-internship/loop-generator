#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(290, 10, 750, "random");
	double *B = create_one_dim_double(570, "random");
	double ***C = create_three_dim_double(700, 20, 600, "random");
	double ***D = create_three_dim_double(40, 590, 200, "random");
	double ***E = create_three_dim_double(580, 30, 940, "random");

	for (int c = 5; c < 600; c++)
	  for (int b = 5; b < 10; b++)
	    for (int a = 2; a < 290; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-5][c-3]/A[a][b][c]*B[a];
	      
	      B[a]=A[a][b][c]-E[a][b][c]*D[a][b][c]/C[a][b][c]+E[a][b][c];
	      C[a][b][c]=A[a-2][b-4][c-5]-0.236;
	    }

    return 0;
}