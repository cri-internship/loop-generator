#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(600, "ones");
	int **C = create_two_dim_int(880, 680, "ones");
	int ***A = create_three_dim_int(430, 330, 10, "ones");

	for (int d = 0; d < 9; d++)
	  for (int c = 5; c < 328; c++)
	    for (int b = 2; b < 426; b++)
	      for (int a = 2; a < 426; a++)
	      {
	        
	       B[a]=B[a+2]/22;
	        
	       A[a][b][c]=A[a+4][b+2][c+1]+B[a]/C[a][b];
	        
	       C[a][b]=49;
	       C[a-2][b-5]=10;
	      }

    return 0;
}