#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(590, "zeros");
	double ***D = create_three_dim_double(750, 30, 630, "zeros");
	double **E = create_two_dim_double(420, 610, "zeros");
	double *A = create_one_dim_double(440, "zeros");
	double **C = create_two_dim_double(120, 240, "zeros");

	for (int c = 3; c < 627; c++)
	  for (int b = 4; b < 29; b++)
	    for (int a = 2; a < 116; a++)
	    {
	      
	      D[a][b][c]=D[a-2][b-4][c-3]+0.264;
	      
	      C[a][b]=B[a]/E[a][b]-C[a][b]*A[a]+D[a][b][c];
	      B[a]=D[a][b][c]*C[a][b]/E[a][b]+0.499;
	      
	      E[a][b]=B[a]*D[a][b][c];
	      E[a-2][b-3]=B[a]*C[a][b]-D[a][b][c]+A[a];
	      
	      C[a][b]=E[a][b]+D[a][b][c]-B[a]/A[a];
	      
	      B[a]=E[a][b]/A[a]-D[a][b][c]*C[a][b];
	      
	      E[a][b]=D[a][b][c]+C[a][b]-B[a]/E[a][b]*A[a];
	      B[a]=D[a+5][b+1][c+3]*C[a][b]+B[a]/A[a]-E[a][b];
	    }

    return 0;
}