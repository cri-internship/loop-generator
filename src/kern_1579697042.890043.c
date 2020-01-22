#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(620, 740, 810, "random");
	int **B = create_two_dim_int(130, 120, "random");

	for (int b = 2; b < 115; b++)
	  for (int a = 4; a < 127; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b][a-2]/B[a][b];
	    
	     A[a][b][a]=A[a-4][b-2][a]/B[a][b];
	    
	     B[a][b]=B[a+3][b+5]+29;
	    
	     B[a][b]=B[a+1][b+1]-47;
	    
	     int var_a=A[a][b][a]/13;
	     int var_b=A[a+2][b+2][a+5]*38;
	  }

    return 0;
}