#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(580, "zeros");
	int **C = create_two_dim_int(850, 670, "zeros");
	int *A = create_one_dim_int(420, "zeros");

	for (int d = 0; d < 667; d++)
	  for (int c = 2; c < 580; c++)
	    for (int b = 2; b < 580; b++)
	      for (int a = 2; a < 580; a++)
	      {
	        
	       B[a]=A[a]*C[a][b];
	       B[a]=B[a]-1/C[a][b];
	        
	       C[a][b]=4;
	       C[a+1][b+3]=8;
	        
	       int var_a=B[a]/24;
	       int var_b=B[a-2]-21;
	      }

    return 0;
}