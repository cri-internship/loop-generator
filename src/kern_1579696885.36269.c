#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(40, 100, "zeros");
	double ***E = create_three_dim_double(770, 110, 340, "zeros");
	double *C = create_one_dim_double(300, "zeros");
	double **D = create_two_dim_double(1000, 760, "zeros");
	double **B = create_two_dim_double(370, 200, "zeros");

	for (int c = 3; c < 335; c++)
	  for (int b = 3; b < 105; b++)
	    for (int a = 5; a < 370; a++)
	    {
	      
	      E[a][b][c]=E[a+1][b+5][c+5]*C[a]+A[a][b];
	      
	      D[a][b]=B[a][b]-E[a][b][c]/C[a]*A[a][b];
	      D[a+3][b+2]=0.896+A[a][b]/E[a][b][c];
	      
	      E[a][b][c]=0.459;
	      
	      E[a][b][c]=B[a][b]-D[a][b]/D[a][b]*C[a];
	      B[a][b]=B[a-5][b-3]-E[a][b][c]*C[a]+D[a][b];
	    }

    return 0;
}