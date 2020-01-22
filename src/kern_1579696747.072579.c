#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(60, "zeros");
	double ***C = create_three_dim_double(720, 900, 930, "zeros");
	double *B = create_one_dim_double(220, "zeros");

	for (int c = 5; c < 926; c++)
	  for (int b = 5; b < 895; b++)
	    for (int a = 1; a < 57; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-5][c-5]/0.477;
	      
	      A[a]=A[a+1]*C[a][b][c];
	      
	      C[a][b][c]=C[a][b+5][c+4]/A[a];
	      
	      A[a]=A[a+3]*B[a];
	      
	      B[a]=0.923;
	      B[a-1]=0.955;
	      
	      B[a]=C[a][b][c]-A[a];
	      C[a][b][c]=C[a][b-5][c-1]/B[a];
	    }

    return 0;
}