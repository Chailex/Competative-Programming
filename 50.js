// To run this javascript file type "node filename.js"
// Graph - DFS using loop

const dfs = (graph, source) => {
    const stack = [source];
    while(stack.length > 0){
        const current = stack.pop();
        console.log(current);
        for(let neighbor of graph[current]){
            stack.push(neighbor);
        }
    }
};

const graph = {
    a: ['c','b'],
    b: ['d'],
    c: ['e'],
    d: ['f'],
    e: [],
    f: []
};

dfs(graph, 'a');