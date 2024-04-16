#include <iostream>
#include <set>

using namespace std;

struct Node {
    int x;
    int y;
    int distance;
    bool found_1 = false;
    bool found_2 = false;
    bool found_3 = false;

    Node(int a, int b, int c, bool x, bool y, bool z) : x(a), y(b), distance(c), found_1(x), found_2(y), found_3(z) {}
};

struct compareNodes {
    bool operator()(const Node& first, const Node& second) const {
        if (first.distance != second.distance) {
            return first.distance < second.distance;
        } else if (first.found_1 != second.found_1) {
            return first.found_1 < second.found_1;
        } else if (first.found_2 != second.found_2) {
            return first.found_2 < second.found_2;
        } else if (first.found_3 != second.found_3) {
            return first.found_3 < second.found_3;
        } else if (first.x != second.x) {
            return first.x < second.x;
        } else {
            return first.y < second.y;
        }
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    char tab[n][m];
    pair<int, int> start, meta;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tab[i][j];
            if (tab[i][j] == 'S') {
                start = make_pair(i, j);
            } else if (tab[i][j] == 'M') {
                meta = make_pair(i, j);
            }
        }
    }

    bool visited[n][m][8];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < 8; k++) {
                visited[i][j][k] = false;
            }
        }
    }

    set<Node, compareNodes> nodes;

    nodes.insert(Node(start.first, start.second, 0, false, false, false));

    Node current = *nodes.begin();

    while (!nodes.empty()) {
        current = *nodes.begin();
        nodes.erase(nodes.begin());

        if (tab[current.x][current.y] == 'M' && current.found_1 && current.found_2 && current.found_3) {
            break;
        } else if (tab[current.x][current.y] == '1') {
            current.found_1 = true;
        } else if (tab[current.x][current.y] == '2') {
            current.found_2 = true;
        } else if (tab[current.x][current.y] == '3') {
            current.found_3 = true;
        }

        if (visited[current.x][current.y][current.found_1*4+current.found_2*2+current.found_3]) {
            continue;
        } else {
            visited[current.x][current.y][current.found_1*4+current.found_2*2+current.found_3] = true;
        }

        if (current.x > 0 && tab[current.x-1][current.y] != '#' && !visited[current.x-1][current.y][current.found_1*4+current.found_2*2+current.found_3]) {
            nodes.insert(Node(current.x-1, current.y, current.distance+1, current.found_1, current.found_2, current.found_3));
        }

        if (current.x < n-1 && tab[current.x+1][current.y] != '#' && !visited[current.x+1][current.y][current.found_1*4+current.found_2*2+current.found_3]) {
            nodes.insert(Node(current.x+1, current.y, current.distance+1, current.found_1, current.found_2, current.found_3));
        }

        if (current.y > 0 && tab[current.x][current.y-1] != '#' && !visited[current.x][current.y-1][current.found_1*4+current.found_2*2+current.found_3]) {
            nodes.insert(Node(current.x, current.y-1, current.distance+1, current.found_1, current.found_2, current.found_3));
        }

        if (current.y < m-1 && tab[current.x][current.y+1] != '#' && !visited[current.x][current.y+1][current.found_1*4+current.found_2*2+current.found_3]) {
            nodes.insert(Node(current.x, current.y+1, current.distance+1, current.found_1, current.found_2, current.found_3));
        }
    }

    if (tab[current.x][current.y] == 'M' && current.found_1 && current.found_2 && current.found_3) {
        cout << current.distance << "\n";
    } else {
        cout << -1 << "\n";
    }

    return 0;
}
