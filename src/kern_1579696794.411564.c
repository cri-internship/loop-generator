#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(550, 10, "zeros");
	int ***B = create_three_dim_int(360, 880, 100, "zeros");
	int ***E = create_three_dim_int(410, 10, 690, "zeros");
	int ***A = create_three_dim_int(210, 320, 880, "zeros");
	int ***C = create_three_dim_int(980, 670, 50, "zeros");

	for (int b = 1; b < 320; b++)
	  for (int a = 5; a < 210; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-1][a-3]/28;
	    
	     C[a][b][a]=C[a+5][b+2][a]+13;
	    
	     int var_a=C[a][b][a]/19;
	     int var_b=C[a+3][b+3][a+3]+31;
	  }

    return 0;
}