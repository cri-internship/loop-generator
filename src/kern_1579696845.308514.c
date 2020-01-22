#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(520, 190, "random");
	double **C = create_two_dim_double(900, 570, "random");
	double *B = create_one_dim_double(630, "random");
	double ***D = create_three_dim_double(600, 780, 910, "random");
	double *A = create_one_dim_double(390, "random");

	for (int c = 0; c < 910; c++)
	  for (int b = 2; b < 188; b++)
	    for (int a = 1; a < 517; a++)
	    {
	      
	      E[a][b]=E[a+3][b+2]-0.341;
	      
	      C[a][b]=0.704;
	      C[a-1][b-2]=0.569;
	      
	      B[a]=D[a][b][c]+E[a][b];
	      D[a][b][c]=D[a+1][b+4][c]+A[a]/B[a]-C[a][b]*C[a][b];
	    }

    return 0;
}