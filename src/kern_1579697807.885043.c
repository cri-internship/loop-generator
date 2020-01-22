#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(590, 590, 910, "zeros");
	double ***B = create_three_dim_double(710, 430, 940, "zeros");
	double ***C = create_three_dim_double(400, 740, 480, "zeros");
	double *A = create_one_dim_double(450, "zeros");
	double **D = create_two_dim_double(620, 260, "zeros");

	for (int c = 4; c < 478; c++)
	  for (int b = 1; b < 259; b++)
	    for (int a = 3; a < 395; a++)
	    {
	      
	      E[a][b][c]=B[a][b][c];
	      E[a][b-1][c-1]=D[a][b]+C[a][b][c]*A[a];
	      
	      D[a][b]=0.024;
	      D[a+4][b+1]=0.864;
	      
	      E[a][b][c]=0.813;
	      
	      double var_a=C[a][b][c]+0.013;
	      double var_b=C[a+5][b+4][c+2]-0.017;
	      
	      B[a][b][c]=B[a][b][c]/0.831;
	      A[a]=B[a+1][b][c+1]/E[a][b][c]*D[a][b];
	    }

    return 0;
}