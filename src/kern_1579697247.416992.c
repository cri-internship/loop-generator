#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(420, 640, "zeros");
	int ***B = create_three_dim_int(890, 920, 620, "zeros");
	int **A = create_two_dim_int(100, 900, "zeros");
	int *D = create_one_dim_int(470, "zeros");

	for (int c = 0; c < 640; c++)
	  for (int b = 3; b < 98; b++)
	    for (int a = 3; a < 98; a++)
	    {
	      
	      C[a][b]=C[a-3][b]*43;
	      
	      A[a][b]=A[a+2][b+5]*12;
	    }

    return 0;
}