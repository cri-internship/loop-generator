#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(820, 580, "zeros");
	double ***E = create_three_dim_double(20, 60, 540, "zeros");
	double ***C = create_three_dim_double(330, 60, 670, "zeros");
	double ***D = create_three_dim_double(660, 670, 80, "zeros");
	double *A = create_one_dim_double(850, "zeros");

	for (int c = 5; c < 540; c++)
	  for (int b = 1; b < 60; b++)
	    for (int a = 2; a < 20; a++)
	    {
	      
	      E[a][b][c]=C[a][b][c]/D[a][b][c]*B[a][b]-A[a];
	      E[a-1][b][c-5]=A[a]/D[a][b][c]*0.836+B[a][b];
	      
	      C[a][b][c]=B[a][b]+E[a][b][c];
	      E[a][b][c]=B[a+4][b+2]/D[a][b][c]+E[a][b][c]-C[a][b][c]*A[a];
	      
	      double var_a=B[a][b]*0.198;
	      double var_b=B[a-2][b-1]*0.169;
	    }

    return 0;
}