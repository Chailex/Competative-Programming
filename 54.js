// Graph - Program for reaching from source to destination node- BFS Solution

const hashpath = (graph, src, dst)=>{
    const queue = [src];
    while(queue.length>0){
        const current = queue.shift();
        if(current ===dst) return true;
        for(let neighbor of graph[current]){
            queue.push(neighbor);
        }
    }
    return false;
};