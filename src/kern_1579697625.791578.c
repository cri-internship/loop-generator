#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(160, 720, "random");
	int **A = create_two_dim_int(30, 870, "random");

	for (int d = 5; d < 715; d++)
	  for (int c = 5; c < 27; c++)
	    for (int b = 5; b < 27; b++)
	      for (int a = 5; a < 27; a++)
	      {
	        
	       B[a][b]=B[a-5][b-5]-1;
	        
	       A[a][b]=A[a-2][b-4]+B[a][b];
	        
	       A[a][b]=A[a+3][b+5]/12;
	        
	       B[a][b]=B[a+5][b+5]*A[a][b];
	        
	       A[a][b]=B[a][b]+31;
	       B[a][b]=B[a+3][b+1]/A[a][b];
	        
	       B[a][b]=A[a][b]*36;
	       A[a][b]=A[a+2][b+5]-B[a][b];
	        
	       int var_a=A[a][b]*40;
	       int var_b=A[a][b+1]*6;
	      }

    return 0;
}