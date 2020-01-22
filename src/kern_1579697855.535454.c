#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(770, 610, "zeros");
	float **D = create_two_dim_float(360, 290, "zeros");
	float ***B = create_three_dim_float(600, 160, 530, "zeros");
	float ***A = create_three_dim_float(850, 200, 470, "zeros");

	for (int c = 0; c < 610; c++)
	  for (int b = 5; b < 770; b++)
	    for (int a = 5; a < 770; a++)
	    {
	      
	      C[a][b]=C[a-5][b]*A[a][b][c];
	    }

    return 0;
}