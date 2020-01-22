#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(80, 470, 580, "ones");
	int *A = create_one_dim_int(100, "ones");
	int *C = create_one_dim_int(400, "ones");

	for (int d = 0; d < 575; d++)
	  for (int c = 0; c < 468; c++)
	    for (int b = 0; b < 75; b++)
	      for (int a = 0; a < 75; a++)
	      {
	        
	       A[a]=A[a]*C[a]/B[a][b][c];
	       A[a]=26;
	        
	       B[a][b][c]=B[a+5][b][c+5]-A[a]/A[a];
	        
	       A[a]=A[a+3]-5;
	        
	       C[a]=4;
	       C[a+2]=40;
	        
	       C[a]=10;
	        
	       C[a]=B[a][b][c]+A[a];
	       B[a][b][c]=B[a+1][b+2][c+2]/22+A[a];
	      }

    return 0;
}