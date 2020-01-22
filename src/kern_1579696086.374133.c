#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(910, 630, "random");
	int *B = create_one_dim_int(390, "random");

	for (int b = 5; b < 625; b++)
	  for (int a = 3; a < 390; a++)
	  {
	    
	     B[a]=5;
	     A[a][b]=B[a]+A[a][b];
	    
	     A[a][b]=A[a-1][b-5]+45;
	    
	     A[a][b]=A[a+2][b+5]*25;
	    
	     int var_a=B[a]-36;
	     int var_b=B[a-3]+25;
	  }

    return 0;
}