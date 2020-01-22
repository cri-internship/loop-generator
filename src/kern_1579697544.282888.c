#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(10, 640, "random");
	int ***B = create_three_dim_int(450, 110, 880, "random");
	int **C = create_two_dim_int(670, 390, "random");

	for (int d = 0; d < 878; d++)
	  for (int c = 0; c < 108; c++)
	    for (int b = 5; b < 10; b++)
	      for (int a = 5; a < 10; a++)
	      {
	        
	       A[a][b]=A[a-5][b]*B[a][b][c];
	        
	       B[a][b][c]=B[a+4][b+2][c+2]+17;
	      }

    return 0;
}