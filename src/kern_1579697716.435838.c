#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(730, "zeros");
	int **A = create_two_dim_int(130, 350, "zeros");
	int **E = create_two_dim_int(170, 300, "zeros");
	int *C = create_one_dim_int(290, "zeros");
	int *B = create_one_dim_int(940, "zeros");

	for (int d = 3; d < 350; d++)
	  for (int c = 5; c < 130; c++)
	    for (int b = 5; b < 130; b++)
	      for (int a = 5; a < 130; a++)
	      {
	        
	       A[a][b]=A[a-5][b-3]-B[a]+C[a];
	        
	       D[a]=D[a+1]/A[a][b]+E[a][b]*B[a]-A[a][b];
	      }

    return 0;
}