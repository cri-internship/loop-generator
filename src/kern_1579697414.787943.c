#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(820, 440, 490, "random");
	int ***A = create_three_dim_int(950, 880, 340, "random");

	for (int b = 5; b < 438; b++)
	  for (int a = 5; a < 817; a++)
	  {
	    
	     B[a][b][a]=B[a+3][b+2][a+3]-41;
	    
	     A[a][b][a]=30;
	     A[a-3][b][a-2]=34;
	    
	     A[a][b][a]=B[a][b][a]*28;
	     B[a][b][a]=B[a-1][b-5][a-4]/A[a][b][a];
	    
	     int var_a=B[a][b][a]+13;
	     int var_b=B[a-1][b-3][a-3]/45;
	    
	     int var_c=A[a][b][a]-26;
	     int var_d=A[a-5][b-3][a-4]*15;
	  }

    return 0;
}