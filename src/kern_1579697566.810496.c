#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(50, "random");
	double *B = create_one_dim_double(450, "random");
	double ***A = create_three_dim_double(590, 730, 590, "random");

	for (int d = 0; d < 586; d++)
	  for (int c = 0; c < 728; c++)
	    for (int b = 0; b < 50; b++)
	      for (int a = 0; a < 50; a++)
	      {
	        
	       C[a]=A[a][b][c];
	       C[a]=C[a]+0.098*B[a];
	        
	       B[a]=C[a]-0.688;
	       B[a]=B[a]+C[a];
	        
	       A[a][b][c]=A[a][b][c]-C[a]*B[a];
	       A[a][b][c]=A[a+3][b+2][c+4]*C[a]+B[a];
	      }

    return 0;
}