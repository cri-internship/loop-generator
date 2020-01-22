#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(280, "zeros");
	int **A = create_two_dim_int(670, 840, "zeros");
	int *D = create_one_dim_int(850, "zeros");
	int ***B = create_three_dim_int(280, 420, 670, "zeros");
	int ***C = create_three_dim_int(450, 630, 820, "zeros");

	for (int d = 0; d < 837; d++)
	  for (int c = 0; c < 668; c++)
	    for (int b = 0; b < 668; b++)
	      for (int a = 0; a < 668; a++)
	      {
	        
	       A[a][b]=A[a+2][b+3]+C[a][b][c]-E[a];
	      }

    return 0;
}