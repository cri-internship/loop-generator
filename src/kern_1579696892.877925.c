#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(900, 840, "zeros");
	int **B = create_two_dim_int(820, 610, "zeros");

	for (int d = 5; d < 610; d++)
	  for (int c = 5; c < 820; c++)
	    for (int b = 5; b < 820; b++)
	      for (int a = 5; a < 820; a++)
	      {
	        
	       A[a][b]=A[a+1][b]*B[a][b];
	        
	       A[a][b]=A[a+3][b+3]*B[a][b];
	        
	       B[a][b]=48;
	       B[a-5][b-2]=7;
	        
	       B[a][b]=A[a][b];
	        
	       int var_a=A[a][b]*16;
	       int var_b=A[a+1][b+3]*21;
	        
	       int var_c=A[a][b]*22;
	       int var_d=A[a][b-5]/48;
	      }

    return 0;
}