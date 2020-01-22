#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(270, 690, "ones");
	int *B = create_one_dim_int(970, "ones");

	for (int d = 5; d < 686; d++)
	  for (int c = 5; c < 270; c++)
	    for (int b = 5; b < 270; b++)
	      for (int a = 5; a < 270; a++)
	      {
	        
	       A[a][b]=37;
	       float  var_a=A[a][b]+4;
	        
	       B[a]=B[a-3]*18;
	        
	       A[a][b]=A[a][b+4]+B[a];
	        
	       B[a]=A[a][b]*B[a];
	        
	       int var_b=A[a][b]-15;
	       int var_c=A[a-4][b-3]*34;
	        
	       int var_d=B[a]+9;
	       int var_e=B[a+3]*28;
	        
	       int var_f=A[a][b]-29;
	       int var_g=A[a-5][b-5]*44;
	      }

    return 0;
}