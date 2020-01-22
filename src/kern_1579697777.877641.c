#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(240, "random");
	int **C = create_two_dim_int(120, 520, "random");
	int ***A = create_three_dim_int(560, 580, 240, "random");
	int *D = create_one_dim_int(820, "random");

	for (int d = 1; d < 820; d++)
	  for (int c = 1; c < 820; c++)
	    for (int b = 1; b < 820; b++)
	      for (int a = 1; a < 820; a++)
	      {
	        
	       D[a]=22*A[a][b][c];
	       D[a-1]=C[a][b]/C[a][b]-B[a];
	      }

    return 0;
}