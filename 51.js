// Graph - DFS using recursion

const dfs = (graph, source) => {
    console.log(source);
    for(let neighbor of graph[source]){
        dfs(graph, neighbor);
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