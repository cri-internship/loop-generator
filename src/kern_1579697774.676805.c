#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(710, 250, 860, "zeros");
	int **A = create_two_dim_int(890, 740, "zeros");
	int *C = create_one_dim_int(870, "zeros");

	for (int d = 0; d < 740; d++)
	  for (int c = 0; c < 868; c++)
	    for (int b = 0; b < 868; b++)
	      for (int a = 0; a < 868; a++)
	      {
	        
	       C[a]=42;
	       C[a+2]=10;
	        
	       C[a]=A[a][b]*B[a][b][c];
	       B[a][b][c]=A[a][b]*C[a];
	      }

    return 0;
}