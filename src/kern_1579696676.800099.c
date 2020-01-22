#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(830, "zeros");
	int ***B = create_three_dim_int(600, 200, 470, "zeros");
	int **A = create_two_dim_int(930, 240, "zeros");

	for (int d = 3; d < 470; d++)
	  for (int c = 2; c < 200; c++)
	    for (int b = 5; b < 600; b++)
	      for (int a = 5; a < 600; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b][c]/33;
	        
	       A[a][b]=A[a-5][b-2]-C[a]+B[a][b][c];
	        
	       B[a][b][c]=6;
	      }

    return 0;
}