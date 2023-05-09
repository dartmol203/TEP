#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

class UnionFind
{
private:
    vi p, rank, setsize;
    int numsets;

public:
    UnionFind(int N)
    {
        p.assign(N, 0);
        for (int i = 0; i < N; i++)
            p[i] = i;
        rank.assign(N, 0);
        setsize.assign(N, 1);
        numsets = N;
    }

    int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
    bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
    int numDisjointSets() { return numsets; }
    int sizeOfSet(int i) { return setsize[findSet(i)]; }
    vi sizes() { return setsize; }

    void unionSet(int i, int j)
    {
        if (isSameSet(i, j))
            return;
        int x = findSet(i), y = findSet(j);
        if (rank[x] > rank[y])
            swap(x, y);
        p[x] = y;
        if (rank[x] == rank[y])
            ++rank[y];
        setsize[y] += setsize[x];
        --numsets;
    }
};

int main()
{

    int N, M, C, X, Y;

    scanf("%d %d", &N, &M);

    scanf("%d", &C);

    UnionFind UF(N);

    for (int i = 0; i < C; i++)
    {
        scanf("%d %d", &X, &Y);

        UF.unionSet(X, Y);
    }



    printf("%d %d\n", UF.numDisjointSets(), UF.);

    UF.return 0;
}