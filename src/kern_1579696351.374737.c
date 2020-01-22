#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(100, 830, 810, "zeros");
	double **A = create_two_dim_double(680, 30, "zeros");
	double ***D = create_three_dim_double(420, 870, 240, "zeros");
	double **C = create_two_dim_double(710, 790, "zeros");

	for (int b = 2; b < 789; b++)
	  for (int a = 0; a < 95; a++)
	  {
	    
	     C[a][b]=C[a][b-2]+0.195;
	    
	     B[a][b][a]=B[a+1][b+4][a+5]*0.674;
	    
	     D[a][b][a]=D[a+2][b+2][a+3]*C[a][b]-A[a][b]/B[a][b][a];
	    
	     C[a][b]=C[a][b]-0.974/B[a][b][a]*D[a][b][a];
	     D[a][b][a]=C[a][b+1]-B[a][b][a]+A[a][b];
	  }

    return 0;
}