#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(920, 340, "random");
	double ***B = create_three_dim_double(480, 230, 90, "random");
	double *A = create_one_dim_double(210, "random");
	double ***C = create_three_dim_double(150, 250, 380, "random");
	double **E = create_two_dim_double(930, 240, "random");

	for (int c = 0; c < 375; c++)
	  for (int b = 3; b < 247; b++)
	    for (int a = 3; a < 149; a++)
	    {
	      
	      D[a][b]=D[a-3][b-3]+0.385;
	      
	      C[a][b][c]=E[a][b]*A[a]+D[a][b];
	      C[a][b+1][c+2]=B[a][b][c]/A[a]-0.039+B[a][b][c];
	      
	      B[a][b][c]=C[a][b][c]/E[a][b];
	      C[a][b][c]=C[a+1][b+3][c+5]/D[a][b]-E[a][b]*A[a]+0.286;
	    }

    return 0;
}