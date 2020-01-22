#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(850, "ones");
	double **D = create_two_dim_double(820, 650, "ones");
	double ***E = create_three_dim_double(30, 820, 990, "ones");
	double **C = create_two_dim_double(750, 440, "ones");
	double ***B = create_three_dim_double(320, 150, 950, "ones");

	for (int c = 5; c < 950; c++)
	  for (int b = 5; b < 150; b++)
	    for (int a = 5; a < 29; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b][c-5]-0.896;
	      
	      D[a][b]=D[a-3][b-1]+0.692;
	      
	      D[a][b]=0.094;
	      
	      C[a][b]=A[a]/D[a][b]-E[a][b][c]*B[a][b][c];
	      C[a][b]=0.438*B[a][b][c]/D[a][b]-E[a][b][c];
	      
	      E[a][b][c]=0.256;
	      E[a+1][b+2][c+5]=0.424;
	      
	      E[a][b][c]=D[a][b]-C[a][b];
	      C[a][b]=D[a-4][b-4]/B[a][b][c]*A[a]+C[a][b]-E[a][b][c];
	      
	      A[a]=C[a][b]/B[a][b][c];
	      D[a][b]=C[a-5][b-1]*E[a][b][c]+A[a]-B[a][b][c];
	    }

    return 0;
}