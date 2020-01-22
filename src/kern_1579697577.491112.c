#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(140, "random");
	int **A = create_two_dim_int(750, 940, "random");
	int ***B = create_three_dim_int(580, 730, 820, "random");

	for (int b = 0; b < 727; b++)
	  for (int a = 2; a < 137; a++)
	  {
	    
	     C[a]=C[a-2]/B[a][b][a]*A[a][b];
	    
	     B[a][b][a]=C[a]*7+A[a][b];
	    
	     C[a]=C[a+3]-30*B[a][b][a];
	    
	     A[a][b]=A[a+3][b+5]/47;
	    
	     B[a][b][a]=A[a][b]-C[a];
	    
	     int var_a=B[a][b][a]/14;
	     int var_b=B[a+5][b+3][a]/19;
	  }

    return 0;
}