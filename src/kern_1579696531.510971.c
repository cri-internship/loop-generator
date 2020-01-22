#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(340, 560, 980, "ones");
	int **C = create_two_dim_int(540, 570, "ones");
	int *D = create_one_dim_int(510, "ones");
	int **A = create_two_dim_int(190, 380, "ones");

	for (int d = 0; d < 375; d++)
	  for (int c = 1; c < 189; c++)
	    for (int b = 1; b < 189; b++)
	      for (int a = 1; a < 189; a++)
	      {
	        
	       C[a][b]=C[a][b+5]+D[a];
	        
	       C[a][b]=14;
	        
	       A[a][b]=C[a][b]-C[a][b];
	       A[a+1][b+5]=C[a][b];
	      }

    return 0;
}