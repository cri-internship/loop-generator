#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(500, 350, "random");
	double **B = create_two_dim_double(860, 230, "random");
	double **D = create_two_dim_double(410, 840, "random");
	double *A = create_one_dim_double(450, "random");

	for (int c = 5; c < 229; c++)
	  for (int b = 2; b < 405; b++)
	    for (int a = 2; a < 405; a++)
	    {
	      
	      B[a][b]=B[a-2][b-5]+0.039*C[a][b];
	      
	      D[a][b]=D[a+5][b+4]+B[a][b]-A[a];
	      
	      D[a][b]=A[a]*C[a][b]-B[a][b];
	      
	      B[a][b]=D[a][b]/A[a]*C[a][b];
	      
	      A[a]=0.241;
	      A[a+1]=0.273;
	      
	      A[a]=A[a]+D[a][b]*C[a][b]-B[a][b];
	      C[a][b]=A[a+3]*C[a][b]/D[a][b]+B[a][b];
	      
	      D[a][b]=A[a]/D[a][b];
	      B[a][b]=A[a+5]*C[a][b]/B[a][b]+0.218;
	    }

    return 0;
}