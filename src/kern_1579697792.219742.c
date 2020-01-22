#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(680, "zeros");
	int ***A = create_three_dim_int(870, 750, 890, "zeros");
	int *C = create_one_dim_int(120, "zeros");
	int **B = create_two_dim_int(270, 240, "zeros");

	for (int d = 1; d < 240; d++)
	  for (int c = 4; c < 115; c++)
	    for (int b = 4; b < 115; b++)
	      for (int a = 4; a < 115; a++)
	      {
	        
	       C[a]=C[a-2]+D[a]/1;
	        
	       B[a][b]=B[a-4][b-1]*2/D[a]-C[a];
	        
	       C[a]=C[a+5]-B[a][b];
	        
	       C[a]=C[a+2]/47;
	        
	       B[a][b]=B[a+4][b]-C[a];
	      }

    return 0;
}