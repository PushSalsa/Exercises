// Useing nexted for loops
// only works on input of 1-9 for now

#include <stdio.h>

int main() {
    // Write C code here
    int n;
    int start;
    printf("Please enter a number 1-9 to make a rectangle out of: ");
    scanf("%d",&n);
    start = 0-n+1; //so wraps back and forth

    for (int i=start; i<n; ++i) //creates row
    {
        int num0;
        if (i <= 0)
            num0=i*-1;
        ++num0;
        for (int j=start; j<n; ++j) //entries within a row
        {
            int num1;
            if (j <= 0)
                num1 = j*-1;
            ++num1;
            if (num0 > num1)
                printf("%d",num0);
            else
                printf("%d",num1);
        }
        printf("\n");
    }
    return 0;
}
