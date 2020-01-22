#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(110, "random");
	double *D = create_one_dim_double(730, "random");
	double *E = create_one_dim_double(800, "random");
	double *B = create_one_dim_double(210, "random");
	double ***A = create_three_dim_double(140, 450, 890, "random");

	for (int d = 3; d < 890; d++)
	  for (int c = 4; c < 450; c++)
	    for (int b = 5; b < 140; b++)
	      for (int a = 5; a < 140; a++)
	      {
	        
	       E[a]=E[a+4]-0.13;
	        
	       A[a][b][c]=E[a]*B[a];
	       A[a-2][b-4][c-3]=D[a]-C[a]+D[a];
	        
	       E[a]=0.255;
	        
	       B[a]=A[a][b][c]-A[a][b][c]+E[a]/D[a];
	       B[a-2]=D[a]/A[a][b][c]+C[a]-E[a];
	      }

    return 0;
}