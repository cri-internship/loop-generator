#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(720, "random");
	double **D = create_two_dim_double(100, 50, "random");
	double ***E = create_three_dim_double(950, 30, 490, "random");
	double **A = create_two_dim_double(170, 920, "random");
	double ***C = create_three_dim_double(220, 800, 280, "random");

	for (int c = 0; c < 280; c++)
	  for (int b = 3; b < 28; b++)
	    for (int a = 5; a < 100; a++)
	    {
	      
	      D[a][b]=D[a][b-3]-C[a][b][c]*E[a][b][c];
	      
	      B[a]=B[a-5]-D[a][b]/A[a][b]*A[a][b];
	      
	      E[a][b][c]=E[a+4][b+2][c+5]*B[a]-B[a];
	      
	      B[a]=B[a+1]/E[a][b][c];
	      
	      C[a][b][c]=C[a][b+2][c]+0.625;
	      
	      A[a][b]=0.523;
	      A[a-2][b]=0.087;
	    }

    return 0;
}