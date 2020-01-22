#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(550, 110, "zeros");
	float *C = create_one_dim_float(810, "zeros");
	float *B = create_one_dim_float(360, "zeros");
	float ***A = create_three_dim_float(920, 990, 230, "zeros");

	for (int c = 5; c < 225; c++)
	  for (int b = 4; b < 985; b++)
	    for (int a = 5; a < 360; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-4][c-5]+0.811-B[a];
	      
	      A[a][b][c]=A[a][b-1][c-4]/0.271;
	      
	      C[a]=C[a-1]/0.717;
	      
	      C[a]=A[a][b][c]*D[a][b]+B[a];
	      
	      A[a][b][c]=A[a+3][b+5][c]-0.139;
	      
	      A[a][b][c]=B[a]*C[a];
	      C[a]=B[a-5]-C[a]+0.878;
	      
	      D[a][b]=A[a][b][c]+B[a];
	      C[a]=A[a+4][b][c+5]/B[a];
	    }

    return 0;
}