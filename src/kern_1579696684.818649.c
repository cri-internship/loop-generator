#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(220, 230, "zeros");
	int *B = create_one_dim_int(260, "zeros");

	for (int b = 0; b < 230; b++)
	  for (int a = 5; a < 216; a++)
	  {
	    
	     B[a]=B[a-5]+28;
	    
	     B[a]=B[a+5]/46;
	    
	     B[a]=B[a+1]*A[a][b];
	    
	     B[a]=B[a]-A[a][b];
	     A[a][b]=B[a]-A[a][b];
	    
	     int var_a=B[a]-34;
	     int var_b=B[a-1]-1;
	    
	     B[a]=A[a][b]-B[a];
	     B[a]=A[a+4][b]/B[a];
	    
	     int var_c=B[a]*16;
	  }

    return 0;
}