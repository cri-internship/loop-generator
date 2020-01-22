#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(500, "random");
	int *C = create_one_dim_int(860, "random");
	int **A = create_two_dim_int(850, 300, "random");

	for (int d = 5; d < 295; d++)
	  for (int c = 3; c < 500; c++)
	    for (int b = 3; b < 500; b++)
	      for (int a = 3; a < 500; a++)
	      {
	        
	       A[a][b]=A[a][b-1]+44;
	        
	       A[a][b]=A[a-3][b-5]/31;
	        
	       B[a]=B[a-3]+C[a];
	        
	       C[a]=C[a+2]/18;
	        
	       int var_a=A[a][b]*27;
	       int var_b=A[a][b]-44;
	        
	       int var_c=A[a][b]*46;
	       int var_d=A[a+1][b+5]*47;
	      }

    return 0;
}