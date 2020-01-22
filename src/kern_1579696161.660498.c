#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(750, 110, "random");
	int **C = create_two_dim_int(860, 680, "random");
	int *A = create_one_dim_int(660, "random");

	for (int d = 4; d < 108; d++)
	  for (int c = 5; c < 658; c++)
	    for (int b = 5; b < 658; b++)
	      for (int a = 5; a < 658; a++)
	      {
	        
	       B[a][b]=B[a-5][b-4]*A[a];
	        
	       A[a]=A[a+2]+8;
	        
	       B[a][b]=B[a+4][b+2]*5;
	        
	       A[a]=32;
	        
	       C[a][b]=B[a][b]*B[a][b];
	       C[a+1][b+4]=A[a]+B[a][b];
	      }

    return 0;
}