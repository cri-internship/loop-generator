#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(620, 410, 90, "zeros");
	int *A = create_one_dim_int(180, "zeros");

	for (int b = 4; b < 406; b++)
	  for (int a = 3; a < 175; a++)
	  {
	    
	     A[a]=A[a-1]/19;
	    
	     A[a]=36;
	    
	     B[a][b][a]=A[a];
	     B[a+4][b+4][a+3]=A[a];
	    
	     int var_a=B[a][b][a]/50;
	     int var_b=B[a+2][b][a+1]-36;
	    
	     B[a][b][a]=A[a]*B[a][b][a];
	     A[a]=A[a+5]+B[a][b][a];
	    
	     B[a][b][a]=B[a][b][a]+A[a];
	     B[a][b][a]=B[a-3][b-4][a-2]-A[a];
	  }

    return 0;
}