#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(40, 850, "zeros");
	int **A = create_two_dim_int(970, 630, "zeros");

	for (int d = 5; d < 630; d++)
	  for (int c = 4; c < 35; c++)
	    for (int b = 4; b < 35; b++)
	      for (int a = 4; a < 35; a++)
	      {
	        
	       B[a][b]=B[a-2][b-5]-19;
	        
	       B[a][b]=B[a-4][b-1]-14;
	        
	       B[a][b]=B[a+5][b+5]+26;
	        
	       B[a][b]=B[a+2][b+5]/A[a][b];
	        
	       int var_a=A[a][b]/14;
	       int var_b=A[a+4][b]+4;
	        
	       B[a][b]=B[a][b]+A[a][b];
	       A[a][b]=B[a-3][b-1]*A[a][b];
	      }

    return 0;
}