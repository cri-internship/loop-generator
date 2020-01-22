#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(110, 390, 890, "random");
	double **A = create_two_dim_double(510, 130, "random");

	for (int a = 5; a < 105; a++)
	{
	  
	    B[a][a][a]=B[a+2][a][a+5]-0.633;
	  
	    B[a][a][a]=A[a][a];
	  
	    A[a][a]=B[a][a][a];
	    A[a][a-5]=B[a][a][a];
	  
	    A[a][a]=0.402;
	  
	    A[a][a]=B[a][a][a]*A[a][a];
	    B[a][a][a]=B[a+2][a+1][a+5]-0.104;
	  
	    double var_a=A[a][a]*0.835;
	    double var_b=A[a-4][a-5]-0.569;
	  
	    double var_c=A[a][a]-0.206;
	    double var_d=A[a][a+1]/0.714;
	}

    return 0;
}