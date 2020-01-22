#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(500, 160, 650, "ones");
	int *A = create_one_dim_int(210, "ones");
	int **C = create_two_dim_int(410, 450, "ones");
	int **D = create_two_dim_int(600, 200, "ones");

	for (int d = 0; d < 648; d++)
	  for (int c = 0; c < 156; c++)
	    for (int b = 1; b < 205; b++)
	      for (int a = 1; a < 205; a++)
	      {
	        
	       A[a]=A[a+5]/48+D[a][b];
	        
	       B[a][b][c]=B[a+4][b+4][c+2]+27;
	        
	       D[a][b]=D[a+5][b+2]-11;
	        
	       D[a][b]=47/A[a];
	        
	       A[a]=11;
	      }

    return 0;
}