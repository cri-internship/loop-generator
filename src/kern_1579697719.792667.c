#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(490, 560, "ones");
	int *C = create_one_dim_int(570, "ones");
	int **D = create_two_dim_int(140, 220, "ones");
	int *E = create_one_dim_int(600, "ones");
	int *B = create_one_dim_int(720, "ones");

	for (int d = 0; d < 555; d++)
	  for (int c = 5; c < 488; c++)
	    for (int b = 5; b < 488; b++)
	      for (int a = 5; a < 488; a++)
	      {
	        
	       C[a]=C[a+1]-A[a][b]/B[a];
	        
	       A[a][b]=E[a];
	       A[a+2][b+5]=C[a]*D[a][b];
	        
	       D[a][b]=E[a]+D[a][b]/A[a][b]-C[a];
	       A[a][b]=E[a-5]-C[a]*A[a][b]/D[a][b]+B[a];
	        
	       B[a]=E[a]/B[a]+C[a];
	       E[a]=E[a-3]/A[a][b]-C[a]*D[a][b]+B[a];
	        
	       int var_a=B[a]/14;
	       int var_b=B[a+4]-18;
	      }

    return 0;
}