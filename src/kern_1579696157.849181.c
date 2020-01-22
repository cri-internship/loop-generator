#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(130, 280, "ones");
	int *A = create_one_dim_int(190, "ones");
	int *B = create_one_dim_int(480, "ones");

	for (int d = 3; d < 280; d++)
	  for (int c = 5; c < 130; c++)
	    for (int b = 5; b < 130; b++)
	      for (int a = 5; a < 130; a++)
	      {
	        
	       B[a]=B[a-2]/46;
	        
	       B[a]=B[a+2]/49;
	        
	       B[a]=B[a+4]/A[a]*C[a][b];
	        
	       C[a][b]=B[a];
	       C[a-3][b-3]=B[a];
	        
	       int var_a=A[a]*28;
	       int var_b=A[a+5]/38;
	        
	       int var_c=C[a][b]/18;
	       int var_d=C[a-5][b-3]*8;
	      }

    return 0;
}