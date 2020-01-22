#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(120, "random");
	int **C = create_two_dim_int(190, 390, "random");
	int **A = create_two_dim_int(590, 600, "random");

	for (int d = 0; d < 598; d++)
	  for (int c = 5; c < 120; c++)
	    for (int b = 5; b < 120; b++)
	      for (int a = 5; a < 120; a++)
	      {
	        
	       B[a]=B[a-5]+13;
	        
	       A[a][b]=A[a][b+2]-B[a]+C[a][b];
	        
	       C[a][b]=B[a]*A[a][b];
	       A[a][b]=B[a-2]-C[a][b];
	      }

    return 0;
}