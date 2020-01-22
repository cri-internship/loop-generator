#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(850, 960, "ones");
	int *D = create_one_dim_int(410, "ones");
	int **B = create_two_dim_int(670, 810, "ones");
	int **A = create_two_dim_int(70, 450, "ones");

	for (int d = 4; d < 806; d++)
	  for (int c = 4; c < 407; c++)
	    for (int b = 4; b < 407; b++)
	      for (int a = 4; a < 407; a++)
	      {
	        
	       C[a][b]=C[a-4][b-4]/B[a][b]-D[a]*A[a][b];
	        
	       B[a][b]=B[a+4][b+4]-10;
	        
	       D[a]=D[a+3]/31;
	        
	       C[a][b]=37;
	        
	       int var_b=B[a][b]+36;
	       int var_c=B[a][b+2]+46;
	        
	       D[a]=D[a]-C[a][b]+A[a][b]/B[a][b];
	       C[a][b]=D[a-4]-A[a][b]+C[a][b]*B[a][b];
	      }

    return 0;
}