#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(850, "ones");
	int ***B = create_three_dim_int(970, 670, 280, "ones");
	int ***A = create_three_dim_int(730, 940, 740, "ones");
	int *C = create_one_dim_int(900, "ones");
	int **D = create_two_dim_int(320, 890, "ones");

	for (int d = 0; d < 279; d++)
	  for (int c = 0; c < 668; c++)
	    for (int b = 2; b < 315; b++)
	      for (int a = 2; a < 315; a++)
	      {
	        
	       C[a]=C[a-2]-A[a][b][c]/E[a];
	        
	       D[a][b]=D[a+5][b]/C[a];
	        
	       B[a][b][c]=B[a+2][b+2][c+1]/38;
	        
	       C[a]=21;
	      }

    return 0;
}