#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(910, 680, "random");
	int *B = create_one_dim_int(750, "random");

	for (int b = 5; b < 675; b++)
	  for (int a = 2; a < 750; a++)
	  {
	    
	     B[a]=B[a-2]/29;
	    
	     A[a][b]=A[a+3][b+5]/43;
	    
	     A[a][b]=2;
	    
	     B[a]=A[a][b];
	    
	     int var_a=B[a]+19;
	     int var_b=B[a]-43;
	    
	     B[a]=A[a][b]-B[a];
	     A[a][b]=A[a-1][b-5]+B[a];
	  }

    return 0;
}