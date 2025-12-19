int a; // int
int *a; // pointer to int
int **a; // pointer to pointer to int

int a[10]; // array of 10 ints
int *a[10]; // array of 10 pointers to int
int (*a)[10]; // pointer to an array of 10 ints
int (*a)(int); // pointer to function taking int and returning int
int (*a[10])(int); // array of 10 pointers to functions taking int and returning int