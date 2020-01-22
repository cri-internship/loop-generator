#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(190, 470, "ones");
	int **D = create_two_dim_int(700, 160, "ones");
	int **A = create_two_dim_int(910, 890, "ones");
	int ***B = create_three_dim_int(50, 620, 730, "ones");

	for (int d = 5; d < 470; d++)
	  for (int c = 1; c < 190; c++)
	    for (int b = 1; b < 190; b++)
	      for (int a = 1; a < 190; a++)
	      {
	        
	       C[a][b]=C[a-1][b-1]*46;
	        
	       C[a][b]=C[a][b-5]*D[a][b]-A[a][b];
	      }

    return 0;
}