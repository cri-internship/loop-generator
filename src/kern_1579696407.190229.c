#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(450, 730, "ones");
	int **B = create_two_dim_int(990, 190, "ones");
	int **C = create_two_dim_int(820, 760, "ones");
	int *A = create_one_dim_int(940, "ones");

	for (int d = 1; d < 185; d++)
	  for (int c = 3; c < 450; c++)
	    for (int b = 3; b < 450; b++)
	      for (int a = 3; a < 450; a++)
	      {
	        
	       D[a][b]=D[a-3][b-1]/48;
	        
	       C[a][b]=C[a+2][b+1]*23;
	        
	       B[a][b]=B[a+5][b+5]+31;
	        
	       A[a]=A[a+5]*37;
	      }

    return 0;
}