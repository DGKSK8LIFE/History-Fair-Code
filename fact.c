
int main(void) {
    int x = 5;
    printf("Hello, world!");
}

int number() {
    return 5;
}



int factIterative(int n){
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;      
}

int factRecursive(int n){
    if (n <= 1) {
        return 1;
    } else {
        return n * factRecursive(n-1);
    }
}

