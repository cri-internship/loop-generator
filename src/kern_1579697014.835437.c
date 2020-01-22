#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(510, 930, "ones");
	int *B = create_one_dim_int(280, "ones");
	int *D = create_one_dim_int(900, "ones");
	int **A = create_two_dim_int(320, 910, "ones");
	int *E = create_one_dim_int(570, "ones");

	for (int d = 0; d < 905; d++)
	  for (int c = 5; c < 280; c++)
	    for (int b = 5; b < 280; b++)
	      for (int a = 5; a < 280; a++)
	      {
	        
	       A[a][b]=A[a+1][b+5]/E[a]*D[a]-B[a]+C[a][b];
	        
	       B[a]=50;
	       B[a-5]=7;
	      }

    return 0;
}