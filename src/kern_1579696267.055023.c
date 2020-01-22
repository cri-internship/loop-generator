#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(990, 510, 890, "zeros");
	double *C = create_one_dim_double(800, "zeros");
	double *B = create_one_dim_double(560, "zeros");

	for (int c = 4; c < 887; c++)
	  for (int b = 1; b < 505; b++)
	    for (int a = 4; a < 560; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-1][c-4]/B[a]*C[a];
	      
	      B[a]=B[a-2]*A[a][b][c];
	      
	      A[a][b][c]=A[a+1][b+5][c+3]-C[a]*B[a];
	      
	      C[a]=0.878;
	      C[a+1]=0.612;
	      
	      C[a]=C[a]+B[a]*A[a][b][c];
	      A[a][b][c]=C[a-3]+B[a]*A[a][b][c];
	      
	      B[a]=C[a]/A[a][b][c];
	      C[a]=C[a+3]+A[a][b][c];
	    }

    return 0;
}