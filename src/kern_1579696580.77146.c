#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(750, 100, 70, "random");
	float **D = create_two_dim_float(390, 640, "random");
	float **A = create_two_dim_float(560, 20, "random");
	float ***E = create_three_dim_float(870, 110, 920, "random");
	float ***B = create_three_dim_float(210, 40, 980, "random");

	for (int b = 5; b < 15; b++)
	  for (int a = 5; a < 210; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-5][a-4]-0.792+C[a][b][a];
	    
	     D[a][b]=D[a+2][b+1]/B[a][b][a]+E[a][b][a];
	    
	     A[a][b]=A[a+5][b+5]*D[a][b];
	    
	     C[a][b][a]=D[a][b]+B[a][b][a]*A[a][b]/E[a][b][a];
	     C[a+2][b+4][a]=E[a][b][a]+A[a][b];
	    
	     float var_a=A[a][b]/0.096;
	     float var_b=A[a-3][b-1]+0.646;
	    
	     B[a][b][a]=E[a][b][a]-0.178;
	     C[a][b][a]=E[a-5][b-5][a]*C[a][b][a]/0.316+B[a][b][a];
	  }

    return 0;
}