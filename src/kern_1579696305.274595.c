#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(520, 880, "random");
	int **B = create_two_dim_int(820, 60, "random");

	for (int b = 4; b < 55; b++)
	  for (int a = 2; a < 517; a++)
	  {
	    
	     A[a][b]=A[a-2][b-4]-B[a][b];
	    
	     B[a][b]=A[a][b];
	     A[a][b]=B[a][b]-A[a][b];
	    
	     A[a][b]=A[a+1][b+5]/29;
	    
	     B[a][b]=B[a+4][b+5]-A[a][b];
	    
	     A[a][b]=A[a+2][b+5]-17;
	    
	     A[a][b]=A[a+3][b+4]/40;
	  }

    return 0;
}