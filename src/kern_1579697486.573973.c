#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(390, 830, 100, "ones");
	int **A = create_two_dim_int(970, 120, "ones");

	for (int b = 5; b < 120; b++)
	  for (int a = 4; a < 386; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-1][a-4]+A[a][b];
	    
	     A[a][b]=18;
	     A[a-1][b-2]=36;
	    
	     int var_a=B[a][b][a]/31;
	     int var_b=B[a-4][b-5][a-1]-50;
	    
	     B[a][b][a]=B[a][b][a]+A[a][b];
	     A[a][b]=B[a+3][b+5][a+4]*A[a][b];
	  }

    return 0;
}