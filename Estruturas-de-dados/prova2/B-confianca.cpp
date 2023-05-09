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

    int N, qtd, x, y;
    scanf("%d %d", &N, &qtd);

    UnionFind UF(N);

    printf("%d\n", UF.numDisjointSets());

    for (int i = 0; i < qtd; i++)
    {
        scanf("%d %d", &x, &y);
        UF.unionSet(x, y);
    }

    printf("%d\n", UF.numDisjointSets());

    return 0;
}