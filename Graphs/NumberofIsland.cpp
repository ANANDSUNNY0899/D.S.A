#include<iostream>
#include<vector>

using namespace std;

int numIslands(vecctor<vector<int>> &grid){
    int r = grid.size();
    int c = grid[0].size();
    int cnt = 0;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(grid[i][j]=='1'){
                dfs(grid, i, j);cnt++;
            }
        }
    }
    return cnt;
}

int main(){
      std::cout << "--- Test Case 1 ---" << std::endl;
    std::vector<std::vector<char>> grid1 = {
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '0'}
    };
    std::cout << "Input grid:" << std::endl;
    for(const auto& row : grid1) {
        for(char cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
    // Note: The numIslands function modifies the grid. If you need the original grid
    // for later use, you should pass a copy. For this example, it's fine.
    int result1 = solver.numIslands(grid1);
    std::cout << "Number of islands: " << result1 << std::endl; // Expected output: 1
    std::cout << std::endl;


    // --- Test Case 2 ---
    std::cout << "--- Test Case 2 ---" << std::endl;
    std::vector<std::vector<char>> grid2 = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };
    std::cout << "Input grid:" << std::endl;
    for(const auto& row : grid2) {
        for(char cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
    int result2 = solver.numIslands(grid2);
    std::cout << "Number of islands: " << result2 << std::endl; // Expected output: 3
    std::cout << std::endl;

    return 0;

}