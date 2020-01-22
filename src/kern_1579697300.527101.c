#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(550, 490, 320, "random");
	double ***E = create_three_dim_double(530, 400, 280, "random");
	double *C = create_one_dim_double(810, "random");
	double *B = create_one_dim_double(20, "random");
	double ***A = create_three_dim_double(740, 70, 280, "random");

	for (int c = 2; c < 280; c++)
	  for (int b = 0; b < 400; b++)
	    for (int a = 2; a < 15; a++)
	    {
	      
	      B[a]=B[a+5]-A[a][b][c];
	      
	      C[a]=C[a+3]*0.397;
	      
	      B[a]=B[a+1]/C[a]+D[a][b][c]-0.339*A[a][b][c];
	      
	      E[a][b][c]=B[a]-D[a][b][c];
	      E[a-2][b][c-2]=A[a][b][c]*D[a][b][c]-C[a];
	    }

    return 0;
}