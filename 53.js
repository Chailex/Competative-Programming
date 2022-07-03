// Graph - Program for reaching from source to destination node- DFS Solution

const hashpath = (graph, src, dst)=>{
    if(src===dst) return true;
    for(let neighbor of graph[src]){
        if(hashpath(graph, neighbor, dst)===true){
            return true;
        }
    }
    return false;
}