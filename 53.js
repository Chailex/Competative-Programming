// Graph - Program for reaching from source to destination node-

const hashpath = (graph, src, dst)=>{
    if(src===dst) return true;
    for(let neighbor of graph[src]){
        if(hashpath(graph, neighbor, dst)===true){
            return true;
        }
    }
    return false;
}