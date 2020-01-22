#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(930, "zeros");
	double **D = create_two_dim_double(930, 760, "zeros");
	double ***C = create_three_dim_double(690, 560, 220, "zeros");
	double ***A = create_three_dim_double(170, 650, 840, "zeros");

	for (int c = 5; c < 220; c++)
	  for (int b = 5; b < 560; b++)
	    for (int a = 5; a < 170; a++)
	    {
	      
	      D[a][b]=D[a][b-5]+0.612;
	      
	      A[a][b][c]=A[a-3][b-1][c-2]*0.263;
	      
	      C[a][b][c]=C[a-1][b-4][c-5]-B[a]+0.621*D[a][b];
	      
	      D[a][b]=D[a+3][b]-C[a][b][c];
	      
	      B[a]=0.278;
	      B[a-1]=0.316;
	      
	      B[a]=0.96;
	      
	      A[a][b][c]=A[a][b][c]*C[a][b][c]/B[a]+D[a][b];
	      D[a][b]=A[a-5][b-1][c]+0.914-D[a][b];
	    }

    return 0;
}