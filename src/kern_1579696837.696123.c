#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(660, 310, "random");
	int *A = create_one_dim_int(940, "random");
	int **C = create_two_dim_int(330, 140, "random");
	int ***B = create_three_dim_int(480, 280, 910, "random");
	int *D = create_one_dim_int(720, "random");

	for (int d = 0; d < 310; d++)
	  for (int c = 1; c < 660; c++)
	    for (int b = 1; b < 660; b++)
	      for (int a = 1; a < 660; a++)
	      {
	        
	       E[a][b]=E[a-1][b]*D[a]/C[a][b]-A[a]+B[a][b][c];
	      }

    return 0;
}