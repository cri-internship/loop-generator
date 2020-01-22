#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(100, "zeros");
	int ***A = create_three_dim_int(600, 910, 550, "zeros");

	for (int d = 5; d < 546; d++)
	  for (int c = 3; c < 909; c++)
	    for (int b = 2; b < 97; b++)
	      for (int a = 2; a < 97; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-3][c-5]+B[a];
	        
	       A[a][b][c]=A[a+2][b+1][c+4]-39;
	        
	       B[a]=40;
	       B[a+3]=39;
	      }

    return 0;
}