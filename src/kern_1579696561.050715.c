#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(940, "random");
	double **D = create_two_dim_double(120, 500, "random");
	double ***B = create_three_dim_double(390, 980, 440, "random");
	double *E = create_one_dim_double(340, "random");
	double ***C = create_three_dim_double(270, 450, 960, "random");

	for (int c = 5; c < 440; c++)
	  for (int b = 5; b < 450; b++)
	    for (int a = 4; a < 265; a++)
	    {
	      
	      C[a][b][c]=C[a-2][b-5][c-5]*0.851+D[a][b];
	      
	      C[a][b][c]=C[a-4][b-1][c-5]+E[a]-B[a][b][c]*D[a][b]/B[a][b][c];
	      
	      C[a][b][c]=C[a+5][b][c+1]/0.418;
	      
	      E[a]=0.0;
	      E[a-1]=0.319;
	      
	      B[a][b][c]=C[a][b][c]-C[a][b][c];
	      B[a+5][b+5][c]=A[a]/D[a][b];
	    }

    return 0;
}