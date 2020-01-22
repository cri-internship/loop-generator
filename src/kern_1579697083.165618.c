#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(350, "random");
	double ***B = create_three_dim_double(150, 300, 810, "random");
	double *D = create_one_dim_double(610, "random");
	double **C = create_two_dim_double(970, 670, "random");

	for (int b = 2; b < 295; b++)
	  for (int a = 1; a < 145; a++)
	  {
	    
	     C[a][b]=C[a-1][b-2]*0.476;
	    
	     A[a]=A[a-1]-0.781;
	    
	     D[a]=A[a]-B[a][b][a]/C[a][b];
	    
	     D[a]=D[a+3]+0.96;
	    
	     A[a]=A[a+4]-C[a][b]*B[a][b][a];
	    
	     B[a][b][a]=0.741;
	     B[a+5][b+5][a+4]=0.615;
	    
	     B[a][b][a]=D[a]/A[a]+A[a]-C[a][b];
	     C[a][b]=D[a]+B[a][b][a]*C[a][b];
	  }

    return 0;
}