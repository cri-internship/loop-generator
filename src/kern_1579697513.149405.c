#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(510, 70, 680, "zeros");
	int **B = create_two_dim_int(150, 20, "zeros");

	for (int b = 5; b < 15; b++)
	  for (int a = 5; a < 147; a++)
	  {
	    
	     B[a][b]=B[a][b-1]*21;
	    
	     B[a][b]=B[a+2][b+5]/23;
	    
	     A[a][b][a]=A[a+1][b+5][a+5]-B[a][b];
	    
	     int var_a=B[a][b]*4;
	     int var_b=B[a][b+2]*1;
	    
	     int var_c=B[a][b]-13;
	     int var_d=B[a+3][b+4]-11;
	    
	     int var_e=B[a][b]/17;
	     int var_f=B[a-5][b-5]-50;
	  }

    return 0;
}