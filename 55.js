// Undirected Graph - Trversal - Graphs can have cycles
const graph = (edges, nodeA, nodeB)=>{
    const graph=buildGraph(edges);
    return hashpath(graph, nodeA,nodeB, new set());
};

const hashpath = (graph, src, dst, visited)=>{
    if(src===dst) return true;
    if(visited.has(src)) return false;
    visited.add(src);
    for(let neighbor of graph[src]){
        if(hashPath(graph,neighbor, dst, visited)=== true){
            return true;
        }
    }
    return false;
};

const buildGraph = (edges) => {
    const graph = {};
    for(let edge of edges){
        const [a,b] = edge;
        if(!(a in graph)) graph[a]=[];
        if(!(b in graph)) graph[b]=[];
        graph[a].push(b);
        graph[b].push(a);

    }
    return graph;
};
