#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(200, "random");
	double **B = create_two_dim_double(540, 200, "random");
	double **D = create_two_dim_double(230, 790, "random");
	double ***E = create_three_dim_double(350, 260, 500, "random");
	double **C = create_two_dim_double(940, 40, "random");

	for (int c = 0; c < 496; c++)
	  for (int b = 5; b < 260; b++)
	    for (int a = 5; a < 200; a++)
	    {
	      
	      D[a][b]=D[a-3][b-5]/0.767;
	      
	      E[a][b][c]=E[a+3][b][c+4]/0.079;
	      
	      D[a][b]=0.461;
	      
	      A[a]=0.121;
	      A[a-5]=0.962;
	      
	      B[a][b]=D[a][b]*A[a]/B[a][b];
	      D[a][b]=D[a+4][b+5]-C[a][b]/E[a][b][c]+E[a][b][c];
	    }

    return 0;
}