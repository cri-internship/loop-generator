#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(660, 870, "random");
	int ***A = create_three_dim_int(720, 220, 310, "random");
	int *B = create_one_dim_int(330, "random");

	for (int b = 4; b < 215; b++)
	  for (int a = 5; a < 325; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-4][a-4]*28;
	    
	     C[a][b]=C[a-2][b-3]*A[a][b][a];
	    
	     B[a]=B[a-3]-32;
	    
	     B[a]=B[a+5]-C[a][b];
	    
	     A[a][b][a]=A[a+5][b+5][a+3]-43;
	    
	     C[a][b]=20;
	  }

    return 0;
}