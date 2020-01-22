#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(470, 100, "random");
	int *A = create_one_dim_int(260, "random");
	int **B = create_two_dim_int(150, 50, "random");
	int *C = create_one_dim_int(220, "random");

	for (int d = 5; d < 47; d++)
	  for (int c = 3; c < 147; c++)
	    for (int b = 3; b < 147; b++)
	      for (int a = 3; a < 147; a++)
	      {
	        
	       B[a][b]=B[a-3][b-5]-C[a]/D[a][b];
	        
	       C[a]=C[a+3]-12*B[a][b];
	        
	       C[a]=C[a+4]*40;
	        
	       B[a][b]=B[a+2][b+1]*D[a][b]+C[a];
	        
	       B[a][b]=B[a+3][b+3]/19;
	        
	       int var_a=C[a]*8;
	       int var_b=C[a+1]-26;
	        
	       B[a][b]=B[a][b]-A[a];
	       A[a]=B[a-3][b-4]+C[a]*D[a][b]/A[a];
	      }

    return 0;
}