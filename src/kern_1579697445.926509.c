#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(880, 580, 30, "ones");
	double **D = create_two_dim_double(810, 110, "ones");
	double **B = create_two_dim_double(350, 240, "ones");
	double **A = create_two_dim_double(830, 600, "ones");
	double ***C = create_three_dim_double(60, 920, 180, "ones");

	for (int b = 5; b < 240; b++)
	  for (int a = 3; a < 60; a++)
	  {
	    
	     B[a][b]=B[a-2][b-4]+E[a][b][a]-C[a][b][a]/A[a][b]*D[a][b];
	    
	     C[a][b][a]=C[a][b-5][a-3]/B[a][b]+E[a][b][a]-B[a][b]*D[a][b];
	    
	     A[a][b]=A[a+4][b+2]-B[a][b]/C[a][b][a];
	    
	     E[a][b][a]=C[a][b][a]+0.122;
	     E[a+5][b+1][a+1]=D[a][b]-B[a][b]*C[a][b][a]/A[a][b];
	  }

    return 0;
}