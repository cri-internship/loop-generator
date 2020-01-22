#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(90, 280, 800, "ones");
	double *B = create_one_dim_double(920, "ones");
	double *C = create_one_dim_double(510, "ones");

	for (int c = 4; c < 797; c++)
	  for (int b = 3; b < 280; b++)
	    for (int a = 5; a < 86; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-3][c-4]-B[a]*C[a];
	      
	      C[a]=C[a-5]/A[a][b][c];
	      
	      C[a]=C[a-2]+A[a][b][c];
	      
	      A[a][b][c]=A[a+4][b][c+3]*0.817;
	      
	      B[a]=B[a+5]+0.496;
	      
	      B[a]=0.399;
	      
	      B[a]=C[a]/A[a][b][c];
	      C[a]=C[a-1]/B[a];
	    }

    return 0;
}