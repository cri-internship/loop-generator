#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(590, "ones");
	int ***A = create_three_dim_int(600, 170, 360, "ones");
	int **D = create_two_dim_int(450, 800, "ones");
	int *E = create_one_dim_int(620, "ones");
	int *B = create_one_dim_int(330, "ones");

	for (int d = 0; d < 355; d++)
	  for (int c = 0; c < 168; c++)
	    for (int b = 0; b < 598; b++)
	      for (int a = 0; a < 598; a++)
	      {
	        
	       A[a][b][c]=A[a+2][b+2][c+4]-2;
	        
	       A[a][b][c]=D[a][b]*C[a]/E[a];
	      }

    return 0;
}