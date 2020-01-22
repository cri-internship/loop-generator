#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(460, 40, 690, "random");
	int ***A = create_three_dim_int(460, 220, 460, "random");

	for (int d = 5; d < 457; d++)
	  for (int c = 0; c < 36; c++)
	    for (int b = 4; b < 455; b++)
	      for (int a = 4; a < 455; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b][c-5]+26;
	        
	       B[a][b][c]=B[a+4][b+4][c+5]-39;
	        
	       A[a][b][c]=B[a][b][c];
	       A[a][b][c-4]=B[a][b][c];
	        
	       A[a][b][c]=44;
	        
	       int var_a=A[a][b][c]+43;
	       int var_b=A[a+4][b+3][c+3]*25;
	      }

    return 0;
}