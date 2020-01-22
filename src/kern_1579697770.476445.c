#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(850, 920, 500, "zeros");
	int *A = create_one_dim_int(840, "zeros");
	int *C = create_one_dim_int(10, "zeros");
	int ***B = create_three_dim_int(20, 920, 300, "zeros");

	for (int d = 3; d < 300; d++)
	  for (int c = 5; c < 915; c++)
	    for (int b = 3; b < 20; b++)
	      for (int a = 3; a < 20; a++)
	      {
	        
	       B[a][b][c]=C[a]/A[a];
	       B[a-2][b-5][c]=27*D[a][b][c]+C[a];
	        
	       D[a][b][c]=6;
	       D[a+4][b+5][c+3]=40;
	        
	       B[a][b][c]=30;
	      }

    return 0;
}