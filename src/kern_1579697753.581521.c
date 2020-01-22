#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(980, 590, "ones");
	int **B = create_two_dim_int(60, 150, "ones");
	int *A = create_one_dim_int(500, "ones");

	for (int d = 4; d < 146; d++)
	  for (int c = 4; c < 55; c++)
	    for (int b = 4; b < 55; b++)
	      for (int a = 4; a < 55; a++)
	      {
	        
	       A[a]=A[a-3]+C[a][b];
	        
	       B[a][b]=B[a-4][b-4]*24;
	        
	       B[a][b]=B[a+5][b+4]/28;
	        
	       C[a][b]=B[a][b];
	       C[a+4][b]=B[a][b]*A[a];
	      }

    return 0;
}