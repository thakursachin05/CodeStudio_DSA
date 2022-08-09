// https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118824/offering/1381994

struct Cell {
    int xCoordinate, yCoordinate;
    int stepCount;
    Cell() {}
    Cell(int x, int y, int step) {
        xCoordinate = x;
        yCoordinate = y;
        stepCount = step;
    }
};


bool isInside(int x, int y, int n) {
    if (x >= 1 && x <= n && y >= 1 && y <= n) {
        return true;
    }
    return false;
}

int minSteps(pair<int, int> knightPosition, pair<int, int> targetPosition, int size) {
    // x and y direction, where a knight can move.
    int directionX[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int directionY[] = {-1, -2, -2, -1, 1, 2, 2, 1};


    queue<Cell> q;

    q.push(Cell(knightPosition.first, knightPosition.second, 0));
    Cell temp;
    int x, y;
    bool visited[size + 1][size + 1];


    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            visited[i][j] = false;
        }
    }

    visited[knightPosition.first][knightPosition.second] = true;
    while (!q.empty()) {
        temp = q.front();
        q.pop();


        if (temp.xCoordinate == targetPosition.first && temp.yCoordinate == targetPosition.second) {
            return temp.stepCount;
        }


        for (int i = 0; i < 8; i++) {
            x = temp.xCoordinate + directionX[i];
            y = temp.yCoordinate + directionY[i];


            if (isInside(x, y, size) && !visited[x][y]) {
                visited[x][y] = true;
                q.push(Cell(x, y, temp.stepCount + 1));
            }
        }
    }
}
