#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(80, "ones");
	int *C = create_one_dim_int(100, "ones");
	int **B = create_two_dim_int(890, 340, "ones");
	int ***D = create_three_dim_int(210, 330, 460, "ones");
	int **A = create_two_dim_int(120, 10, "ones");

	for (int d = 2; d < 10; d++)
	  for (int c = 4; c < 80; c++)
	    for (int b = 4; b < 80; b++)
	      for (int a = 4; a < 80; a++)
	      {
	        
	       E[a]=D[a][b][c]-A[a][b];
	       E[a-4]=46;
	        
	       A[a][b]=15;
	       A[a-1][b-2]=47;
	        
	       int var_a=E[a]+14;
	       int var_b=E[a]/19;
	      }

    return 0;
}