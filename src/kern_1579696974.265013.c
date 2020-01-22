#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(40, 70, 40, "zeros");
	double **A = create_two_dim_double(770, 590, "zeros");
	double ***D = create_three_dim_double(850, 950, 30, "zeros");
	double **C = create_two_dim_double(900, 310, "zeros");
	double *E = create_one_dim_double(570, "zeros");

	for (int c = 1; c < 40; c++)
	  for (int b = 4; b < 69; b++)
	    for (int a = 3; a < 39; a++)
	    {
	      
	      E[a]=C[a][b];
	      B[a][b][c]=E[a]-D[a][b][c]/A[a][b]*B[a][b][c]+B[a][b][c];
	      
	      C[a][b]=C[a][b+2]/0.632;
	      
	      B[a][b][c]=D[a][b][c]-E[a];
	      
	      double var_a=E[a]/0.281;
	      double var_b=E[a-3]-0.254;
	      
	      E[a]=C[a][b]+E[a]/B[a][b][c];
	      C[a][b]=C[a+2][b+2]*0.56;
	      
	      A[a][b]=B[a][b][c]/A[a][b]+E[a]*D[a][b][c]-C[a][b];
	      D[a][b][c]=B[a+1][b+1][c]-C[a][b]*E[a]/D[a][b][c];
	      
	      double var_c=A[a][b]-0.62;
	      double var_d=A[a-2][b-4]-0.696;
	    }

    return 0;
}