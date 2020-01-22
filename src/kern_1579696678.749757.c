#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(780, 640, "random");
	int **C = create_two_dim_int(720, 790, "random");
	int ***A = create_three_dim_int(450, 630, 750, "random");

	for (int d = 0; d < 748; d++)
	  for (int c = 2; c < 625; c++)
	    for (int b = 3; b < 446; b++)
	      for (int a = 3; a < 446; a++)
	      {
	        
	       A[a][b][c]=A[a+4][b+5][c]+38;
	        
	       C[a][b]=C[a+5][b+2]*7;
	        
	       C[a][b]=A[a][b][c];
	        
	       int var_a=B[a][b]/37;
	       int var_b=B[a+2][b+4]/8;
	        
	       int var_c=C[a][b]+33;
	       int var_d=C[a+4][b+1]/48;
	        
	       A[a][b][c]=B[a][b]+C[a][b];
	       C[a][b]=B[a-1][b-1]-C[a][b]/A[a][b][c];
	        
	       B[a][b]=A[a][b][c]-C[a][b];
	       B[a][b]=A[a][b+4][c+2]*C[a][b]+B[a][b];
	      }

    return 0;
}