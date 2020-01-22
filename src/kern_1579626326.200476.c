#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(830, 410, 390, "ones");

	for (int b = 1; b < 405; b++)
	  for (int a = 5; a < 825; a++)
	  {
	    
	     A[a][b][a]=8;
	     A[a+5][b+5][a+2]=18;
	    
	     int var_a=A[a][b][a]+41;
	     int var_b=A[a-1][b][a-5]*32;
	    
	     int var_c=A[a][b][a]+4;
	     int var_d=A[a-4][b-1][a-2]-18;
	  }

    return 0;
}