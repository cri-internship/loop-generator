#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(810, "random");
	double ***C = create_three_dim_double(740, 880, 600, "random");
	double ***E = create_three_dim_double(810, 420, 230, "random");
	double ***D = create_three_dim_double(520, 930, 550, "random");
	double *A = create_one_dim_double(250, "random");

	for (int c = 0; c < 225; c++)
	  for (int b = 0; b < 420; b++)
	    for (int a = 4; a < 247; a++)
	    {
	      
	      A[a]=A[a+3]-D[a][b][c]*C[a][b][c];
	      
	      D[a][b][c]=0.71+B[a]/E[a][b][c]-C[a][b][c];
	      D[a+4][b+2][c]=B[a]/C[a][b][c]-E[a][b][c]*A[a];
	      
	      A[a]=0.058;
	      
	      E[a][b][c]=C[a][b][c]*0.074;
	      E[a+5][b][c+5]=A[a];
	      
	      double var_a=A[a]+0.066;
	      double var_b=A[a-4]/0.773;
	    }

    return 0;
}