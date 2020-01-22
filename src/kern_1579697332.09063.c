#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(770, 580, "ones");
	int **A = create_two_dim_int(820, 860, "ones");
	int **B = create_two_dim_int(850, 850, "ones");

	for (int d = 0; d < 575; d++)
	  for (int c = 4; c < 765; c++)
	    for (int b = 4; b < 765; b++)
	      for (int a = 4; a < 765; a++)
	      {
	        
	       C[a][b]=C[a-4][b]/B[a][b]*A[a][b];
	        
	       B[a][b]=49;
	       B[a+1][b+5]=31;
	        
	       C[a][b]=A[a][b]-B[a][b];
	      }

    return 0;
}