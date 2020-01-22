#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(150, 640, "zeros");
	double *C = create_one_dim_double(890, "zeros");
	double *D = create_one_dim_double(780, "zeros");
	double **A = create_two_dim_double(430, 400, "zeros");
	double **E = create_two_dim_double(950, 170, "zeros");

	for (int c = 1; c < 165; c++)
	  for (int b = 2; b < 430; b++)
	    for (int a = 2; a < 430; a++)
	    {
	      
	      A[a][b]=A[a-2][b-1]+D[a];
	      
	      E[a][b]=B[a][b]+C[a]/A[a][b]*C[a];
	      E[a+3][b+5]=C[a]*D[a]+A[a][b];
	      
	      E[a][b]=0.035;
	      
	      C[a]=C[a]-E[a][b]+B[a][b];
	      E[a][b]=C[a-2]*B[a][b]+A[a][b];
	      
	      D[a]=D[a]*0.05;
	    }

    return 0;
}