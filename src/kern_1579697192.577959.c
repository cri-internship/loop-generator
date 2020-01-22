#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(130, 210, "random");
	int **A = create_two_dim_int(230, 710, "random");

	for (int d = 5; d < 207; d++)
	  for (int c = 3; c < 125; c++)
	    for (int b = 3; b < 125; b++)
	      for (int a = 3; a < 125; a++)
	      {
	        
	       B[a][b]=B[a+5][b+3]+A[a][b];
	        
	       A[a][b]=A[a+2][b]*18;
	        
	       B[a][b]=35;
	        
	       int var_a=B[a][b]/2;
	       int var_b=B[a-3][b-5]+31;
	        
	       int var_c=B[a][b]-24;
	       int var_d=B[a+4][b]+9;
	        
	       int var_e=A[a][b]/44;
	       int var_f=A[a-2][b-3]-27;
	      }

    return 0;
}