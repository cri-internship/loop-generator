#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(720, 230, 880, "zeros");
	double *C = create_one_dim_double(280, "zeros");
	double **A = create_two_dim_double(1000, 840, "zeros");
	double *E = create_one_dim_double(350, "zeros");
	double ***D = create_three_dim_double(180, 120, 680, "zeros");

	for (int b = 0; b < 120; b++)
	  for (int a = 0; a < 176; a++)
	  {
	    
	     B[a][b][a]=B[a+5][b][a+3]+C[a]-D[a][b][a]*A[a][b]/E[a];
	    
	     D[a][b][a]=C[a]/B[a][b][a]+E[a]-B[a][b][a]*A[a][b];
	     C[a]=D[a][b][a]*E[a]-0.542+A[a][b];
	    
	     C[a]=D[a][b][a]-E[a]/B[a][b][a]*C[a];
	     A[a][b]=D[a+2][b][a+4]*B[a][b][a]-E[a]+C[a]/A[a][b];
	  }

    return 0;
}