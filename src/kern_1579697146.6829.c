#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(520, "random");
	double **B = create_two_dim_double(800, 460, "random");
	double **C = create_two_dim_double(420, 950, "random");
	double ***A = create_three_dim_double(210, 580, 460, "random");
	double *D = create_one_dim_double(1000, "random");

	for (int c = 2; c < 458; c++)
	  for (int b = 3; b < 416; b++)
	    for (int a = 3; a < 416; a++)
	    {
	      
	      C[a][b]=D[a]+B[a][b]/A[a][b][c]-0.044;
	      C[a+1][b+5]=0.821-D[a];
	      
	      D[a]=0.651;
	      D[a+1]=0.615;
	      
	      C[a][b]=D[a]+A[a][b][c];
	      
	      double var_a=C[a][b]-0.019;
	      double var_b=C[a-2][b-1]/0.747;
	      
	      B[a][b]=B[a][b]+C[a][b]/C[a][b]-D[a]*E[a];
	      E[a]=B[a][b+2]-E[a]/A[a][b][c];
	      
	      D[a]=C[a][b]/B[a][b]-E[a]*0.292;
	      A[a][b][c]=C[a][b-2]+D[a]-E[a]/B[a][b]*A[a][b][c];
	    }

    return 0;
}