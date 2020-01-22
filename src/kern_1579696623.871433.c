#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(510, 880, "random");
	int *A = create_one_dim_int(560, "random");
	int *C = create_one_dim_int(520, "random");
	int *B = create_one_dim_int(360, "random");

	for (int d = 3; d < 880; d++)
	  for (int c = 4; c < 355; c++)
	    for (int b = 4; b < 355; b++)
	      for (int a = 4; a < 355; a++)
	      {
	        
	       D[a][b]=D[a-4][b-3]+30;
	        
	       C[a]=C[a+3]/B[a];
	        
	       B[a]=B[a+5]-30;
	        
	       A[a]=C[a]/C[a];
	       A[a+5]=C[a]/B[a]-D[a][b];
	      }

    return 0;
}