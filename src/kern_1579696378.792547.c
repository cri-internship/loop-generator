#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(230, "random");
	int **A = create_two_dim_int(710, 550, "random");
	int *D = create_one_dim_int(610, "random");
	int *C = create_one_dim_int(70, "random");
	int *E = create_one_dim_int(650, "random");

	for (int d = 3; d < 549; d++)
	  for (int c = 0; c < 67; c++)
	    for (int b = 0; b < 67; b++)
	      for (int a = 0; a < 67; a++)
	      {
	        
	       A[a][b]=A[a+2][b+1]/45;
	        
	       D[a]=D[a+4]-B[a]/C[a];
	        
	       C[a]=C[a+3]+10;
	        
	       D[a]=E[a]*C[a]-A[a][b];
	        
	       A[a][b]=29;
	      }

    return 0;
}