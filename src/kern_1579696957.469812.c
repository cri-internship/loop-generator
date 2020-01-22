#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(670, 750, 240, "random");
	double **B = create_two_dim_double(810, 680, "random");
	double **C = create_two_dim_double(560, 800, "random");
	double **A = create_two_dim_double(940, 910, "random");
	double ***D = create_three_dim_double(460, 180, 770, "random");

	for (int c = 0; c < 766; c++)
	  for (int b = 4; b < 179; b++)
	    for (int a = 4; a < 455; a++)
	    {
	      
	      B[a][b]=B[a-2][b]-0.924;
	      
	      B[a][b]=B[a-4][b-3]+0.553;
	      
	      C[a][b]=C[a][b+3]+B[a][b]-D[a][b][c]/E[a][b][c]*A[a][b];
	      
	      D[a][b][c]=0.068;
	      D[a+5][b+1][c+4]=0.426;
	      
	      C[a][b]=A[a][b]*D[a][b][c]/B[a][b]-E[a][b][c];
	      
	      A[a][b]=0.768;
	      A[a+1][b+2]=0.549;
	      
	      double var_a=C[a][b]*0.757;
	      double var_b=C[a+2][b+4]/0.838;
	    }

    return 0;
}