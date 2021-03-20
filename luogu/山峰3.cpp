#include <cstdio>
#include <iostream>
#include <queue>
//可爱的头文件
#define DEBUG(x) std::cerr << #x << "=" << x << std::endl
//DEBUG专用
const int MAXN = 1000 + 10;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
//8联通
struct Node {
    int x, y;
};
//结构体存点
int n, ridge, valley;
int map[MAXN][MAXN], vis[MAXN][MAXN];
bool sg, sf;
std::queue<Node> q;
//全局变量
void bfs(int x, int y) {
    Node start;	//初始值
    start.x = x, start.y = y;
    vis[x][y] = 1;
    q.push(start);
    while (!q.empty()) {
        Node temp = q.front(); q.pop();	//队首
        for (int i = 0; i <= 7; i++) {//八方向
            int nx = temp.x + dx[i];
            int ny = temp.y + dy[i];
            if (nx < 1 || nx > n || ny < 1 || ny > n) continue;	//越界
            if (map[nx][ny] == map[temp.x][temp.y] && !vis[nx][ny]) {	// 高度相等打上标记接着搜
                vis[nx][ny] = 1;
                q.push((Node){nx, ny});
            } 
            else {	// 山峰山谷是否成立
                if (map[nx][ny] > map[temp.x][temp.y]) sf = 0;
                if (map[nx][ny] < map[temp.x][temp.y]) sg = 0;
            }
        }
    }
}

int main() {
    scanf("%d", &n);
    bool flag = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &map[i][j]);
            if (map[i][j] != map[1][1]) flag = 1;
        }
    if (!flag) {	// 判断是否全部高度相等
        printf("1 1");
        return 0;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            if (!vis[i][j]) { //如果是新的联通块
                sf = 1, sg = 1;
                bfs(i, j);
                ridge += sf;
                valley += sg;
            }
        }
    printf("%d %d\n", ridge, valley);
    return 0;
}

