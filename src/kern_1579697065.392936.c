#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(350, "random");
	int ***A = create_three_dim_int(30, 120, 410, "random");

	for (int b = 0; b < 115; b++)
	  for (int a = 0; a < 25; a++)
	  {
	    
	     int var_a=B[a]+17;
	     B[a]=48;
	    
	     A[a][b][a]=A[a+4][b+3][a+5]-13;
	    
	     B[a]=A[a][b][a];
	    
	     A[a][b][a]=A[a][b][a]*B[a];
	     B[a]=A[a+3][b+5][a+2]+B[a];
	    
	     int var_b=A[a][b][a]-19;
	     int var_c=A[a+2][b+2][a+2]/41;
	  }

    return 0;
}