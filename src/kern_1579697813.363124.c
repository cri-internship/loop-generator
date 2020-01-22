#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(270, "zeros");
	int ***A = create_three_dim_int(590, 170, 500, "zeros");

	for (int b = 4; b < 165; b++)
	  for (int a = 3; a < 265; a++)
	  {
	    
	     B[a]=B[a-3]*A[a][b][a];
	    
	     float  var_a=B[a]-49;
	    
	     B[a]=32;
	    
	     A[a][b][a]=32;
	     A[a+1][b][a+4]=B[a];
	    
	     A[a][b][a]=11;
	    
	     int var_b=A[a][b][a]+5;
	     int var_c=A[a+4][b+5][a+5]*10;
	    
	     int var_d=B[a]+38;
	     int var_e=B[a+4]-27;
	  }

    return 0;
}