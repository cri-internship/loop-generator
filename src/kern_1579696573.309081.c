#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(320, 500, 680, "zeros");
	int *A = create_one_dim_int(980, "zeros");

	for (int d = 0; d < 676; d++)
	  for (int c = 0; c < 495; c++)
	    for (int b = 0; b < 317; b++)
	      for (int a = 0; a < 317; a++)
	      {
	        
	       B[a][b][c]=B[a+1][b+5][c+3]-A[a];
	        
	       A[a]=A[a+1]*38;
	        
	       B[a][b][c]=B[a+3][b+5][c+3]+A[a];
	        
	       B[a][b][c]=B[a+2][b+2][c+4]*A[a];
	        
	       int var_a=A[a]-44;
	       int var_b=A[a+2]*12;
	      }

    return 0;
}