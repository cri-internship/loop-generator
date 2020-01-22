#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(100, 340, 20, "zeros");
	int **C = create_two_dim_int(30, 770, "zeros");
	int *A = create_one_dim_int(600, "zeros");

	for (int d = 5; d < 765; d++)
	  for (int c = 4; c < 30; c++)
	    for (int b = 4; b < 30; b++)
	      for (int a = 4; a < 30; a++)
	      {
	        
	       C[a][b]=C[a][b-5]+12;
	        
	       C[a][b]=C[a-1][b-2]*A[a];
	        
	       C[a][b]=C[a][b+5]/40;
	        
	       A[a]=15;
	       A[a-4]=49;
	      }

    return 0;
}