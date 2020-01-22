#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(80, 370, "random");
	int **C = create_two_dim_int(770, 890, "random");
	int **B = create_two_dim_int(690, 280, "random");
	int ***D = create_three_dim_int(610, 140, 100, "random");

	for (int b = 0; b < 137; b++)
	  for (int a = 0; a < 605; a++)
	  {
	    
	     C[a][b]=D[a][b][a]/B[a][b];
	     C[a+5][b]=A[a][b]+D[a][b][a]/A[a][b];
	    
	     B[a][b]=13;
	     B[a+1][b+2]=35;
	    
	     int var_a=D[a][b][a]-42;
	     int var_b=D[a][b+3][a+5]*31;
	  }

    return 0;
}