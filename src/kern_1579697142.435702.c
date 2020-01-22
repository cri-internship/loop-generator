#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(740, 190, 450, "ones");
	int **A = create_two_dim_int(330, 670, "ones");
	int **C = create_two_dim_int(120, 440, "ones");
	int **D = create_two_dim_int(840, 470, "ones");

	for (int d = 0; d < 669; d++)
	  for (int c = 0; c < 330; c++)
	    for (int b = 0; b < 330; b++)
	      for (int a = 0; a < 330; a++)
	      {
	        
	       A[a][b]=A[a][b+1]*D[a][b]+B[a][b][c];
	      }

    return 0;
}