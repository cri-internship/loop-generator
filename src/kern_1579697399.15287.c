#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(980, 830, 250, "zeros");
	int ***B = create_three_dim_int(330, 70, 1000, "zeros");

	for (int d = 5; d < 250; d++)
	  for (int c = 5; c < 66; c++)
	    for (int b = 4; b < 327; b++)
	      for (int a = 4; a < 327; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-3][c-5]-0;
	        
	       A[a][b][c]=B[a][b][c];
	        
	       B[a][b][c]=A[a][b][c];
	       B[a][b+4][c+2]=38;
	        
	       B[a][b][c]=B[a][b][c]+A[a][b][c];
	       A[a][b][c]=B[a+3][b+3][c]*15;
	      }

    return 0;
}