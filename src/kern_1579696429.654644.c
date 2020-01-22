#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(70, 80, 390, "random");
	double *A = create_one_dim_double(350, "random");
	double **D = create_two_dim_double(240, 220, "random");
	double **C = create_two_dim_double(270, 770, "random");

	for (int c = 0; c < 386; c++)
	  for (int b = 0; b < 76; b++)
	    for (int a = 2; a < 66; a++)
	    {
	      
	      D[a][b]=D[a+5][b+2]/0.342;
	      
	      B[a][b][c]=B[a+4][b+4][c+4]/A[a]+D[a][b]-C[a][b];
	      
	      B[a][b][c]=B[a+1][b][c+1]-D[a][b];
	      
	      double var_a=C[a][b]-0.312;
	      double var_b=C[a+2][b+2]/0.337;
	      
	      double var_c=D[a][b]*0.386;
	      double var_d=D[a-2][b]*0.43;
	      
	      C[a][b]=D[a][b]*B[a][b][c]+C[a][b];
	      A[a]=D[a+2][b+3]+B[a][b][c]-A[a]*C[a][b];
	    }

    return 0;
}