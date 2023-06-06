#include<vector>

vector < vector < long long int >> printPascal(int n) {
    vector < vector < long long int >> tri;
    vector < long long int > t;

    for (int i = 1; i <= n; i++) {
        long long int c = 1;
        t.clear();
        for (int j = 1; j <= i; j++) {
            t.push_back(c);
            c = c * (i - j) / j;
        }

        tri.push_back(t);
    }
    return tri;
}