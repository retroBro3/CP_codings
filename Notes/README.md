1. Adjacency list is more used because most graph we're given are sparse. For non sparse graphs sometimes adjacency matrix is more convenient.

2. adj matrix is better if you need to check if two nodes are conected, adjacency list is better if you need to add some more nodes.

### Sparse graph: 

### Dense graph:

<b>Link to study:</b> https://codeforces.com/blog/entry/94431


## DFS 
### Why we need visited array or why it is important to track visited nodes
Similar to track, a graph can be traversed depth wise, but unlike tree, reaching to any node from a source node is not similar to graph. As we know, graph could have multiple cycles, also there are no particular limit how many nodes or edges can be connect to a graph. Hereby, we have multiple paths that can be traversed. If we don't track the visited node then there could be possibilities a node appear multpile times, and end up with inifinite circulation.

### <u>**When to use dfs graph in tree**</u>:

1. In a tree question if it asked to find the height of each node

2. In a tree question if it asked to find the depth of each node

### if we have to find cyclce in a multi-component graph, then we have to loop through every node and check for cycle

&nbsp;
## Mathematical algorithm
### Extended euclidean algorithm 
Used to find co-effecient of 


ax + by = gcd(a, b) .... (i)

We know, GCD = gcd(a, b) = gcd(b, a % b)  
Or, GCD = gcd (a, b) = gcd(b % a, a)

So, a = b and b = a % b


