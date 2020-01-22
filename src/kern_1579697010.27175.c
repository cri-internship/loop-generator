#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(240, 910, "zeros");
	double ***A = create_three_dim_double(220, 820, 360, "zeros");
	double **E = create_two_dim_double(810, 640, "zeros");
	double **D = create_two_dim_double(210, 280, "zeros");
	double *C = create_one_dim_double(690, "zeros");

	for (int c = 5; c < 355; c++)
	  for (int b = 1; b < 276; b++)
	    for (int a = 5; a < 208; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b][c-5]-D[a][b]+E[a][b]*C[a]/B[a][b];
	      
	      B[a][b]=B[a-1][b-1]+A[a][b][c]-A[a][b][c]/D[a][b]*C[a];
	      
	      A[a][b][c]=A[a+5][b+5][c+5]+B[a][b]*E[a][b]-0.095;
	      
	      B[a][b]=0.361;
	      
	      E[a][b]=D[a][b]+0.871*C[a]-E[a][b]/B[a][b];
	      B[a][b]=D[a+2][b+4]-B[a][b]/C[a];
	    }

    return 0;
}