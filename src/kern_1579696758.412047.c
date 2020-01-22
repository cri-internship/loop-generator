#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(910, "zeros");
	int ***A = create_three_dim_int(850, 710, 830, "zeros");
	int ***E = create_three_dim_int(370, 10, 420, "zeros");
	int **C = create_two_dim_int(910, 260, "zeros");
	int **D = create_two_dim_int(140, 380, "zeros");

	for (int b = 1; b < 6; b++)
	  for (int a = 5; a < 365; a++)
	  {
	    
	     C[a][b]=C[a][b-1]*17;
	    
	     C[a][b]=C[a-5][b-1]+10;
	    
	     E[a][b][a]=E[a+5][b+4][a+4]*3;
	  }

    return 0;
}