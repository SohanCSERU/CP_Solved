 #include<stdio.h>
int main() {
 
    int testCases;
 
    scanf ("%d", &testCases);
 
    int cases = 0;
 
    while ( testCases-- ) {
 
        int n, k, p;
 
        scanf ("%d %d %d", &n, &k, &p);
 
        while (p--) {
 
            k++;
 
            if (k > n) k = 1;
 
        }
 
        printf ("Case %d: %d\n", ++cases, k);
    }
 
    return 0;
}